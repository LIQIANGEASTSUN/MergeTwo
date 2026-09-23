BoardViewHelper = {}

function BoardViewHelper.GetActiveView()
  local currentMode = GM.SceneManager:GetGameMode()
  if currentMode == EGameMode.Main then
    return MainBoardView.GetInstance()
  else
    return nil
  end
end
