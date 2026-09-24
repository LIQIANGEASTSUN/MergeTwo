StringUtil = {}
StringUtil.__index = StringUtil
local specialChar = {
  "(",
  ")",
  ".",
  "%",
  "+",
  "-",
  "*",
  "?",
  "[",
  "]",
  "^",
  "$"
}

function StringUtil.Split(str, split)
  local result = {}
  if StringUtil.IsNilOrEmpty(str) then
    return result
  end
  local spliterLength = #split
  if Table.Contain(specialChar, split) then
    split = "%" .. split
  end
  local iBegin, iEnd, count = 1, 1, 1
  while iEnd ~= nil do
    iEnd = string.find(str, split, iBegin)
    if iEnd == nil then
      result[count] = string.sub(str, iBegin, #str)
    else
      result[count] = string.sub(str, iBegin, iEnd - 1)
      iBegin = iEnd + spliterLength
    end
    count = count + 1
  end
  return result
end

function StringUtil.SplitToNum(str, split)
  local arrResult = StringUtil.Split(str, split)
  for i = 1, #arrResult do
    arrResult[i] = tonumber(arrResult[i])
  end
  return arrResult
end

function StringUtil.Format(str, ...)
  if string.match(str, "%%%d+d") ~= nil then
    return string.format(str, ...)
  end
  local formats = {"%%d", "%%s"}
  local params = table.pack(...)
  local result = str
  for _, param in ipairs(params) do
    local index
    for _, format in ipairs(formats) do
      local curIndex = string.find(result, format)
      if curIndex ~= nil then
        if index == nil then
          index = curIndex
        else
          index = math.min(index, curIndex)
        end
      end
    end
    if index ~= nil then
      result = string.sub(result, 1, index - 1) .. param .. string.sub(result, index + 2)
    else
      Log.Warning("\230\150\135\230\161\136 [" .. str .. "] \231\154\132\228\188\160\229\133\165\229\143\130\230\149\176\232\191\135\229\164\154(" .. #params .. "\228\184\170)")
      break
    end
  end
  local index = string.find(result, "%%%%")
  while index ~= nil do
    result = string.sub(result, 1, index - 1) .. string.sub(result, index + 1)
    index = string.find(result, "%%%%")
  end
  return result
end

function StringUtil.Replace(str, src, dst)
  return string.gsub(str, src, dst)
end

function StringUtil.IsNilOrEmpty(str)
  return IsNil(str) or str == "" or StringUtil.Trim(str) == ""
end

function StringUtil.IsNull(str)
  return str == "null"
end

function StringUtil.TruncateAndShowEllipsis(text, suffix)
  local utility = CS.UnityEngine.UI.LayoutUtility
  local rectTransform = text.rectTransform
  local containerWidth = rectTransform.sizeDelta.x
  local textWidth = utility.GetPreferredWidth(rectTransform)
  if containerWidth >= textWidth then
    return
  end
  local originalCodes = {}
  for _, v in utf8.codes(text.text) do
    table.insert(originalCodes, utf8.char(v))
  end
  local length = #originalCodes
  local newText
  while containerWidth < textWidth do
    length = length - 1
    newText = table.concat(originalCodes, "", 1, length)
    text.text = newText
    textWidth = utility.GetPreferredWidth(rectTransform)
  end
  suffix = suffix or ".."
  text.text = text.text .. suffix
end

function StringUtil.rFind(str, patternStr)
  Log.Assert(IsString(str) or IsString(patternStr), "StringUtil.rFind params are not all string")
  Log.Assert(patternStr ~= "", "StringUtil.rFind patternStr shouldn't be empty")
  local len = string.len(str)
  local rStr = string.reverse(str)
  local rPattern = string.reverse(patternStr)
  local beginIdx, endIdx = string.find(rStr, rPattern, 1, true)
  if not beginIdx then
    return
  end
  return len - endIdx + 1, len - beginIdx + 1
end

function StringUtil.rFindChar(str, char)
  Log.Assert(IsString(str) and IsString(char), "StringUtil.rFindChar params are not all strings")
  Log.Assert(#char == 1, "StringUtil.rFindChar char should be single letter")
  local byte = char:byte()
  for i = #str, 1, -1 do
    if byte == str:byte(i) then
      return i
    end
  end
end

function StringUtil.StartWith(str, prefix)
  local len = string.len(prefix)
  return string.sub(str, 1, len) == prefix
end

function StringUtil.EndWith(str, suffix)
  return string.sub(str, -string.len(suffix)) == suffix
end

function StringUtil.Trim(str)
  return (str:gsub("^%s*(.-)%s*$", "%1"))
end

function StringUtil.IsAlpha(char)
  local uAscii = string.byte(char)
  return 65 <= uAscii and uAscii <= 90 or 97 <= uAscii and uAscii <= 122
end

function StringUtil.IsDigit(char)
  local uAscii = string.byte(char)
  return 48 <= uAscii and uAscii <= 57
end

function StringUtil.MakeColorFormat(str, color)
  local colorFormat = "<color=#%s>%s</color>"
  if not str then
    return
  end
  if not color then
    return str
  end
  return StringUtil.Format(colorFormat, color, str)
end

function StringUtil.GetElementInTextStr(elementName)
  return "<sprite=\"" .. elementName .. "\" name=\"" .. elementName .. "\">"
end

function StringUtil.IsPerfectMatch(str, pattern)
  return str == string.match(str, pattern)
end

function StringUtil.GetVerificationCode()
  local strCode = ""
  for i = 1, 4 do
    strCode = strCode .. math.random(0, 9)
  end
  return strCode
end

function StringUtil.GetPlayerNameWithLimit(name, maxLimit)
  if not name or type(name) ~= "string" or #name <= 0 then
    return ""
  end
  maxLimit = maxLimit or 3
  local curByte
  local limitCount = 0
  for i = 1, maxLimit do
    curByte = string.byte(name, limitCount + 1)
    if 239 < curByte then
      limitCount = limitCount + 4
    elseif 223 < curByte then
      limitCount = limitCount + 3
    elseif 128 < curByte then
      limitCount = limitCount + 2
    else
      limitCount = limitCount + 1
    end
    if limitCount >= #name then
      break
    end
  end
  if limitCount < #name then
    return string.sub(name, 0, limitCount) .. "..."
  end
  return name
end

function StringUtil.IsValidUrl(url)
  return string.find(url, "^https?://") ~= nil
end

function StringUtil.Append(source, target, sep)
  if StringUtil.IsNilOrEmpty(source) then
    return target
  end
  return source .. (sep or ";") .. target
end
