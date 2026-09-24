TimeUtil = {}
local math = _ENV.math
Sec2Day = 86400
ETimeFormat = {
  YMD = "%Y/%m/%d",
  MDY = "%m/%d/%Y",
  DMY = "%d/%m/%Y",
  YMDHMS = "%Y-%m-%d %H:%M:%S",
  UTCYMDHMS = "!%Y-%m-%d %H:%M:%S"
}
ETimeUnits = {
  Second = 1,
  Minute = 2,
  Hour = 3,
  Day = 4,
  Month = 5,
  Year = 6
}
local timeBase = {
  [ETimeUnits.Second] = 60,
  [ETimeUnits.Minute] = 60,
  [ETimeUnits.Hour] = 24,
  [ETimeUnits.Day] = 30,
  [ETimeUnits.Month] = 12
}

function TimeUtil.GetTimeInSecond()
  return os.time()
end

function TimeUtil.GetTimeInMS()
  return TimeUtil.GetTimeInSecond() * 1000
end

function TimeUtil.ToMSOrHMS(timeStamp, customFormatHMS, customFormatMS)
  local m = math.floor(timeStamp / 60) % 60
  local s = math.floor(timeStamp % 60)
  if 3600 <= timeStamp then
    local h = math.floor(timeStamp / 3600)
    if customFormatHMS then
      return GM.GameTextModel:GetText(customFormatHMS, h, m, s)
    else
      return string.format("%02d:%02d:%02d", h, m, s)
    end
  end
  if customFormatMS then
    return GM.GameTextModel:GetText(customFormatMS, m, s)
  else
    return string.format("%02d:%02d", m, s)
  end
end

function TimeUtil.ToHMS(timeStamp, customFormatHMS)
  local m = math.floor(timeStamp / 60) % 60
  local s = math.floor(timeStamp % 60)
  local h = math.floor(timeStamp / 3600)
  if customFormatHMS then
    return GM.GameTextModel:GetText(customFormatHMS, h, m, s)
  else
    return string.format("%02d:%02d:%02d", h, m, s)
  end
end

function TimeUtil.ToDate(timeStamp, eETimeFormat)
  eETimeFormat = eETimeFormat or ETimeFormat.MDY
  return os.date(eETimeFormat, timeStamp)
end

