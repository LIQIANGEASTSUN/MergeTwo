GeneralGemConfirmWindow = setmetatable({}, BaseWindow)
GeneralGemConfirmWindow.__index = GeneralGemConfirmWindow

function GeneralGemConfirmWindow:Init(img, outImg, titleKey, descKey, cost, confirmCallback, initFunc, gemUpdateFunc, reward, desc)
  self.m_titleText.text = GM.GameTextModel:GetText(titleKey)
  self.m_desc = desc or GM.GameTextModel:GetText(descKey, cost)
  self.m_cost = cost
  self.m_bUpdate = gemUpdateFunc ~= nil
  local bImg = not StringUtil.IsNilOrEmpty(img)
  local bOutImg = not StringUtil.IsNilOrEmpty(outImg)
  local bReward = reward ~= nil
  local descSizeDelta = not (bImg or bOutImg) and Vector2(756, 251) or Vector2(565, 251)
  self:SetDescSizeDelta(descSizeDelta)
  local imgSizeDelta = not bOutImg and Vector2(216, 216) or Vector2(169, 169)
  self:SetImgSizeDelta(imgSizeDelta)
  self.m_itemImage.gameObject:SetActive(bImg)
  if bImg then
    SpriteUtil.SetImage(self.m_itemImage, img)
  end
  self.m_outerImage.gameObject:SetActive(bOutImg)
  if bOutImg then
    SpriteUtil.SetImage(self.m_outerImage, outImg)
  end
  self.m_rewardItem.gameObject:SetActive(bReward)
  if bReward then
    self.m_rewardItem:Init(reward)
    self.m_rewardItem:HideTipButton()
  end
  self:UpdateContent(cost)
  self.m_confirmCallback = confirmCallback
  self.m_gemUpdateFunc = gemUpdateFunc
  if initFunc then
    initFunc(self)
  end
end

function GeneralGemConfirmWindow:UpdatePerSecond()
  if not self.m_bUpdate then
    return
  end
  local gemCost = 0
  if self.m_gemUpdateFunc then
    gemCost = self.m_gemUpdateFunc() or 0
  end
  self:UpdateContent(gemCost)
end

function GeneralGemConfirmWindow:GetCost()
  return self.m_cost or 0
end

function GeneralGemConfirmWindow:SetDecVisible(bShow)
  UIUtil.SetActive(self.m_decGo, bShow)
end

function GeneralGemConfirmWindow:SetDiscountSale(oriPrice)
  self.m_oriPriceText.text = oriPrice
  UIUtil.SetActive(self.m_greenSimpleButtonGo, false)
  UIUtil.SetActive(self.m_saleBtnGo, true)
end

function GeneralGemConfirmWindow:UpdateContent(cost)
  if self.m_cost == 0 then
    return
  end
  self.m_cost = cost
  self.m_greenText.text = cost
  self.m_costText.text = cost
  self.m_descText.text = self.m_desc
end

function GeneralGemConfirmWindow:SetUpdate()
  self.m_bUpdate = true
end

function GeneralGemConfirmWindow:SetIcon(spriteName)
  SpriteUtil.SetImage(self.m_itemImage, spriteName)
  self.m_descText.gameObject.transform.sizeDelta = Vector2(565, 251)
end

function GeneralGemConfirmWindow:SetDescSizeDelta(vec2)
  local vec = vec2 or Vector2(565, 251)
  self.m_descText.gameObject.transform.sizeDelta = vec
end

function GeneralGemConfirmWindow:SetImgSizeDelta(vec2)
  local vec = vec2 or Vector2(216, 216)
  self.m_itemImage.gameObject.transform.sizeDelta = vec
end

function GeneralGemConfirmWindow:_OnConfirmClicked()
  if self.m_cost > 0 and self.m_confirmCallback then
    self.m_bUpdate = false
    self.m_confirmed = true
  end
  self:Close()
end

function GeneralGemConfirmWindow:OnCloseFinish()
  BaseWindow.OnCloseFinish(self)
  if self.m_confirmed then
    self.m_confirmCallback(self)
  end
end
