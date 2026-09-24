Table = {}
Table.Empty = setmetatable({}, {
  __index = {},
  __newindex = function(t, k, v)
    Log.Error("cannot set in Table.Empty")
  end
})
local table = _ENV.table
local type = _ENV.type
local next = _ENV.next
local random = math.random

function Table.ShallowCopy(source)
  if source == nil then
    return nil
  end
  local newTable = {}
  for k, v in pairs(source) do
    newTable[k] = v
  end
  return newTable
end

function Table.DeepCopy(object, ignoreMeta)
  local lookup_table = {}
  
  local function _copy(object)
    if type(object) ~= "table" then
      return object
    elseif lookup_table[object] then
      return lookup_table[object]
    end
    local new_table = {}
    lookup_table[object] = new_table
    for key, value in pairs(object) do
      new_table[_copy(key)] = _copy(value)
    end
    return ignoreMeta and new_table or setmetatable(new_table, getmetatable(object))
  end
  
  return _copy(object)
end

function Table.Override(origin, override)
  if override ~= nil then
    local function _override(origin, override)
      for k, v in pairs(override) do
        if type(v) ~= "table" then
          origin[k] = v
        else
          if origin[k] == nil then
            origin[k] = {}
          end
          _override(origin[k], v)
        end
      end
    end
    
    _override(origin, override)
  end
  return origin
end

function Table.GetMapSize(map)
  local size = 0
  if map then
    for _, _ in pairs(map) do
      size = size + 1
    end
  end
  return size
end

