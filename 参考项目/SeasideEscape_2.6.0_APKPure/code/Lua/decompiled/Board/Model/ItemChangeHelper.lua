ItemChangeHelper = {}
ItemChangeHelper.__index = ItemChangeHelper
local ItemChangeState = {
  Origin = "0",
  Ongoing = "1",
  Changed = "2"
}

function ItemChangeHelper.LoadConfigs()
  ItemChangeHelper.changedPds = {}
  local chainNums = require("Data.Config.ItemChangePd", true)
  for _, v in ipairs(chainNums) do
    ItemChangeHelper.changedPds[v.ChainNum] = v.Version
  end
end

function ItemChangeHelper.ChangeItemCode(code, force)
  local isOpen = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemChange)
  if force and isOpen then
    return ItemChangeHelper.ChangeItemCodeForce(code)
  end
  if GM.MiscModel:Get(EMiscKey.ItemChangedState) ~= ItemChangeState.Ongoing then
    return nil
  end
  local innerCode, prefix = ItemUtility.GetInnerCodeAndPrefixByCode(code)
  local series = ItemUtility.GetChainNumber(innerCode)
  if not series then
    return
  end
  local isOpen = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemChange)
  local originVer = ItemChangeHelper.mapVersions[series] or 0
  local curVer = isOpen and ItemChangeHelper.changedPds[series] or 0
  if originVer == curVer then
    return nil
  end
  if originVer ~= 0 then
    local ruleMap = ItemChangeHelper.GetRuleByVersion(originVer)
    local changeRule = ruleMap[innerCode]
    if changeRule then
      if changeRule.UnlockPd and changeRule.ChangedOffL2Type and not GM.ItemDataModel:IsUnlocked(changeRule.UnlockPd) then
        innerCode = changeRule.ChangedOffL2Type
      elseif changeRule.ChangedOffType then
        innerCode = changeRule.ChangedOffType
      end
    end
  end
  if curVer ~= 0 then
    local ruleMap = ItemChangeHelper.GetRuleByVersion(curVer)
    local changeRule = ruleMap[innerCode]
    if changeRule and changeRule.UnlockPd and not GM.ItemDataModel:IsUnlocked(changeRule.UnlockPd) then
      innerCode = changeRule.ChangedOnL2Type or innerCode
    else
      innerCode = changeRule and changeRule.ChangedOnType or innerCode
    end
  end
  return prefix and prefix .. innerCode or innerCode
end

function ItemChangeHelper.ChangeItemCodeForce(code)
  local innerCode, prefix = ItemUtility.GetInnerCodeAndPrefixByCode(code)
  local series = ItemUtility.GetChainNumber(innerCode)
  if not series then
    return
  end
  local curVer = ItemChangeHelper.changedPds[series] or 0
  if curVer == 0 then
    return
  end
  local ruleMap = ItemChangeHelper.GetRuleByVersion(curVer)
  local changeRule = ruleMap[innerCode]
  if changeRule and changeRule.UnlockPd and not GM.ItemDataModel:IsUnlocked(changeRule.UnlockPd) then
    innerCode = changeRule.ChangedOnL2Type or innerCode
  else
    innerCode = changeRule and changeRule.ChangedOnType or innerCode
  end
  return prefix and prefix .. innerCode or innerCode
end

function ItemChangeHelper.GetItemSprite(type)
  if not ItemChangeHelper.IsItemChanged(type) then
    if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.MergeLineColor) then
      local sprite = type .. "_new"
      return ImageFileConfigName.HasConfig(sprite) and sprite or type
    else
      return type
    end
  end
  local sprite = type .. "_pic"
  return ImageFileConfigName.HasConfig(sprite) and sprite or type
end

function ItemChangeHelper.IsItemChanged(code)
  if not ItemChangeHelper.HasItemChanged() then
    return false
  end
  local series = ItemUtility.GetChainNumber(code)
  if not (series and ItemChangeHelper.changedPds[series]) or ItemChangeHelper.changedPds[series] == 0 then
    return false
  end
  return true
end

function ItemChangeHelper.UpDateChangeStateOnStart()
  local changeState = GM.MiscModel:Get(EMiscKey.ChainVersion)
  ItemChangeHelper.mapVersions = {}
  if not StringUtil.IsNilOrEmpty(changeState) then
    for _, v in pairs(StringUtil.Split(changeState, ";")) do
      local list = StringUtil.Split(v, "-")
      ItemChangeHelper.mapVersions[list[1]] = tonumber(list[2])
    end
  end
  local isOpen = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemChange)
  local change = false
  for chain, v in pairs(ItemChangeHelper.changedPds) do
    local value = isOpen and v or 0
    if value ~= ItemChangeHelper.mapVersions[chain] then
      change = true
      break
    end
  end
  if change then
    GM.MiscModel:Set(EMiscKey.ItemChangedState, ItemChangeState.Ongoing)
    GM.ItemDataModel:UpdateItemUnlock(ItemChangeHelper.changedPds, ItemChangeHelper.mapVersions)
    return
  end
  for chain, v in pairs(ItemChangeHelper.mapVersions) do
    local value = isOpen and ItemChangeHelper.changedPds[chain] or 0
    if v ~= value then
      change = true
      break
    end
  end
  if change then
    GM.MiscModel:Set(EMiscKey.ItemChangedState, ItemChangeState.Ongoing)
    GM.ItemDataModel:UpdateItemUnlock(ItemChangeHelper.changedPds, ItemChangeHelper.mapVersions)
  end
end

function ItemChangeHelper.UpDateChangeStateOnEnd()
  local state = GM.MiscModel:Get(EMiscKey.ItemChangedState)
  if state == ItemChangeState.Ongoing then
    local isOpen = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemChange)
    state = isOpen and ItemChangeState.Changed or ItemChangeState.Origin
    GM.MiscModel:Set(EMiscKey.ItemChangedState, state)
    if not isOpen then
      GM.MiscModel:Set(EMiscKey.ChainVersion, "")
    else
      local chainVersions = {}
      for chain, v in pairs(ItemChangeHelper.changedPds) do
        table.insert(chainVersions, chain .. "-" .. v)
      end
      GM.MiscModel:Set(EMiscKey.ChainVersion, table.concat(chainVersions, ";"))
    end
  end
end

function ItemChangeHelper.HasItemChanged()
  return GM.MiscModel:Get(EMiscKey.ItemChangedState) == ItemChangeState.Changed
end

function ItemChangeHelper.GetRuleByVersion(version)
  if ItemChangeHelper.mapRule == nil then
    ItemChangeHelper.mapRule = {}
  end
  if ItemChangeHelper.mapRule[version] then
    return ItemChangeHelper.mapRule[version]
  end
  local suffix = version == 1 and "" or version
  local configs = require("Data.Config.ItemChangeRule" .. suffix, true)
  local modelChangeRules = {}
  for _, v in ipairs(configs) do
    modelChangeRules[v.Type] = v
  end
  ItemChangeHelper.mapRule[version] = modelChangeRules
  return modelChangeRules
end

function ItemChangeHelper.ChangeOrderItems(requirements)
  local dirty
  for i = 1, #requirements do
    local code = ItemUtility.CheckData(requirements[i], EItemUnlockState.Locked)
    if code then
      dirty = true
      requirements[i] = code
    end
  end
  return dirty
end
