using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Remote.Payloads;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.DynamicMergeItems;
using Merger.Game.ItemInfoData;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Configuration
{
	public sealed class RemoteMergeItemLazy : RemoteItemBase, IMergeItem, IItem, IUniqueStringKeyAsset
	{
		[NonSerialized]
		public RemoteMergeItem _remoteMergeItem;

		[NonSerialized]
		public string _raw;

		[NonSerialized]
		public readonly JsonSerializer _serializer;

		[NonSerialized]
		public float? _discoverItemResourceRewardMultiplier;

		public override string LocalSpritesPath => null;

		public override string SpriteLocatorUniqueId => null;

		public override string UniqueId { get; set; }

		public string ItemName { get; set; }

		public IItemInfoData ItemInfoData { get; set; }

		public bool AutoOpenTooltip { get; set; }

		public IMergeGraphItem ParentGraph { get; set; }

		public DynamicMergeItemConfig DynamicItemConfig { get; set; }

		public string BundleAssetUrl => null;

		public RemoteAnimatedAsset RemoteAnimatedAsset => null;

		public ProduceCapability Produce => null;

		public SpawnCapability Spawn => null;

		public ExpendableCapability Expend => null;

		public SellCapability Sell => null;

		public CollectCapability Collect => null;

		public CollectResourceCapability CollectResource => null;

		public TimeLockCapability TimeLock => null;

		public MergeCapability Merge => null;

		public InteractionCapability Interaction => null;

		public ChargableCapability Chargable => null;

		public OrderSpawnCapability OrderSpawn => null;

		public InteractionConstraintCapability InteractionConstraint => null;

		public ToolSpawningCapability ToolSpawning => null;

		public BubbleItemCapability BubbleItem => null;

		public BubbleItemCapability BubbleItemOverride { get; }

		public DifficultyCapability Difficulty => null;

		public SplitCapability Split => null;

		public StackingCapability Stacking => null;

		public float DiscoverItemResourceRewardMultiplier => 0f;

		public string CustomInfoText => null;

		public bool ForceAllowMergeWithJoker => false;

		public bool RequestedByOrders => false;

		public bool EventTransferable => false;

		public ToolData ToolData => null;

		public MergeItemWeakReference TransformOriginItemReference
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public ItemsSpawningCapability ItemsSpawning => null;

		public List<IMergeItem> AllSpawnedMergeItems => null;

		public RemoteMergeItem DeserializedMergeItem => null;

		public RemoteMergeItemLazy(string raw, string id, string spriteAsset, string itemName, float? discoverItemResourceRewardMultiplier, JsonSerializer serializer)
		{
		}

		public IMergeItem Clone(IJsonService jsonService)
		{
			return null;
		}

		public void SetAsLocalSprite()
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
