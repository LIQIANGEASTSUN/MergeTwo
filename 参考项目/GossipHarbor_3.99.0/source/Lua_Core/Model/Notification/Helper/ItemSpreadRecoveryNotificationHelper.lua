ItemSpreadRecoveryNotificationHelper = setmetatable({}, BaseNotificationHelper)
ItemSpreadRecoveryNotificationHelper.__index = ItemSpreadRecoveryNotificationHelper

function ItemSpreadRecoveryNotificationHelper.IsSceneExist(strScene)
  if strScene == NotificationScene.ItemCooldown then
    return true
  end
  return false
end

function ItemSpreadRecoveryNotificationHelper:GetType()
  return NotificationType.ItemSpreadRecovery
end

function ItemSpreadRecoveryNotificationHelper:Generate(strScene)
  local results = {}
  local strTileKey, strDescKey, idx = GM.NotificationModel:GetTextTileAndDesc(strScene)
  local dt = {scene = strScene, keyId = idx}
  local strJson = json.encode(dt)
  for position in GM.MainBoardModel:GetValidPositionIterator() do
    local itemModel = GM.MainBoardModel:GetItem(position)
    local itemSpread = itemModel and itemModel:GetComponent(ItemSpread)
    if itemSpread ~= nil and itemSpread:GetItemRestNumber() == 0 and not itemSpread:IsDisposable() then
      local startTimer = itemSpread:GetStartTimer()
      local delay = startTimer + itemSpread:GetTimerDuration() - GM.GameModel:GetServerTime()
      if 1200 <= delay then
        local itemName = GM.GameTextModel:GetText(ItemNameDefinition.GetName(itemModel:GetType()))
        table.insert(results, {
          Type = self:GetType(),
          Data = strJson,
          Title = GM.GameTextModel:GetText(strTileKey),
          Message = GM.GameTextModel:GetText(strDescKey, itemName),
          Delay = delay
        })
        return results
      end
    end
  end
  return results
end
