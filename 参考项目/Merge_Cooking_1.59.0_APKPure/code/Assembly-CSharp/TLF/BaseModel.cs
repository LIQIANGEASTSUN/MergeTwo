using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace TLF;

public class BaseModel
{
	private Dictionary<string, string> serverDataCacheDic = new Dictionary<string, string>();

	public bool SaveData { get; set; }

	public virtual void InitModel(bool timingSave = false)
	{
		if (timingSave)
		{
			ObjectManager.GetInstance().PushTimingSaveModel(this);
		}
	}

	private void RegisterKeyToServerManager(string key)
	{
		ServerManager.RegisterKeyToServerManager(key, this);
	}

	public void updateServerDataCacheDic(string key, string value, bool bRefresh)
	{
		if (serverDataCacheDic == null)
		{
			serverDataCacheDic = new Dictionary<string, string>();
		}
		if (serverDataCacheDic.ContainsKey(key))
		{
			if (bRefresh)
			{
				serverDataCacheDic[key] = value;
			}
		}
		else
		{
			serverDataCacheDic.Add(key, value);
		}
		RegisterKeyToServerManager(key);
	}

	public string GetServerCacheData(string serverKey)
	{
		string value = GetCustomServerCacheData(serverKey);
		if (value == null)
		{
			if (serverDataCacheDic.TryGetValue(serverKey, out value))
			{
				return value;
			}
			return null;
		}
		return value;
	}

	public virtual string GetCustomServerCacheData(string serverKey)
	{
		return null;
	}

	public virtual void ParseDataFromDB()
	{
	}

	public virtual void ParseDataFromServer(string json)
	{
	}

	public virtual void SaveDataToDB()
	{
	}

	public virtual void SaveItem(string key, string value)
	{
		if (key != null && value != null)
		{
			updateServerDataCacheDic(key, value, bRefresh: true);
			PlayerPrefs.SetString(key, value);
		}
	}

	public virtual string GetItem(string key)
	{
		if (key != null)
		{
			string text = PlayerPrefs.GetString(key);
			updateServerDataCacheDic(key, text, bRefresh: false);
			return text;
		}
		return null;
	}

	public virtual void RemoveItem(string key)
	{
		if (key != null)
		{
			PlayerPrefs.DeleteKey(key);
			serverDataCacheDic.Remove(key);
		}
	}

	public virtual void SaveItemMMKV(string key, string value)
	{
		if (string.IsNullOrEmpty(key) || string.IsNullOrEmpty(value))
		{
			return;
		}
		try
		{
			MMKVSave.SetString(key, value);
			if (GameConst.GAME_MODE == GameConstMode.DEBUG)
			{
				Debug.LogWarning((object)("숼끷憒瘽䴔\u0001\u008a厉欷㸸" + key + "숆끌₸㨇⁁7\u0085厄뺼" + value));
			}
		}
		catch (Exception ex)
		{
			Log.E("숏끛斯洐卽&\u009a厙숼끷澒爽䴔4Â叁뺼" + key + "수끟㪫’⁛ í召" + ex.Message);
		}
	}

	public virtual string GetItemMMKV(string key)
	{
		if (!string.IsNullOrEmpty(key))
		{
			try
			{
				string text = MMKVSave.GetString(key, "");
				if (GameConst.GAME_MODE == GameConstMode.DEBUG)
				{
					Debug.LogWarning((object)("숼끷斒琽䴔\u0015\u009a厙뺼" + key + "숆끌₸㨇⁁7\u0085厄뺼" + text));
				}
				return text;
			}
			catch (Exception ex)
			{
				Log.E("숣끟涭䴤䝀7º厹쉊끱犏⁋䵒=Î反" + key + "수끟㪫’⁛ í召" + ex.Message);
			}
		}
		return "";
	}

	public virtual void RemoveItemMMKV(string key)
	{
		if (!string.IsNullOrEmpty(key))
		{
			try
			{
				MMKVSave.RemoveKey(key);
			}
			catch (Exception ex)
			{
				Log.E("숅끟䦴理剂7*匩숧끗ₔ昨敿\u0004\u0085厄똩ó赴" + key + "수끟㪫’⁛ í召" + ex.Message);
			}
		}
	}

	public virtual bool ContainsItemMMKV(string key)
	{
		if (!string.IsNullOrEmpty(key))
		{
			try
			{
				return MMKVSave.ContainsKey(key);
			}
			catch (Exception ex)
			{
				Log.E("숞끕溷猟䍕;¾厽숇끎䮼嘈䥹\u001f2匱古橦ā诉霠" + key + "수끟㪫’⁛ í召" + ex.Message);
			}
		}
		return false;
	}

	public string ListToJson<T>(List<T> l)
	{
		return JsonUtility.ToJson((object)new Serialization<T>(l));
	}

	public List<T> ListFromJson<T>(string str)
	{
		return JsonUtility.FromJson<Serialization<T>>(str).ToList();
	}

	public string DicToJson<TKey, TValue>(Dictionary<TKey, TValue> dic)
	{
		return JsonUtility.ToJson((object)new Serialization<TKey, TValue>(dic));
	}

	public Dictionary<TKey, TValue> DicFromJson<TKey, TValue>(string str)
	{
		return JsonUtility.FromJson<Serialization<TKey, TValue>>(str).ToDictionary();
	}

	public string QueueToJson<T>(Queue<T> queue)
	{
		return JsonUtility.ToJson((object)new Serialization<T>(queue.ToList()));
	}

	public Queue<T> QueueFromJson<T>(string str)
	{
		List<T> list = JsonUtility.FromJson<Serialization<T>>(str).ToList();
		Queue<T> queue = new Queue<T>();
		for (int i = 0; i < list.Count; i++)
		{
			queue.Enqueue(list[i]);
		}
		return queue;
	}

	public string StackToJson<T>(Stack<T> stack)
	{
		return JsonUtility.ToJson((object)new Serialization<T>(stack.ToList()));
	}

	public Stack<T> StackFromJson<T>(string str)
	{
		List<T> list = JsonUtility.FromJson<Serialization<T>>(str).ToList();
		Stack<T> stack = new Stack<T>();
		for (int num = list.Count - 1; num >= 0; num--)
		{
			stack.Push(list[num]);
		}
		return stack;
	}

	public virtual void ReloadModel()
	{
	}

	public virtual void InitModel_After()
	{
	}

	public virtual void SyncServerData_After()
	{
	}
}
