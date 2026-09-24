ModelHelper = {}
ModelHelper.privatePrefix = "_"

function ModelHelper.DefineProperties(model, propertyKeys)
  for k, v in pairs(propertyKeys) do
    ModelHelper._DefineProperty(model, k, v)
  end
end

function ModelHelper.DefinePrivateProperties(model, propertyKeys)
  for k, v in pairs(propertyKeys) do
    ModelHelper._DefineProperty(model, k, v, ModelHelper.privatePrefix)
  end
end

function ModelHelper._DefineProperty(model, propertyName, propertyKey, namePrefix)
  if not propertyKey or type(propertyKey) ~= "string" then
    Log.Error("should define string property key for " .. propertyName)
  end
  namePrefix = namePrefix or ""
  if not model[ModelHelper.GetterName(namePrefix, propertyName)] then
    model[ModelHelper.GetterName(namePrefix, propertyName)] = function(self)
      return self:GetData():GetValue(propertyKey, "value")
    end
  end
  if not model[ModelHelper.InNumberGetterName(namePrefix, propertyName)] then
    model[ModelHelper.InNumberGetterName(namePrefix, propertyName)] = function(self)
      return tonumber(self:GetData():GetValue(propertyKey, "value")) or 0
    end
  end
  if not model[ModelHelper.SetterName(namePrefix, propertyName)] then
    model[ModelHelper.SetterName(namePrefix, propertyName)] = function(self, value, save)
      value = tostring(value)
      self:GetData():Set(propertyKey, "value", value)
    end
  end
end

function ModelHelper.GetterName(prefix, name)
  return prefix .. "Get" .. name
end

function ModelHelper.InNumberGetterName(prefix, name)
  return prefix .. "Get" .. name .. "InNumber"
end

function ModelHelper.SetterName(prefix, name)
  return prefix .. "Set" .. name
end

function ModelHelper.DefineDispatchEvent(manager, functionName)
  manager[functionName] = function(manager)
    if manager.m_models ~= nil then
      for _, model in pairs(manager.m_models) do
        model[functionName](model)
      end
    end
  end
end

function ModelHelper.DefineBoolEvent(manager, functionName)
  manager[functionName] = function(manager)
    if manager.m_models ~= nil then
      for _, model in pairs(manager.m_models) do
        if model[functionName](model) then
          return true
        end
      end
      return false
    end
  end
end

function ModelHelper.DefineSyncData(model, name, value)
  local variableName = "m_" .. string.lower(string.sub(name, 1, 1)) .. string.sub(name, 2)
  model[variableName] = value
  model["Get" .. name] = function(model)
    return model[variableName]
  end
  model["Sync" .. name] = function(model, dataArray)
    model[variableName]:FromArr(dataArray)
  end
end
