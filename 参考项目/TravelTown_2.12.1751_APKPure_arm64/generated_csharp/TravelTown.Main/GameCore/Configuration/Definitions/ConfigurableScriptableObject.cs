using System;
using Newtonsoft.Json;
using Sirenix.OdinInspector;
using Tools.Attributes;
using UnityEngine;
using UnityEngine.Serialization;

namespace GameCore.Configuration.Definitions
{
	public abstract class ConfigurableScriptableObject : SerializedScriptableObject, IUniqueStringKeyAsset
	{
		[JsonProperty("uniqueId")]
		[ConstructorParameter(1)]
		[SerializeField]
		public string _storedUniqueId;

		[FormerlySerializedAs("_ignoreInUniqueIdCheck")]
		[SerializeField]
		[JsonIgnore]
		public bool _isPartOfAbTest;

		[NonSerialized]
		public string _overrideUniqueId;

		[JsonIgnore]
		public string UniqueId => null;

		[JsonIgnore]
		public bool IsPartOfAbTest
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public ConfigurableScriptableObject()
		{
		}

		public ConfigurableScriptableObject(string storedUniqueId)
		{
		}

		public void SetUniqueId(string id)
		{
		}

		public void SetOverrideUniqueIdFrom(ConfigurableScriptableObject other)
		{
		}

		public abstract string GetStoragePath();
	}
}
