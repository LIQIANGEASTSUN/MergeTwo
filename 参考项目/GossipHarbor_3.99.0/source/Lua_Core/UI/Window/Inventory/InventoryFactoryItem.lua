InventoryFactoryItem = {}
InventoryFactoryItem.__index = InventoryFactoryItem

function InventoryFactoryItem:Init(detailCellLuaTable, genType, itemType, count)
  self.m_detailCellLuaTable = detailCellLuaTable
  self.m_genType = genType
  self.m_itemType = itemType
  self.m_count = count
  local iconName = RewardApi.GetRewardIconNameAndIsSetNativeSize(itemType)
  SpriteUtil.SetImage(self.m_iconImg, iconName, true)
  self:UpdateContent()
end

function InventoryFactoryItem:UpdateContent()
  self.m_numText.text = self.m_count
  local mat = self.m_count == 0 and self.m_grayMat
  self.m_iconImg.material = mat
  self.m_bgImg.material = mat
  local strColor = self.m_count == 0 and "FF0000" or "58597E"
  self.m_numText.color = UIUtil.ConvertHexColor2CSColor(strColor)
end

function InventoryFactoryItem:_OnClicked()
  self.m_detailCellLuaTable:RestartPrompt()
  if self.m_count <= 0 then
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    GM.UIManager:ShowPromptWithKey("generator_factory_notenough")
    return
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  local score, bReward = GM.MainBoardModel:GetItemGeneratorFactoryModel():AddScore(self.m_genType, self.m_itemType)
  if score then
    if bReward then
      GM.UIManager:SetEventLock(true)
      DelayExecuteFuncInView(function()
        GM.UIManager:SetEventLock(false)
      end, 0.5, self)
    end
    self.m_count = self.m_count - 1
    self:UpdateContent()
    self.m_detailCellLuaTable:PlayFlyItemAni(self.m_itemType, score)
  end
end

function InventoryFactoryItem:GetIconPosition()
  return self.m_iconImg.transform.position
end

function InventoryFactoryItem:HasCount()
  return self.m_count > 0
end

function InventoryFactoryItem:_OnTestAddOne()
  if not GameConfig.IsTestMode() then
    return
  end
  GM.MainBoardModel:GetItemGeneratorFactoryModel():StoreItem(self.m_itemType)
  self.m_count = self.m_count + 1
  self:UpdateContent()
  self.m_detailCellLuaTable:GetItemCell():UpdateContent()
end
