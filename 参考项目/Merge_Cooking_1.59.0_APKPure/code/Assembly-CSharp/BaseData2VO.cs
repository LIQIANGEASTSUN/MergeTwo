using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class BaseData2VO
{
	public int id;

	public int num;

	public static List<BaseData2VO> GetBaseData2VOList(string s)
	{
		List<BaseData2VO> list = new List<BaseData2VO>();
		string[] array = s.Split(';');
		if (array != null && array.Length != 0)
		{
			for (int i = 0; i < array.Length; i++)
			{
				string[] array2 = array[i].Split('|');
				if (array2.Length == 2)
				{
					try
					{
						list.Add(new BaseData2VO
						{
							id = Convert.ToInt32(array2[0]),
							num = Convert.ToInt32(array2[1])
						});
					}
					catch (Exception)
					{
						Log.E("싘끂溣᥈氙\u001f뾾욽䤋뀀䒛愌\uef477\u0016匕숼끛\uf7eb嘽瑻~엤⣣쭇根澝");
					}
				}
			}
		}
		return list;
	}

	public string Icon()
	{
		string result = "";
		IItemVO item = StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(id);
		if (item != null)
		{
			result = item.icon;
		}
		return result;
	}
}
