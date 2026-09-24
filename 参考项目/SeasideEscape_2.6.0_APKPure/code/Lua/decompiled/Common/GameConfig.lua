local csClientVersion = ProjectConfig.CLIENT_CODE_VERSION
local gameToken = ProjectConfig.GAME_TOKEN
local isTestMode = ProjectConfig.IS_TEST_MODE
GameConfig = {
  CURRENT_PLATFORM = CSPlatform:GetChannel(),
  PROJECT_ID = ProjectConfig.PROJECT_ID
}
GameConfig.__index = GameConfig

function GameConfig.IsTestMode()
  return isTestMode
end

function GameConfig.GetCurrentVersion()
  return csClientVersion
end

function GameConfig.GetGameToken()
  return gameToken
end

function GameConfig.GetStagingMode()
  if GameConfig.IsTestMode() then
    local selectedServer = NetworkConfig.GetSelectedServer()
    if selectedServer == "OS_staging" or selectedServer == "ML_staging" then
      return "staging"
    elseif selectedServer == "staging_plus_1" or selectedServer == "staging_plus_2" then
      return selectedServer
    end
  end
  return nil
end

if GameConfig.GetCurrentVersion() ~= csClientVersion then
  ProjectConfig.CLIENT_CODE_VERSION = GameConfig.GetCurrentVersion()
end

function GameConfig.IsGooglePlay()
  return GameConfig.CURRENT_PLATFORM == Channels.GOOGLEPLAY:GetValue()
end