function Table.ListAppend(to, from)
  table.move(from, 1, #from, #to + 1, to)
end

function Table.ListRemove(source, element)
  local count = #source
  for i = 1, count do
    if source[i] == element then
      table.remove(source, i)
      return true
    end
  end
  return false
end

function Table.ListContain(source, target)
  local count = #source
  for i = 1, count do
    if source[i] == target then
      return i
    end
  end
  return false
end

function Table.ListMerge(mergeTo, toMerge)
  local mapMerged = {}
  for i = 1, #mergeTo do
    mapMerged[mergeTo[i]] = true
  end
  for i = 1, #toMerge do
    mapMerged[toMerge[i]] = true
  end
  return Table.GetKeys(mapMerged)
end

function Table.ListRandomSelectN(source, selectCount)
  source = Table.ShallowCopy(source)
  selectCount = math.min(selectCount, #source)
  local result = {}
  local index
  for i = 1, selectCount do
    index = random(#source)
    result[#result + 1] = source[index]
    table.remove(source, index)
  end
  return result
end

function Table.ListRandomSelectOne(source)
  if #source == 0 then
    return nil
  end
  local randomIndex = math.random(#source)
  return source[randomIndex]
end

function Table.ListRandomSelectIndex(source)
  if #source == 0 then
    return nil
  end
  local randomIndex = math.random(#source)
  return randomIndex
end

function Table.Shuffle(source)
  return Table.ListRandomSelectN(source, #source)
end

function Table.ListWeightSelectOne(source, weightKey)
  weightKey = weightKey or "Weight"
  local sumWeight = 0
  for _, item in ipairs(source) do
    sumWeight = sumWeight + item[weightKey]
  end
  local randomIndex = math.random(sumWeight)
  for index, item in ipairs(source) do
    if randomIndex <= item[weightKey] then
      return item, index
    else
      randomIndex = randomIndex - item[weightKey]
    end
  end
  Log.Assert(false, "Table.ListWeightSelectOne")
end

function Table.ListWeightSelectOneWithFilter(source, weightKey, filter)
  weightKey = weightKey or "Weight"
  local sumWeight = 0
  for _, item in ipairs(source) do
    if filter(item) then
      sumWeight = sumWeight + item[weightKey]
    end
  end
  if sumWeight == 0 then
    return nil
  end
  local randomIndex = math.random(sumWeight)
  for index, item in ipairs(source) do
    if filter(item) then
      if randomIndex <= item[weightKey] then
        return item, index
      else
        randomIndex = randomIndex - item[weightKey]
      end
    end
  end
  return nil
end

function Table.ListWeightSelectN(source, weightKey, selectCount)
  Log.Assert(selectCount ~= nil and 0 < selectCount, "Table.ListWeightSelectN selectCount error !!!")
  if selectCount == 1 then
    local item, index = Table.ListWeightSelectOne(source, weightKey)
    return {item}
  end
  weightKey = weightKey or "Weight"
  local sumWeight = 0
  for _, item in ipairs(source) do
    sumWeight = sumWeight + item[weightKey]
  end
  local arrRandomIndex = {}
  for i = 1, selectCount do
    arrRandomIndex[i] = math.random(sumWeight)
  end
  local arrResult = {}
  for _, item in ipairs(source) do
    for i, weight in ipairs(arrRandomIndex) do
      if 0 < weight then
        if weight <= item[weightKey] then
          arrResult[i] = item
          if Table.GetMapSize(arrResult) == selectCount then
            return arrResult
          end
        end
        arrRandomIndex[i] = weight - item[weightKey]
      end
    end
  end
  Log.Assert(false, "Table.ListWeightSelectN")
end

function Table.ListWeightGenerateRandomSequence(source, weightKey)
  weightKey = weightKey or "Weight"
  local sequence = {}
  for index, item in ipairs(source) do
    for i = 1, item[weightKey] do
      sequence[#sequence + 1] = index
    end
  end
  local temp
  for i = #sequence, 1, -1 do
    local index = math.random(i)
    temp = sequence[index]
    sequence[index] = sequence[i]
    sequence[i] = temp
  end
  return sequence
end

function Table.ListRemoveDuplicate(list)
  local map = {}
  local new = {}
  local value
  local count = #list
  for i = 1, count do
    value = list[i]
    if not map[value] then
      map[value] = true
      new[#new + 1] = value
    end
  end
  return new
end

function Table.Contain(source, target)
  for _, value in pairs(source) do
    if value == target then
      return true
    end
  end
  return false
end

function Table.GetIndex(list, target)
  local count = #list
  for i = 1, count do
    if list[i] == target then
      return i
    end
  end
  return 0
end

function Table.GetKey(map, target)
  for key, value in pairs(map) do
    if value == target then
      return key
    end
  end
  return nil
end

function Table.MapSize(source)
  local size = 0
  for k, v in pairs(source) do
    size = size + 1
  end
  return size
end

function Table.Select(source, filter)
  local result = {}
  for _, value in pairs(source) do
    if filter(value) then
      table.insert(result, value)
    end
  end
  return result
end

function Table.ListSelect(source, filter)
  local result = {}
  local count = #source
  for i = 1, count do
    local value = source[i]
    if filter(value) then
      table.insert(result, value)
    end
  end
  return result
end

function Table.Foreach(source, func)
  for _, value in pairs(source) do
    func(value)
  end
end

function Table.ListForeach(source, func)
  local count = #source
  for i = 1, count do
    func(i, source[i])
  end
end

function Table.GetKeys(source)
  local keys = {}
  local count = 0
  for key, _ in pairs(source) do
    count = count + 1
    keys[count] = key
  end
  return keys
end

function Table.GetKeysMap(source)
  local keys = {}
  for key, _ in pairs(source) do
    keys[key] = true
  end
  return keys
end

function Table.ListValueToMap(array)
  local result = {}
  for _, value in ipairs(array) do
    result[value] = true
  end
  return result
end

function Table.GetKeysDifferenceSet(minuend, subtrahend)
  local differenceSet = {}
  for key, _ in pairs(minuend) do
    if not subtrahend[key] then
      differenceSet[key] = true
    end
  end
  return differenceSet
end

function Table.MergeKeysMap(keys, toBeMergedMap)
  for key, _ in pairs(toBeMergedMap) do
    keys[key] = true
  end
end

function Table.GetValueList(source)
  local values = {}
  local count = 0
  for _, value in pairs(source) do
    count = count + 1
    values[count] = value
  end
  return values
end

function Table.GetValueListOrderByKey(source, sortFunc)
  local list = Table.GetKeys(source)
  table.sort(list, sortFunc)
  for i = 1, #list do
    list[i] = source[list[i]]
  end
  return list
end

function Table.IsEmpty(source)
  return IsNil(source) or type(source) ~= "table" or next(source) == nil
end

function Table.Reverse(source)
  local list = {}
  for i = 1, #source do
    list[#source - i + 1] = source[i]
  end
  return list
end

function Table.ListRep(ele, repCount, deepCopy)
  local list = {}
  for i = 1, repCount do
    list[#list + 1] = deepCopy and Table.DeepCopy(ele) or ele
  end
  return list
end

function Table.TopologicalSort(graph)
  local indegree = {}
  local result = {}
  local graphLen = 0
  for node, neighbors in pairs(graph) do
    graphLen = graphLen + 1
    indegree[node] = indegree[node] or 0
    for _, neighbor in ipairs(neighbors) do
      indegree[neighbor] = (indegree[neighbor] or 0) + 1
    end
  end
  local queue = {}
  for node, degree in pairs(indegree) do
    if degree == 0 then
      table.insert(queue, node)
    end
  end
  while 0 < #queue do
    local current = table.remove(queue, 1)
    table.insert(result, current)
    for _, neighbor in ipairs(graph[current] or {}) do
      indegree[neighbor] = indegree[neighbor] - 1
      if indegree[neighbor] == 0 then
        table.insert(queue, neighbor)
      end
    end
  end
  if #result == graphLen then
    return result
  else
    return nil
  end
end

function Table.Dump(t)
  local ttype = type(t)
  if ttype == "nil" then
    return "nil"
  elseif ttype == "string" then
    return "\"" .. t .. "\""
  elseif ttype == "number" then
    return tostring(t)
  elseif ttype == "boolean" then
    return tostring(t)
  elseif ttype == "table" then
    local buffer = {}
    if IsArray(t) then
      for _, v in ipairs(t) do
        table.insert(buffer, Table.Dump(v))
      end
    else
      for k, v in pairs(t) do
        table.insert(buffer, "[" .. Table.Dump(k) .. "] = " .. Table.Dump(v))
      end
    end
    return "{" .. table.concat(buffer, ",") .. "}"
  else
    Log.Error("can not dump type " .. ttype)
  end
end

function Table.Compare(a, b)
  local typea = type(a)
  local typeb = type(b)
  if typea ~= typeb then
    return false
  end
  if typea == "string" or typea == "number" or typea == "boolean" then
    return a == b
  elseif typea == "table" then
    local isArrayA, na = IsArray(a)
    local isArrayB, nb = IsArray(b)
    if isArrayA ~= isArrayB then
      return false
    end
    if isArrayA then
      if na ~= nb then
        return false
      end
      for i = 1, na do
        if not Table.Compare(a[i], b[i]) then
          return false
        end
      end
    else
      for k, v in pairs(a) do
        if not Table.Compare(v, b[k]) then
          return false
        end
      end
      for k, v in pairs(b) do
        if a[k] == nil then
          return false
        end
      end
    end
    return true
  end
end
