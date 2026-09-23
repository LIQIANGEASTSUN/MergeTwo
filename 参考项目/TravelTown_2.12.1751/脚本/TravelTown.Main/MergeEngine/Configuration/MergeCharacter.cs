using System;
using Framework.Core.Assets;
using Framework.Localisation;
using GameCore.Configuration.Definitions;
using JetBrains.Annotations;
using Newtonsoft.Json;
using Tools.Attributes;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration
{
	[Serializable]
	public class MergeCharacter : ConfigurableScriptableObject
	{
		public static string StoragePath;

		public int Id;

		public int UnlockLevel;

		[LocalisationIdentifier]
		public string Name;

		public bool CannotBeRandomlySelected;

		public string CharacterColorChat;

		[NonSerialized]
		public AssetReferenceAtlasedSprite _spriteAsset;

		[NonSerialized]
		public AssetReferenceAtlasedSprite _avatarAsset;

		[NonSerialized]
		[JsonIgnore]
		[NonSerialized]
		public bool _hasRemoteSprite;

		[NonSerialized]
		[JsonIgnore]
		[NonSerialized]
		public bool _hasRemoteAvatar;

		[JsonIgnore]
		[RequiredSpriteAssetReference]
		public AssetReferenceAtlasedSprite Sprite
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public AssetReferenceAtlasedSprite Avatar
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		[JsonIgnore]
		[CanBeNull]
		public IAsset AssetBundle { get; set; }

		public AssetReferenceAtlasedSprite GetParsedSpriteLocation()
		{
			return null;
		}

		public void SetSpriteLocation(AssetReferenceAtlasedSprite atlasedSprite)
		{
		}

		public AssetReferenceAtlasedSprite GetParsedAvatarLocation()
		{
			return null;
		}

		public void SetAvatarLocation(AssetReferenceAtlasedSprite atlasedSprite)
		{
		}

		public override string GetStoragePath()
		{
			return null;
		}
	}
}
