using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.DynamicMergeItems;
using Merger.Game.ItemInfoData;
using Merger.RemoteContentManager.Models;
using Newtonsoft.Json;
using Tools.Attributes;

namespace Merger.RemoteMergeItems.Configuration
{
	[Serializable]
	[SetViewPayloadAsType(typeof(IMergeItem))]
	public class RemoteMergeItem : RemoteItemBase, IMergeItem, IItem, IUniqueStringKeyAsset
	{
		public override string LocalSpritesPath => null;

		public override string SpriteLocatorUniqueId => null;

		[JsonProperty("itemName")]
		public string ItemName { get; set; }

		[JsonProperty("animateAsset")]
		public RemoteAnimatedAsset RemoteAnimatedAsset { get; set; }

		public ProduceCapability Produce { get; set; }

		public SpawnCapability Spawn { get; set; }

		public ExpendableCapability Expend { get; set; }

		public SellCapability Sell { get; set; }

		public CollectCapability Collect { get; set; }

		public CollectResourceCapability CollectResource { get; set; }

		public TimeLockCapability TimeLock { get; set; }

		public MergeCapability Merge { get; set; }

		public InteractionCapability Interaction { get; set; }

		[JsonProperty("chargeable")]
		public ChargableCapability Chargable { get; set; }

		public OrderSpawnCapability OrderSpawn { get; set; }

		public InteractionConstraintCapability InteractionConstraint { get; set; }

		public ToolSpawningCapability ToolSpawning { get; set; }

		public BubbleItemCapability BubbleItem { get; set; }

		public BubbleItemCapability BubbleItemOverride => null;

		public DifficultyCapability Difficulty { get; set; }

		public SplitCapability Split => null;

		public StackingCapability Stacking { get; set; }

		public float DiscoverItemResourceRewardMultiplier { get; set; }

		public string CustomInfoText { get; set; }

		public bool ForceAllowMergeWithJoker { get; set; }

		public bool RequestedByOrders { get; set; }

		public bool EventTransferable { get; set; }

		[JsonProperty("toolData")]
		public ToolData ToolData { get; set; }

		public MergeItemWeakReference TransformOriginItemReference { get; set; }

		public ItemsSpawningCapability ItemsSpawning => null;

		[JsonIgnore]
		public IMergeGraphItem ParentGraph { get; set; }

		[JsonIgnore]
		public List<IMergeItem> AllSpawnedMergeItems => null;

		[JsonIgnore]
		public RemoteContentBundleHandle BundleHandle { get; set; }

		[JsonIgnore]
		public string BundleAssetUrl => null;

		public IItemInfoData ItemInfoData { get; set; }

		[JsonIgnore]
		public DynamicMergeItemConfig DynamicItemConfig { get; set; }

		[JsonIgnore]
		public bool AutoOpenTooltip { get; set; }

		public override string ToString()
		{
			return null;
		}

		public void SetAsLocalSprite()
		{
		}
	}
}
