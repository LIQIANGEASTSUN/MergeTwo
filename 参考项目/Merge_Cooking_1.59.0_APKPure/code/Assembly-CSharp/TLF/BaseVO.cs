using System;
using Newtonsoft.Json;
using UnityEngine;

namespace TLF;

[Serializable]
public class BaseVO
{
	public int _addID_ = -1;

	public int _addType_;

	public static T DecodeToVO<T>(string json) where T : new()
	{
		if (string.IsNullOrEmpty(json))
		{
			return new T();
		}
		return JsonConvert.DeserializeObject<T>(json);
	}

	public string ToJson()
	{
		return JsonUtility.ToJson((object)this);
	}

	public void FromJsonOverwrite(string json)
	{
		JsonUtility.FromJsonOverwrite(json, (object)this);
	}
}
