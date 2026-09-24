using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.MergeChains;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Attachments;
using GameLogic.Player.Items.Boosting;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Charges;
using GameLogic.Player.Items.Chest;
using GameLogic.Player.Items.Decay;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Items.Persistent;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Items.Spawning;
using GameLogic.Player.Items.TimeContainer;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items
{
	public interface IMergeItem : IBoardItem
	{
		ItemVisibility Visibility { get; }

		MetacoreTime CreatedAt { get; }

		DecayState DecayState { get; }

		ActivationState ActivationState { get; }

		SpawnState SpawnState { get; }

		StorageState ActivationStorageState { get; }

		StorageState SpawnStorageState { get; }

		IChestState ChestState { get; }

		BoosterState BoosterState { get; }

		BubbleState BubbleState { get; }

		int SpecialActivationAmount { get; }

		ISinkState SinkState { get; }

		ITimeContainerState TimeContainerState { get; }

		ChargesState ChargesState { get; }

		XpState ExperienceState { get; }

		ItemAttachmentsState AttachmentsState { get; }

		ItemLeaderboardState LeaderboardState { get; }

		ItemRewardsState RewardsState { get; }

		FishingRodState FishingRodState { get; }

		WeightState WeightState { get; }

		PersistentState PersistentState { get; }

		OrderParentState OrderState { get; }

		bool IsInsideBubble { get; }

		Option<MetacoreTime> NextSpawnStorageTimestampOption { get; }

		bool IsVisible { get; }

		bool IsPartiallyVisible { get; }

		bool ActivationPaused { get; }

		MetacoreDuration RemainingTimeContained { get; }

		MetacoreDuration? RemainingDuration { get; }

		bool IsLootable { get; }

		WeightState WeightStateMaybe { get; }

		ItemAttachmentsState AttachmentsStateMaybe { get; }

		MergeItem.MergeItemExtra Extra { get; }

		F32 TimeBoostMultiplier { get; }

		F32 TimeSpawnBoostMultiplier { get; }

		IItemDefinition GetDefinition(IMergeMansionGameConfig config);

		IMergeChainDefinition GetMergeChain(IMergeMansionGameConfig config);
	}
}
