using System;
using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using Merger.Boosters.Declarations.Capabilities;
using Merger.Boosters.Declarations.Configurations;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Enums;
using Merger.Data.Assets;
using Merger.Game.ItemInfoData;
using Merger.RemoteContentManager.Models;
using Merger.RemoteMergeItems.Configuration;
using Newtonsoft.Json;

namespace Merger.Boosters.Declarations.Definitions
{
	[Serializable]
	public class RemoteBoosterItem : RemoteItemBase, IBoosterItem, IItem, IUniqueStringKeyAsset
	{
		[JsonIgnore]
		[NonSerialized]
		public ActivationCapability _activationCapability;

		[JsonProperty("boosterId")]
		public override string UniqueId { get; set; }

		public override string LocalSpritesPath => null;

		public override string SpriteLocatorUniqueId => null;

		[JsonProperty("type")]
		public string SerializedBoosterType
		{
			set
			{
			}
		}

		[JsonIgnore]
		public BoosterType BoosterType
		{
			get
			{
				return default(BoosterType);
			}
			set
			{
			}
		}

		[JsonProperty("timeDuration")]
		public TimeDurationCapability TimeDuration { get; set; }

		[JsonProperty("mergeItemConfig")]
		public MergeItemCapability MergeItem { get; set; }

		[JsonProperty("serializedBoosterConfig")]
		public BoosterRemoteConfig BoosterRemoteConfig { get; set; }

		[JsonProperty("clientAssets")]
		public List<ClientAsset> ClientAssets { get; set; }

		[JsonIgnore]
		public CooldownBlockCapability CooldownBlock => null;

		[JsonIgnore]
		public ActivationCapability Activation => null;

		public string ItemName => null;

		[JsonIgnore]
		public RemoteContentBundleHandle BundleHandle { get; set; }

		[JsonIgnore]
		public string BundleAssetUrl => null;

		public IItemInfoData ItemInfoData { get; set; }

		[JsonIgnore]
		public bool AutoOpenTooltip { get; set; }
	}
}
