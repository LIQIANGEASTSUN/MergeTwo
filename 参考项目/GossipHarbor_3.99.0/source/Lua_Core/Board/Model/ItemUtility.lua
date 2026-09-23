ItemUtility = {}

function ItemUtility.CodeWeightPairsToString(codeWeightPairs)
  local data = ""
  for index, item in ipairs(codeWeightPairs) do
    data = data .. item.Code .. "-" .. item.Weight
    if index ~= #codeWeightPairs then
      data = data .. ";"
    end
  end
  return data
end

function ItemUtility.StringToCodeWeightPairs(data)
  local array = StringUtil.Split(data, ";")
  return ItemModelFactory.GetCodeAndWeightPairs(array)
end

function ItemUtility.GetCollectableColor(propertyType)
  if ItemUtility.s_mapPropertyType2Color == nil then
    ItemUtility.s_mapPropertyType2Color = {
      [EPropertyType.Gem] = {
        text = UIUtil.ConvertHexColor2CSColor("FFC5C5"),
        outline = UIUtil.ConvertHexColor2CSColor("A00D0D")
      },
      [EPropertyType.Energy] = {
        text = UIUtil.ConvertHexColor2CSColor("39EFFF"),
        outline = UIUtil.ConvertHexColor2CSColor("3353BC")
      },
      [EPropertyType.Gold] = {
        text = UIUtil.ConvertHexColor2CSColor("FFE721"),
        outline = UIUtil.ConvertHexColor2CSColor("902F00")
      },
      [EPropertyType.IceMapExploreToken] = {
        text = UIUtil.ConvertHexColor2CSColor("FFCEF6"),
        outline = UIUtil.ConvertHexColor2CSColor("87008C")
      }
    }
    for _, model in pairs(GM.ActivityManager:GetModels()) do
      if model.GetCollectableColor ~= nil then
        local mapColor = model:GetCollectableColor()
        for propertyType, color in pairs(mapColor) do
          if ItemUtility.s_mapPropertyType2Color[propertyType] == nil then
            ItemUtility.s_mapPropertyType2Color[propertyType] = color
          end
        end
      end
    end
  end
  if ItemUtility.s_mapPropertyType2Color[propertyType] == nil then
    Log.Error("ItemUtility:GetCollectableColor, propertyType not found")
    return {
      text = UIUtil.ConvertHexColor2CSColor("FFFFFF"),
      outline = UIUtil.ConvertHexColor2CSColor("58597E")
    }
  end
  return ItemUtility.s_mapPropertyType2Color[propertyType]
end
