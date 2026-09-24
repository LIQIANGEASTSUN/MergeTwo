using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

namespace TLF;

[Serializable]
public class SerializableDataMap<KT, VT> : IMapSerializable, IListSerializable, IListReplaceItem
{
	public List<VT> list;

	[NonSerialized]
	public Dictionary<KT, VT> map;

	[NonSerialized]
	private string idKey = "漻䉼";

	public SerializableDataMap(string idKey)
	{
		list = new List<VT>();
		map = new Dictionary<KT, VT>();
		this.idKey = idKey;
	}

	public void InitMap()
	{
		map.Clear();
		FieldInfo field = typeof(VT).GetField(idKey);
		if (field == null)
		{
			return;
		}
		for (int i = 0; i < list.Count; i++)
		{
			VT val = list[i];
			if (val == null)
			{
				continue;
			}
			KT key = (KT)field.GetValue(val);
			if (map.ContainsKey(key))
			{
				if (key.ToString().Equals("뺬"))
				{
				}
			}
			else
			{
				map.Add(key, val);
			}
		}
	}

	public bool TryGetItem(KT id, out VT item)
	{
		return map.TryGetValue(id, out item);
	}

	public VT GetItem(KT id)
	{
		map.TryGetValue(id, out var value);
		return value;
	}

