BoardModelHelper = {}
BoardModelHelper.__index = BoardModelHelper

function BoardModelHelper.GetActiveModel()
  for _, def in pairs(HuntActivityDefinition) do
    if GM.UIManager:IsViewOpen(def.MainWindowPrefabName) then
      return BoardModelHelper.GetModelByGameMode(EGameMode.Hunt)
    end
  end
  for _, def in pairs(CloudsDashDefinition) do
    if GM.UIManager:IsViewOpen(def.MainWindowPrefabName) then
      return BoardModelHelper.GetModelByGameMode(EGameMode.CloudsDash)
    end
  end
  for _, def in pairs(HuntMapActivityDefinition) do
    if GM.UIManager:IsViewOpen(def.MainWindowPrefabName) then
      return BoardModelHelper.GetModelByGameMode(EGameMode.HuntMap)
    end
  end
  local currentMode = GM.SceneManager:GetGameMode()
  return BoardModelHelper.GetModelByGameMode(currentMode)
end

function BoardModelHelper.GetModelByGameMode(gameMode)
  local activityModel = BoardModelHelper.GetActivityModelByGameMode(gameMode)
  if activityModel then
    return activityModel:GetBoardModel()
  end
  Log.Assert(gameMode == EGameMode.Main or gameMode == EGameMode.Map, "\230\156\170\231\159\165\231\154\132 GameMode")
  return GM.MainBoardModel
end

function BoardModelHelper.GetActivityModelByGameMode(gameMode)
  if gameMode == EGameMode.Map or gameMode == EGameMode.Main then
    return nil
  end
  local eGameMode2ActDef = {
    [EGameMode.Hunt] = {
      def = HuntActivityDefinition,
      checkFun = function(model)
        return model and (model:GetState() == ActivityState.Started or model:GetState() == ActivityState.Ended)
      end
    },
    [EGameMode.CloudsDash] = {
      def = CloudsDashDefinition,
      checkFun = function(model)
        return model and model:GetState() == ActivityState.Started
      end
    },
    [EGameMode.HuntMap] = {
      def = HuntMapActivityDefinition,
      checkFun = function(model)
        return model and (model:GetState() == ActivityState.Started or model:GetState() == ActivityState.Ended)
      end
    }
  }
  if eGameMode2ActDef[gameMode] then
    for k, _ in pairs(eGameMode2ActDef[gameMode].def) do
      local activityModel = GM.ActivityManager:GetModel(k)
      if eGameMode2ActDef[gameMode].checkFun(activityModel) then
        return activityModel
      end
    end
  end
  return nil
end
