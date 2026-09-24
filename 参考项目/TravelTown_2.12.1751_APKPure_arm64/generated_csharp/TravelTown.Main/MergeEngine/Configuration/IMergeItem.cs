using System.Collections.Generic;
using Framework.Core.Services.Backend.Remote.Payloads;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.DynamicMergeItems;
using Merger.RemoteMergeItems.Configuration;

namespace MergeEngine.Configuration
{
	public interface IMergeItem : IItem, IUniqueStringKeyAsset
	{
		ProduceCapability Produce { get; }

		SpawnCapability Spawn { get; }

		ExpendableCapability Expend { get; }

		SellCapability Sell { get; }

		CollectCapability Collect { get; }

		CollectResourceCapability CollectResource { get; }

		TimeLockCapability TimeLock { get; }

		MergeCapability Merge { get; }

		InteractionCapability Interaction { get; }

		ChargableCapability Chargable { get; }

		OrderSpawnCapability OrderSpawn { get; }

		InteractionConstraintCapability InteractionConstraint { get; }

		ToolSpawningCapability ToolSpawning { get; }

		BubbleItemCapability BubbleItem { get; }

		BubbleItemCapability BubbleItemOverride { get; }

		DifficultyCapability Difficulty { get; }

		SplitCapability Split { get; }

		StackingCapability Stacking { get; }

		float DiscoverItemResourceRewardMultiplier { get; }

		string CustomInfoText { get; }

		bool ForceAllowMergeWithJoker { get; }

		bool RequestedByOrders { get; }

		bool EventTransferable { get; }

		ToolData ToolData { get; }

		MergeItemWeakReference TransformOriginItemReference { get; set; }

		ItemsSpawningCapability ItemsSpawning { get; }

		IMergeGraphItem ParentGraph { get; set; }

		List<IMergeItem> AllSpawnedMergeItems { get; }

		DynamicMergeItemConfig DynamicItemConfig { get; set; }

		RemoteAnimatedAsset RemoteAnimatedAsset { get; }

		void SetAsLocalSprite();
	}
}