	public VT FindItem(string key, object value)
	{
		for (int i = 0; i < list.Count; i++)
		{
			VT val = list[i];
			if (val.GetType().GetField(key).GetValue(val)
				.Equals(value))
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

	public static SerializableDataList<VT> FromJson(string jsonStr)
	{
		return JsonUtility.FromJson<SerializableDataList<VT>>(jsonStr);
	}

	public void ClearList()
	{
		list?.Clear();
	}

	public int GetCount()
	{
		return list?.Count ?? 0;
	}

	public IList GetList()
	{
		return list;
	}

	public Type GetListItemType()
	{
		return typeof(VT);
	}

	public bool AddReplaceItem(string json)
	{
		bool flag = IListReplaceItemHelper.IAddReplaceItem(list, json);
		if (flag)
		{
			InitMap();
		}
		return flag;
	}

	public bool AddReplaceItemByABTestGroup(string baseTableName, Dictionary<string, string> abGroupDic)
	{
		bool flag = IListReplaceItemHelper.IAddReplaceItemByABTestGroup(list, baseTableName, abGroupDic);
		if (flag)
		{
			InitMap();
		}
		return flag;
	}

	public void ChangeMapKey(KT keyFrom, KT keyTo)
	{
		if (map != null && map.TryGetValue(keyFrom, out var value))
		{
			map.Remove(keyFrom);
			map[keyTo] = value;
		}
	}
}
[Serializable]
public class SerializableDataMap<TKey1, TKey2, TConfigVO> : IMapSerializable, IListSerializable, IListReplaceItem
{
	public List<TConfigVO> list;

	[NonSerialized]
	private string _key1Name;

	[NonSerialized]
	private string _key2Name;

	[NonSerialized]
	private TTDictionary<TKey1, TKey2, TConfigVO> _dicts;

	public SerializableDataMap(string key1Name, string key2Name)
	{
		_key1Name = key1Name;
		_key2Name = key2Name;
		_dicts = new TTDictionary<TKey1, TKey2, TConfigVO>();
		list = new List<TConfigVO>();
	}

	public void InitMap()
	{
		_dicts.Clear();
		for (int i = 0; i < list.Count; i++)
		{
			TConfigVO val = list[i];
			if (val == null)
			{
				continue;
			}
			Type type = val.GetType();
			if (!(type.GetField(_key1Name) == null) && !(type.GetField(_key2Name) == null))
			{
				TKey1 key = (TKey1)val.GetType().GetField(_key1Name).GetValue(val);
				TKey2 key2 = (TKey2)val.GetType().GetField(_key2Name).GetValue(val);
				if (!_dicts.ContainsKey(key, key2))
				{
					_dicts.Add(key, key2, val);
				}
			}
		}
	}

	public bool TryGetItem(TKey1 key1, TKey2 key2, out TConfigVO item)
	{
		return _dicts.TryGetValue(key1, key2, out item);
	}

	public Dictionary<TKey2, TConfigVO> GetItem(TKey1 key1)
	{
		_dicts.TryGetValue(key1, out var value);
		return value;
	}

	public TConfigVO GetItem(TKey1 key1, TKey2 key2)
	{
		_dicts.TryGetValue(key1, key2, out var value);
		return value;
	}

	public void ClearList()
	{
		list?.Clear();
	}

	public string ToJson()
	{
		return JsonUtility.ToJson((object)this);
	}

	public static SerializableDataList<TConfigVO> FromJson(string jsonStr)
	{
		return JsonUtility.FromJson<SerializableDataList<TConfigVO>>(jsonStr);
	}

	public int GetCount()
	{
		return list?.Count ?? 0;
	}

	public bool AddReplaceItem(string json)
	{
		bool flag = IListReplaceItemHelper.IAddReplaceItem(list, json);
		if (flag)
		{
			InitMap();
		}
		return flag;
	}

	public bool AddReplaceItemByABTestGroup(string baseTableName, Dictionary<string, string> abGroupDic)
	{
		bool flag = IListReplaceItemHelper.IAddReplaceItemByABTestGroup(list, baseTableName, abGroupDic);
		if (flag)
		{
			InitMap();
		}
		return flag;
	}
}
[Serializable]
public class SerializableDataMap<TKey1, TKey2, TKey3, TConfigVO> : IMapSerializable, IListSerializable, IListReplaceItem
{
	public List<TConfigVO> list;

	[NonSerialized]
	private string _key1Name;

	[NonSerialized]
	private string _key2Name;

	[NonSerialized]
	private string _key3Name;

	[NonSerialized]
	private TTDictionary<TKey1, TKey2, TKey3, TConfigVO> _dicts;

	public SerializableDataMap(string key1Name, string key2Name, string key3Name)
	{
		_key1Name = key1Name;
		_key2Name = key2Name;
		_key3Name = key3Name;
		_dicts = new TTDictionary<TKey1, TKey2, TKey3, TConfigVO>();
		list = new List<TConfigVO>();
	}

	public void InitMap()
	{
		_dicts.Clear();
		for (int i = 0; i < list.Count; i++)
		{
			TConfigVO val = list[i];
			if (val == null)
			{
				continue;
			}
			Type type = val.GetType();
			if (!(type.GetField(_key1Name) == null) && !(type.GetField(_key2Name) == null) && !(type.GetField(_key3Name) == null))
			{
				TKey1 key = (TKey1)val.GetType().GetField(_key1Name).GetValue(val);
				TKey2 key2 = (TKey2)val.GetType().GetField(_key2Name).GetValue(val);
				TKey3 key3 = (TKey3)val.GetType().GetField(_key2Name).GetValue(val);
				if (!_dicts.ContainsKey(key, key2, key3))
				{
					_dicts.Add(key, key2, key3, val);
				}
			}
		}
	}

	public bool TryGetItem(TKey1 key1, TKey2 key2, TKey3 key3, out TConfigVO item)
	{
		return _dicts.TryGetValue(key1, key2, key3, out item);
	}

	public TConfigVO GetItem(TKey1 key1, TKey2 key2, TKey3 key3)
	{
		_dicts.TryGetValue(key1, key2, key3, out var value);
		return value;
	}

	public void ClearList()
	{
		list?.Clear();
	}

	public string ToJson()
	{
		return JsonUtility.ToJson((object)this);
	}

	public static SerializableDataList<TConfigVO> FromJson(string jsonStr)
	{
		return JsonUtility.FromJson<SerializableDataList<TConfigVO>>(jsonStr);
	}

	public int GetCount()
	{
		return list?.Count ?? 0;
	}

	public bool AddReplaceItem(string json)
	{
		bool flag = IListReplaceItemHelper.IAddReplaceItem(list, json);
		if (flag)
		{
			InitMap();
		}
		return flag;
	}

	public bool AddReplaceItemByABTestGroup(string baseTableName, Dictionary<string, string> abGroupDic)
	{
		bool flag = IListReplaceItemHelper.IAddReplaceItemByABTestGroup(list, baseTableName, abGroupDic);
		if (flag)
		{
			InitMap();
		}
		return flag;
	}
}
