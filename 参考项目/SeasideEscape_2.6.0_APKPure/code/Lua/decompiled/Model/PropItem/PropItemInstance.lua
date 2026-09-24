PropItemMoreCard = setmetatable({}, PropItemBase)
PropItemMoreCard.__index = PropItemMoreCard

function PropItemMoreCard:OnAcquired(time, type, itemId)
  local model = AlbumModel.GetActiveModel()
  if model then
    model:AcquireBuffItem(itemId)
    return true
  end
end

PropItemTimedBuff = setmetatable({}, PropItemBase)
PropItemTimedBuff.__index = PropItemTimedBuff

function PropItemTimedBuff:OnAcquired(time, type, itemId)
  local model = GM.ActivityManager:GetModel(ActivityType.TimedBuff)
  model:AcquireBuffItem(itemId)
  return true
end

PropItemBalloon = setmetatable({}, PropItemBase)
PropItemBalloon.__index = PropItemBalloon

function PropItemBalloon.GetIcon(itemConfig)
  local index = itemConfig.exInfo:find("-")
  if not index then
    return itemConfig.exInfo
  end
  return itemConfig.exInfo:sub(1, index - 1)
end

function PropItemBalloon:OnAcquired(num, strArgs, itemId, score)
  local args = StringUtil.Split(strArgs, "-")
  local argsNum = #args
  local icon = args[1]
  local minId, maxId, nearScore = tonumber(args[2]), tonumber(args[3]), tonumber(args[4])
  for i = 1, num do
    GM.BalloonRewardModel:AcquireBalloon(icon, score, minId, maxId, nearScore)
  end
  return true
end
