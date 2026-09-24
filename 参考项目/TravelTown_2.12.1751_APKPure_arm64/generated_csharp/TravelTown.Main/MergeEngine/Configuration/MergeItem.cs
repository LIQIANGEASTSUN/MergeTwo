using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads;
using Framework.Localisation;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.DynamicMergeItems;
using Merger.RemoteMergeItems.Configuration;
using Newtonsoft.Json;
using Tools.Attributes;
using UnityEngine;
using UnityEngine.Serialization;

namespace MergeEngine.Configuration
{
	[SetViewPayloadAsType(typeof(IMergeItem))]
	public class MergeItem : ItemBase, IMergeItem, IItem, IUniqueStringKeyAsset
	{
		[FormerlySerializedAs("Produce")]
		[JsonProperty("Produce")]
		[SerializeField]
		public ProduceCapability _produce;

		[SerializeField]
		[JsonProperty("Spawn")]
		[FormerlySerializedAs("Spawn")]
		public SpawnCapability _spawn;

		[JsonProperty("Expend")]
		[SerializeField]
		[FormerlySerializedAs("Expend")]
		public ExpendableCapability _expend;

		[JsonProperty("Sell")]
		[SerializeField]
		[FormerlySerializedAs("Sell")]
		public SellCapability _sell;

		[SerializeField]
		[JsonProperty("Collect")]
		[FormerlySerializedAs("Collect")]
		public CollectCapability _collect;

		[JsonProperty("CollectResource")]
		[SerializeField]
		[FormerlySerializedAs("CollectResource")]
		public CollectResourceCapability _collectResource;

		[FormerlySerializedAs("TimeLock")]
		[SerializeField]
		[JsonProperty("TimeLock")]
		public TimeLockCapability _timeLock;

		[JsonProperty("Merge")]
		[FormerlySerializedAs("Merge")]
		[SerializeField]
		public MergeCapability _merge;

		[JsonProperty("Interaction")]
		[SerializeField]
		[FormerlySerializedAs("Interaction")]
		public InteractionCapability _interaction;

		[FormerlySerializedAs("Chargable")]
		[SerializeField]
		[JsonProperty("chargeable")]
		public ChargableCapability _chargable;

		[SerializeField]
		[FormerlySerializedAs("OrderSpawn")]
		[JsonProperty("OrderSpawn")]
		public OrderSpawnCapability _orderSpawn;

		[FormerlySerializedAs("InteractionConstraint")]
		[JsonProperty("InteractionConstraint")]
		[SerializeField]
		public InteractionConstraintCapability _interactionConstraint;

		[SerializeField]
		[FormerlySerializedAs("ToolSpawning")]
		[JsonProperty("ToolSpawning")]
		public ToolSpawningCapability _toolSpawning;

		[SerializeField]
		[FormerlySerializedAs("BubbleItem")]
		[JsonProperty("BubbleItem")]
		public BubbleItemCapability _bubbleItem;

		[JsonProperty("Difficulty")]
		[FormerlySerializedAs("Difficulty")]
		[SerializeField]
		public DifficultyCapability _difficulty;

		[JsonProperty("Split")]
		[SerializeField]
		public SplitCapability _split;

		[JsonProperty("Stacking")]
		[SerializeField]
		public StackingCapability _stacking;

		[JsonProperty("DiscoverItemResourceRewardMultiplier")]
		[FormerlySerializedAs("DiscoverItemResourceRewardMultiplier")]
		[SerializeField]
		public float _discoverItemResourceRewardMultiplier;

		[LocalisationIdentifier]
		[JsonProperty("CustomInfoText")]
		[FormerlySerializedAs("CustomInfoText")]
		[SerializeField]
		public string _customInfoText;

		[JsonProperty("ForceAllowMergeWithJoker")]
		[FormerlySerializedAs("ForceAllowMergeWithJoker")]
		[SerializeField]
		public bool _forceAllowMergeWithJoker;

		[FormerlySerializedAs("RequestedByOrders")]
		[JsonProperty("RequestedByOrders")]
		[SerializeField]
		public bool _requestedByOrders;

		[SerializeField]
		[FormerlySerializedAs("EventTransferable")]
		[JsonProperty("EventTransferable")]
		public bool _eventTransferable;

		[JsonProperty("toolData")]
		[SerializeField]
		public ToolData _toolData;

		[NonSerialized]
		public List<IMergeItem> _allSpawnedMergeItems;

		[JsonIgnore]
		public ProduceCapability Produce => null;

		[JsonIgnore]
		public SpawnCapability Spawn => null;

		[JsonIgnore]
		public ExpendableCapability Expend => null;

		[JsonIgnore]
		public SellCapability Sell => null;

		[JsonIgnore]
		public CollectCapability Collect => null;

		public CollectResourceCapability CollectResource => null;

		[JsonIgnore]
		public TimeLockCapability TimeLock => null;

		[JsonIgnore]
		public MergeCapability Merge => null;

		[JsonIgnore]
		public InteractionCapability Interaction => null;

		[JsonIgnore]
		public ChargableCapability Chargable => null;

		[JsonIgnore]
		public OrderSpawnCapability OrderSpawn => null;

		[JsonIgnore]
		public InteractionConstraintCapability InteractionConstraint => null;

		[JsonIgnore]
		public ToolSpawningCapability ToolSpawning => null;

		[JsonIgnore]
		public BubbleItemCapability BubbleItem => null;

		public BubbleItemCapability BubbleItemOverride => null;

		[JsonIgnore]
		public DifficultyCapability Difficulty => null;

		[JsonIgnore]
		public SplitCapability Split => null;

		[JsonIgnore]
		public StackingCapability Stacking => null;

		[JsonIgnore]
		public float DiscoverItemResourceRewardMultiplier => 0f;

		[JsonIgnore]
		public string CustomInfoText => null;

		[JsonIgnore]
		public bool ForceAllowMergeWithJoker => false;

		[JsonIgnore]
		public bool RequestedByOrders => false;

		[JsonIgnore]
		public bool EventTransferable => false;

		[JsonIgnore]
		public ToolData ToolData => null;

		public bool IsProducer { get; }

		[JsonIgnore]
		public MergeItemWeakReference TransformOriginItemReference { get; set; }

		[JsonIgnore]
		public ItemsSpawningCapability ItemsSpawning => null;

		[JsonIgnore]
		public IMergeGraphItem ParentGraph { get; set; }

		[JsonIgnore]
		public DynamicMergeItemConfig DynamicItemConfig { get; set; }

		public RemoteAnimatedAsset RemoteAnimatedAsset { get; }

		public override string LocalSpritesPath => null;

		public override string SpriteLocatorUniqueId => null;

		[JsonIgnore]
		public List<IMergeItem> AllSpawnedMergeItems => null;

		public override string GetStoragePath()
		{
			return null;
		}
	}
}
