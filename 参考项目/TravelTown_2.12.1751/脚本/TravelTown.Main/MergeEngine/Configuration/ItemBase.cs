using System;
using Framework.Localisation;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Capabilities;
using Merger.Game.ItemInfoData;
using Merger.RemoteContentManager.Models;
using Newtonsoft.Json;
using RemoteSprites.Scripts.Runtime;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration
{
	public abstract class ItemBase : ConfigurableScriptableObject, IItem, IUniqueStringKeyAsset
	{
		[SerializeField]
		[JsonProperty("spriteAsset")]
		public string _spriteAsset;

		[NonSerialized]
		[JsonIgnore]
		[NonSerialized]
		public RemoteSpriteLocation _sprite;

		[SerializeField]
		[LocalisationIdentifier(Required = false)]
		public string _itemName;

		[SerializeField]
		public BoardQueueOrderCapability _boardQueueOrder;

		[JsonIgnore]
		public AssetReferenceT<Sprite> Sprite => null;

		[JsonIgnore]
		public bool AutoOpenTooltip { get; set; }

		public string ItemName => null;

		[JsonIgnore]
		public string BundleAssetUrl => null;

		public BoardQueueOrderCapability BoardQueueOrder => null;

		[JsonIgnore]
		public RemoteContentBundleHandle BundleHandle { get; set; }

		public IItemInfoData ItemInfoData { get; set; }

		public abstract string LocalSpritesPath { get; }

		public abstract string SpriteLocatorUniqueId { get; }

		public RemoteSpriteLocation GetParsedSpriteLocation()
		{
			return null;
		}

		public void SetAsLocalSprite()
		{
		}

		public ItemBase()
		{
		}
	}
}
