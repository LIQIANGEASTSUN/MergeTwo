using System;
using MergeEngine.Configuration.Definitions.WeakReferences;
using Newtonsoft.Json;
using UnityEngine;

namespace GameCore.Configuration.WeakReferences
{
	[Serializable]
	public abstract class WeakReference<TAsset, TKey> : WeakReferenceBase where TAsset : class
	{
		[SerializeField]
		[HideInInspector]
		[JsonProperty]
		public TKey _uniqueId;

		[NonSerialized]
		public TAsset asset;

		public virtual bool Resolved => false;

		[JsonIgnore]
		public virtual TKey UniqueId
		{
			get
			{
				return default(TKey);
			}
			set
			{
			}
		}

		[JsonIgnore]
		public virtual TAsset Asset => null;

		[JsonIgnore]
		public override bool HasReference => false;

		public WeakReference(TKey uniqueId)
		{
		}

		public WeakReference()
		{
		}

		public override void Resolve(IWeakReferenceAssetsProvider assetProvider)
		{
		}

		public override void Dispose()
		{
		}
	}
}
