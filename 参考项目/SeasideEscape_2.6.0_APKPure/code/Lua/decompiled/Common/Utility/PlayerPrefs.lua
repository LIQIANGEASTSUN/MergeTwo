CSPlayerPrefs = CS.OneSDK.PlayerPrefsT
PlayerPrefs = setmetatable({}, {
  __index = CSPlayerPrefs
})
PlayerPrefs.__index = PlayerPrefs
PlayerPrefs.isDirty = false
local isTestMode = GameConfig.IsTestMode()

function PlayerPrefs.CheckKey(key)
  if isTestMode and not key then
    Log.Error("PlayerPrefs: key is nil")
  end
end

function PlayerPrefs.SetInt(key, value)
  PlayerPrefs.CheckKey(key)
  CSPlayerPrefs.SetInt(key, value)
  PlayerPrefs.isDirty = true
end

function PlayerPrefs.SetFloat(key, value)
  PlayerPrefs.CheckKey(key)
  CSPlayerPrefs.SetFloat(key, value)
  PlayerPrefs.isDirty = true
end

function PlayerPrefs.SetString(key, value)
  PlayerPrefs.CheckKey(key)
  CSPlayerPrefs.SetString(key, value)
  PlayerPrefs.isDirty = true
end

function PlayerPrefs.DeleteKey(key)
  PlayerPrefs.CheckKey(key)
  CSPlayerPrefs.DeleteKey(key)
  PlayerPrefs.isDirty = true
end

function PlayerPrefs.DeleteAll()
  CSNetLibManager:ResetMessageId()
  CSPlayerPrefs.DeleteAll()
  PlayerPrefs.isDirty = true
  PlayerPrefs.Save()
end

function PlayerPrefs.Save()
  if PlayerPrefs.isDirty then
    CSPlayerPrefs.Save()
    PlayerPrefs.isDirty = false
  end
end

function PlayerPrefs.GetInt(key, defaultVal)
  return CSPlayerPrefs.GetInt(key, defaultVal or 0)
end

function PlayerPrefs.GetFloat(key, defaultVal)
  return CSPlayerPrefs.GetFloat(key, defaultVal or 0)
end

function PlayerPrefs.GetString(key, defaultVal)
  return CSPlayerPrefs.GetString(key, defaultVal or "")
end

function PlayerPrefs.SetTimestamp(key, value)
  if not IsNumber(value) then
    Log.Error("timestamp type error")
    return
  end
  PlayerPrefs.CheckKey(key)
  CSPlayerPrefs.SetString(key, tostring(value))
  PlayerPrefs.isDirty = true
end

function PlayerPrefs.GetTimestamp(key)
  PlayerPrefs.CheckKey(key)
  local strTimestamp = CSPlayerPrefs.GetString(key, "")
  if StringUtil.IsNilOrEmpty(strTimestamp) then
    return 0
  end
  return tonumber(strTimestamp) or 0
end
