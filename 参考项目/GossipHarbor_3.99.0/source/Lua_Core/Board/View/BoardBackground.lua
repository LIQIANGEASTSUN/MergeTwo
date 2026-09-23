BoardBackground = {}
BoardBackground.__index = BoardBackground
EBoardBackgroundElement = {
  Bg = "bg",
  BoardBg = "boardBg",
  BoardBgSimple = "boardBgSimple",
  Counter = "counter",
  Deco1 = "deco1",
  Deco2 = "deco2",
  ItemBoard = "itemBoard"
}
BoardBackground.DefaultRes = "BoardBackground_Default"

function BoardBackground:Awake()
  self.m_mapInitPos = {}
  self.m_mapTransform = {}
  self.m_mapRenderer = {}
  self.m_mapInitSize = {}
  self.m_mapInitScale = {}
  self.m_mapInitSprite = {}
  local spriteRenderer
  for _, v in pairs(EBoardBackgroundElement) do
    if self["m_" .. v .. "Trans"] then
      self.m_mapTransform[v] = self["m_" .. v .. "Trans"]
      self.m_mapInitPos[v] = self.m_mapTransform[v].localPosition
      self.m_mapRenderer[v] = self.m_mapTransform[v].gameObject:GetComponent(typeof(SpriteRenderer))
      self.m_mapInitSize[v] = self.m_mapRenderer[v].size
      self.m_mapInitScale[v] = self.m_mapTransform[v].localScale
      self.m_mapInitSprite[v] = self.m_mapRenderer[v].sprite
    end
  end
  self:AdjustBackground()
end

function BoardBackground:AdjustBackground()
  local adjustSize = ScreenFitter.GetScreenAdjustSize()
  for k, _ in pairs(EBoardBackgroundElement) do
    if self["_Adjust" .. k] then
      self["_Adjust" .. k](self, adjustSize)
    end
  end
end

function BoardBackground:UpdateBackgroundByConfig(config)
  if Table.IsEmpty(config) then
    for k, v in pairs(self.m_mapRenderer) do
      v.sprite = self.m_mapInitSprite[k]
    end
    return
  end
  for _, key in pairs(EBoardBackgroundElement) do
    if config[key] then
      self.m_mapRenderer[key].enabled = true
      if config[key] == self.DefaultRes then
        self.m_mapRenderer[key].sprite = self.m_mapInitSprite[key]
      else
        SpriteUtil.SetSpriteRenderer(self.m_mapRenderer[key], config[key])
      end
    else
      self.m_mapRenderer[key].enabled = false
    end
  end
end

function BoardBackground:_AdjustBg(adjustSize)
  local k = EBoardBackgroundElement.Bg
  local scaleX = math.max(1, adjustSize.x / ScreenFitter.GetStandardWidth())
  local _, deltaY = ScreenFitter.GetMaxSupportedRatioSizeDelta()
  local scaleY = 1 + deltaY / self.m_mapRenderer[k].size.y
  local scale = math.max(scaleX, scaleY) * self.m_mapInitScale[k]
  scale.z = 1
  self.m_mapTransform[k].localScale = scale
end

function BoardBackground:_AdjustBoardBg(adjustSize)
  local k = EBoardBackgroundElement.BoardBg
  local scaleFactorX = adjustSize.x / ScreenFitter.GetStandardWidth()
  local _, deltaY = ScreenFitter.GetMaxSupportedRatioSizeDelta()
  local scaleFactorY = 1 + deltaY / self.m_mapRenderer[k].size.y
  local scaleFactor = math.max(scaleFactorX, scaleFactorY)
  local scale = self.m_mapInitScale[k] * scaleFactor
  scale.z = 1
  self.m_mapTransform[k].localScale = scale
  self.m_mapTransform[k].localPosition = self.m_mapInitPos[k] + Vector3(0, self.m_mapInitSize[k].y * self.m_mapInitScale[k].y * (scaleFactor - 1) / 2 - (adjustSize.y - ScreenFitter.GetStandardHeight()) / 2, 0)
end

function BoardBackground:_AdjustCounter(adjustSize)
  local k = EBoardBackgroundElement.Counter
  local scale = math.max(1, adjustSize.x / ScreenFitter.GetStandardWidth())
  self.m_mapRenderer[EBoardBackgroundElement.Counter].size = Vector2(self.m_mapInitSize[EBoardBackgroundElement.Counter].x * scale, self.m_mapInitSize[EBoardBackgroundElement.Counter].y)
end