function TimeUtil.ToCur24ClockTimestamp(timeStamp)
  return (timeStamp // Sec2Day + 1) * Sec2Day
end

function TimeUtil.GetWeekDay(timeStamp)
  return (timeStamp // 86400 + 3) % 7 + 1
end

function TimeUtil.ToNearestUnit(timeStamp, eMinTimeUnits)
  local timeUnitsStr = {
    [ETimeUnits.Second] = GM.GameTextModel:GetText("common_time_s"),
    [ETimeUnits.Minute] = GM.GameTextModel:GetText("common_time_m"),
    [ETimeUnits.Hour] = GM.GameTextModel:GetText("common_time_h"),
    [ETimeUnits.Day] = GM.GameTextModel:GetText("common_time_d")
  }
  eMinTimeUnits = eMinTimeUnits or ETimeUnits.Second
  local tempTime = 1
  for i = 1, eMinTimeUnits - 1 do
    tempTime = tempTime * timeBase[i]
  end
  for i = eMinTimeUnits, ETimeUnits.Hour do
    if timeStamp < tempTime * timeBase[i] then
      return timeStamp // tempTime, timeUnitsStr[i]
    else
      tempTime = tempTime * timeBase[i]
    end
  end
  return timeStamp // tempTime, timeUnitsStr[ETimeUnits.Day]
end

function TimeUtil.TransformToUnitRoundUp(timeStamp, timeUnits)
  local tempTime = 1
  for i = ETimeUnits.Second, timeUnits - 1 do
    tempTime = tempTime * timeBase[i]
  end
  if timeStamp % tempTime ~= 0 then
    return timeStamp // tempTime + 1
  end
  return timeStamp // tempTime
end

function TimeUtil.ParseTimeDescription(second, num, bForceNum, bIgnoreZero)
  second = math.max(second, 0)
  num = num or 2
  local strSec = GM.GameTextModel:GetText("common_time_s")
  local strMin = GM.GameTextModel:GetText("common_time_m")
  local strHour = GM.GameTextModel:GetText("common_time_h")
  local strDay = GM.GameTextModel:GetText("common_time_d")
  local day = math.floor(second / 86400)
  local hour = math.floor(second % 86400 / 3600)
  local min = math.floor(second % 3600 / 60)
  local sec = second % 60
  local numT = {
    day,
    hour,
    min,
    sec
  }
  local strT = {
    day .. strDay,
    hour .. strHour,
    min .. strMin,
    sec .. strSec
  }
  local startIndex = #numT
  for i = 1, #numT do
    if 0 < numT[i] or bForceNum and num > #numT - i then
      startIndex = i
      break
    end
  end
  local result = ""
  local spacer = LocalizationModel:GetCurLanguageInString() == "JA" and "" or " "
  for i = startIndex, #strT do
    if num <= 0 then
      break
    end
    if 0 < numT[i] or not bIgnoreZero then
      result = result .. (#result == 0 and "" or spacer) .. strT[i]
    end
    num = num - 1
  end
  if #result == 0 then
    result = strT[#strT]
  end
  return result
end

function TimeUtil.GetTimeSecondsFromStr(timeStr)
  local mtab = {
    JAN = 1,
    FEB = 2,
    MAR = 3,
    APR = 4,
    MAY = 5,
    JUN = 6,
    JUL = 7,
    AUG = 8,
    SEP = 9,
    OCT = 10,
    NOV = 11,
    DEC = 12
  }
  local _weekday, _day, _monthAbbr, _year, _hour, _min, _sec = string.match(timeStr, "(%a+,) (%d+) (%a+) (%d+) (%d+):(%d+):(%d+)")
  if _weekday == nil or _day == nil or _monthAbbr == nil or _year == nil or _hour == nil or _min == nil or _sec == nil then
    return 0
  end
  local _month = mtab[string.upper(_monthAbbr)]
  local timestamp = os.time({
    year = _year,
    month = _month,
    day = _day,
    hour = _hour,
    min = _min,
    sec = _sec,
    isdst = false
  })
  return timestamp
end

local function getTimeZone()
  local now = os.time()
  local timeZone = os.difftime(now, os.time(os.date("!*t", now)))
  if os.date("*t", os.time()).isdst then
    timeZone = timeZone + 3600
  end
  return math.ceil(timeZone)
end

TimeUtil.TimeZone = getTimeZone()

function TimeUtil.ToTimestamp(strTimeInYYYYMMDDHHMMSS)
  local _, _, year, month, day, hour, min, sec = string.find(strTimeInYYYYMMDDHHMMSS, "(%d%d%d%d)%-(%d%d)%-(%d%d)[%a%s](%d%d):(%d%d):(%d%d)")
  return os.time({
    year = year,
    month = month,
    day = day,
    hour = hour,
    min = min,
    sec = sec,
    isdst = false
  }) + getTimeZone()
end

function TimeUtil.GetFormatTime(timeInSecond)
  local timeFormat = {}
  timeFormat.year = tonumber(os.date("%Y", timeInSecond))
  timeFormat.month = tonumber(os.date("%m", timeInSecond))
  timeFormat.day = tonumber(os.date("%d", timeInSecond))
  timeFormat.hour = tonumber(os.date("%H", timeInSecond))
  timeFormat.minute = tonumber(os.date("%M", timeInSecond))
  timeFormat.second = tonumber(os.date("%S", timeInSecond))
  return timeFormat
end

function TimeUtil.GetWeek(timeStamp)
  local time = TimeUtil.GetFormatTime(timeStamp)
  if time.month == 1 or time.month == 2 then
    time.month = time.month + 12
    time.year = time.year - 1
  end
  local m1, _ = math.modf(3 * (time.month + 1) / 5)
  local m2, _ = math.modf(time.year / 4)
  local m3, _ = math.modf(time.year / 100)
  local m4, _ = math.modf(time.year / 400)
  local iWeek = (time.day + 2 * time.month + m1 + time.year + m2 - m3 + m4) % 7
  return iWeek + 1
end
