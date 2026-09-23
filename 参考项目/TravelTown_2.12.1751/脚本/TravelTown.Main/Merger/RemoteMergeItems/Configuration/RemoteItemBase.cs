using System;
using MergeEngine.Configuration.Capabilities;
using Newtonsoft.Json;
using RemoteSprites.Scripts.Runtime;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Merger.RemoteMergeItems.Configuration
{
	public abstract class RemoteItemBase
	{
		[NonSerialized]
		[JsonIgnore]
		[NonSerialized]
		public RemoteSpriteLocation _sprite;

		[JsonProperty("spriteAsset")]
		public virtual string _spriteAsset { get; set; }

		[JsonIgnore]
		public virtual AssetReferenceT<Sprite> Sprite => null;

		[JsonIgnore]
		public virtual RemoteSpriteLocation RemoteSprite => null;

		[JsonProperty("boardQueueOrder")]
		public BoardQueueOrderCapability BoardQueueOrder { get; set; }

		public virtual string UniqueId { get; set; }

		public virtual string LocalTextureName => null;

		public abstract string LocalSpritesPath { get; }

		public abstract string SpriteLocatorUniqueId { get; }

		public RemoteSpriteLocation GetParsedSpriteLocation()
		{
			return null;
		}

		public void SetAsFallbackSprite(string fallbackId)
		{
		}

		public RemoteItemBase()
		{
		}
	}
}
