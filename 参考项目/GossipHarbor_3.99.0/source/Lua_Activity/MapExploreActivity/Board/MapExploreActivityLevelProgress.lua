MapExploreActivityLevelProgress = setmetatable({ProgressCellGap = 100}, LevelProgress)
MapExploreActivityLevelProgress.__index = MapExploreActivityLevelProgress

function MapExploreActivityLevelProgress:Init(maxLevel, model)
  self.m_model = model
  LevelProgress.Init(self, maxLevel)
end

function MapExploreActivityLevelProgress:GetProgressCell(level)
  local cellObject = Object.Instantiate(self.m_progressCellPrefab, self.m_sliderNode)
  local cell = cellObject:GetLuaTable()
  cell:Init(level, self.m_model)
  return cell
end

function MapExploreActivityLevelProgress:GetCurrentLevel()
  return self.m_model:GetLevel()
end

function MapExploreActivityLevelProgress:GetProgressLevel()
  return self.m_model:GetLevel()
end

MapExploreActivityLevelProgressCell = {}
MapExploreActivityLevelProgressCell.__index = MapExploreActivityLevelProgressCell

function MapExploreActivityLevelProgressCell:Init(level, model)
  self.m_index = level + 1
  self.m_model = model
  local itemType = self.m_model:GetItemTypeByIndex(self.m_index)
  local spriteName = GM.ItemDataModel:GetSpriteName(itemType)
  SpriteUtil.SetImage(self.m_iconImage, spriteName, true)
  SpriteUtil.SetImage(self.m_shadowImage, spriteName, true)
end

function MapExploreActivityLevelProgressCell:UpdateLevelContent(currentLevel, needAnimation)
  if needAnimation and not self.m_iconImage.gameObject.activeSelf and currentLevel >= self.m_index then
    local originalScale = self.m_iconImage.transform.localScale
    local sequence = DOTween.Sequence()
    sequence:Append(self.m_shadowImage.transform:DOScale(originalScale * 0.5, 0.4))
    sequence:AppendCallback(function()
      self.m_iconImage.transform.localScale = originalScale * 0.5
      self.m_iconImage.gameObject:SetActive(true)
      self.m_shadowImage.gameObject:SetActive(false)
    end)
    sequence:Append(self.m_iconImage.transform:DOScale(originalScale * 1.2, 0.3))
    sequence:AppendCallback(function()
      self.m_effectParticle:Play()
    end)
    sequence:Append(self.m_iconImage.transform:DOScale(originalScale, 0.2))
  else
    self.m_iconImage.gameObject:SetActive(currentLevel >= self.m_index)
    self.m_shadowImage.gameObject:SetActive(currentLevel < self.m_index)
  end
end

function MapExploreActivityLevelProgressCell:OnTipClicked()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end
