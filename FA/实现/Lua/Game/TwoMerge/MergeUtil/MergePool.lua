local MergePool = {}
local _caches = {}

MergePool.GetGameObject = function(objName, parent, cloneObj)
    local obj = MergePool.GetWithName(objName)
    if obj == nil then
        if objName == "TwoMergeArticle" then
            MergePool.private_CreateCount(objName, cloneObj, parent, 63)
        end
        obj = MergePool.Clone(cloneObj, parent)
    end
    obj:SetActive(true)
    return obj
end
MergePool.GetGameObjectPath = function(objName, parent, path)
    local obj = MergePool.GetWithName(objName)
    if obj == nil then
        obj = BResource.InstantiateFromAssetName(path)
    end
    obj:SetActive(true)
    return obj
end

MergePool.GetWithName = function(objName)
    _caches[objName] = _caches[objName] or {}
    if #_caches[objName] > 0 then
        local obj = _caches[objName][1]
        table.remove(_caches[objName], 1)
        if not Runtime.CSNull(obj) then
            obj:SetActive(true)
            return obj
        end
    end
end

MergePool.ReleaseGameObject = function(objName, obj)
    _caches[objName] = _caches[objName] or {}
    if not Runtime.CSNull(obj) then
        obj:SetActive(false)
        table.insert(_caches[objName], obj)
    end
end

MergePool.Clear = function(objName)
    _caches[objName] = {}
end

MergePool.Clone = function(child, parent)
    local go = GameObject.Instantiate(child)
    go:SetParent(parent.transform, false)
    go.transform:SetLocalPosition(Vector3.zero)
    go.transform:SetLocalEulerAngle(0, 0, 0)
    go.transform:SetLocalScale(Vector3.one)
    return go
end

MergePool.private_CreateCount = function(objName, child, parent, count)
    for i = 1, count, 1 do
        local ga = MergePool.Clone(child, parent)
        MergePool.ReleaseGameObject(objName, ga)
    end
end

return MergePool