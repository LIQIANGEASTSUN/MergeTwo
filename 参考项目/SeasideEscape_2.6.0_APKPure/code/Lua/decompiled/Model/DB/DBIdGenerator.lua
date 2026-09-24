DBIdGenerator = {}
DBIdGenerator.__index = DBIdGenerator

function DBIdGenerator.Create()
  local generator = setmetatable({}, DBIdGenerator)
  generator:Init()
  return generator
end

function DBIdGenerator:Init()
  self.m_instanceCount = 0
  self.m_lastTimeStamp = 0
end

function DBIdGenerator:Generate()
  local timeStamp = GM.GameModel:GetServerTime()
  if timeStamp ~= self.m_lastTimeStamp and timeStamp > self.m_lastTimeStamp then
    self.m_instanceCount = 1
    self.m_lastTimeStamp = timeStamp
  else
    self.m_instanceCount = self.m_instanceCount + 1
    if self.m_instanceCount > 999 then
      self.m_instanceCount = 1
      self.m_lastTimeStamp = self.m_lastTimeStamp + 1
    end
  end
  return string.format("%d%03d", self.m_lastTimeStamp, self.m_instanceCount)
end
