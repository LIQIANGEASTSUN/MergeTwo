using System;
using System.Collections.Generic;
using UnityEngine;

namespace TLF;

[Serializable]
public class SerializableDataList<T> : IListSerializable, IListReplaceItem
{
	public List<T> list;

	public SerializableDataList()
	{
		list = new List<T>();
	}

	public T FindItem(string key, object value)
	{
		for (int i = 0; i < list.Count; i++)
		{
			T val = list[i];
			if (val.GetType().GetField(key).GetValue(val)
				.Equals(value))
			{
				return val;
			}
		}
		return default;
	}

	public T FindItem(string key1, object value1, string key2, object value2)
	{
		for (int i = 0; i < list.Count; i++)
		{
			T val = list[i];
			if (val.GetType().GetField(key1).GetValue(val)
				.Equals(value1) && val.GetType().GetField(key2).GetValue(val)
				.Equals(value2))
			{
				return val;
			}
		}
		return default;
	}

	public string ToJson()
	{
		return JsonUtility.ToJson((object)this);
	}

	public static SerializableDataList<T> FromJson(string jsonStr)
	{
		return JsonUtility.FromJson<SerializableDataList<T>>(jsonStr);
	}

	public void ClearList()
	{
		list?.Clear();
	}

	public int GetCount()
	{
		return list?.Count ?? 0;
	}

	public bool AddReplaceItem(string json)
	{
		return IListReplaceItemHelper.IAddReplaceItem(list, json);
	}

	public bool AddReplaceItemByABTestGroup(string baseTableName, Dictionary<string, string> abGroupDic)
	{
		return IListReplaceItemHelper.IAddReplaceItemByABTestGroup(list, baseTableName, abGroupDic);
	}
}
