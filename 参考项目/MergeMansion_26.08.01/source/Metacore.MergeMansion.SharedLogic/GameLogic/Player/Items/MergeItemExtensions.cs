using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.MergeChains;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Consumption;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Items.Sink;
using GameLogic.Random;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items
{
	public static class MergeItemExtensions
	{
		[CompilerGenerated]
		public sealed class _003CGetSpawnItems_003Ed__81 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IItemDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IMergeItem mergeItem;

			public IMergeItem _003C_003E3__mergeItem;

			[NonSerialized]
			public IBoard board;

			public IBoard _003C_003E3__board;

			[NonSerialized]
			public IMergeMansionGameConfig _003Cconfig_003E5__2;

			[NonSerialized]
			public IEnumerator<IItemDefinition> _003C_003E7__wrap2;

			[NonSerialized]
			public IEnumerator<OrderStateReward> _003C_003E7__wrap3;

			IItemDefinition IEnumerator<IItemDefinition>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CGetSpawnItems_003Ed__81(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			public void _003C_003Em__Finally2()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IItemDefinition> IEnumerable<IItemDefinition>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public const string HotspotTagKey = "FinishHotspotID";

		public static string GetUniqueId(this IMergeItem mergeItem)
		{
			return null;
		}

		public static string GetType(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static int GetItemLevel(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return 0;
		}

		public static void PauseAllActions(this IMergeItem item)
		{
		}

		public static void UnpauseAllActions(this IMergeItem item)
		{
		}

		public static bool ShouldLogMerge(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool ShowTutorialFingerOnDiscovery(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool SupportsMerge(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static MergeChainId GetChainId(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static IMergeChainDefinition GetChain(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static bool IsChest(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool CanBeOpened(this IMergeItem mergeItem)
		{
			return false;
		}

		public static bool IsOpening(this IMergeItem mergeItem, MetacoreTime currentTime, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static (Currencies, int) GetFastOpenCost(this IMergeItem mergeItem, MetacoreTime timestamp, IPlayer player)
		{
			return default((Currencies, int));
		}

		public static MetacoreTime GetChestEstimatedOpeningTime(this IMergeItem mergeItem)
		{
			return default(MetacoreTime);
		}

		public static MetaDuration GetChestOpenDuration(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return default(MetaDuration);
		}

		public static bool IsReadyForOpen(this IMergeItem mergeItem, MetacoreTime currentTime)
		{
			return false;
		}

		public static IItemEffectFeatures GetItemActivationEffects(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static bool UseCalendarBasedCycle(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool HasActivationVfx(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool HasActivationMiniGame(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsLargeItem2x2(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool CanNotBeSpedUp(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsItemSupportingCharges(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsDecayableOrder(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsItemDecayable(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static MetaDuration? GetLifetime(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static bool ShouldDisableDecayAnimations(this IMergeItem mergeItem)
		{
			return false;
		}

		public static bool SupportsFishingRodTap(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool DecayOnActivation(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool ActivatedWithNoCost(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool SupportsActivation(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsActivableOrder(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool CanBeActivated(this IMergeItem mergeItem, IPlayer player)
		{
			return false;
		}

		public static bool CanBeActivatedWithCapacityConsumption(this IMergeItem mergeItem, IPlayer player, int capacityConsumption)
		{
			return false;
		}

		public static bool IsSink(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsSinkableOrder(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static ISinkState GetSinkState(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static bool HideSinkUndiscoveredItemsInHints(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsSinkCompleted(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool HasPersistentState(this IMergeItem mergeItem)
		{
			return false;
		}

		public static bool CanBeSold(this IMergeItem mergeItem, IPlayer player, MergeBoardId boardId)
		{
			return false;
		}

		public static bool CanBeSold(this IMergeItem mergeItem, IPlayer player, IBoard board, bool checkTagRestriction = false)
		{
			return false;
		}

		public static bool IsCollectable(this IMergeItem mergeItem, IPlayer player)
		{
			return false;
		}

		public static bool IsPortal(this IMergeItem mergeItem, IPlayer player)
		{
			return false;
		}

		public static bool IsProducerSellable(IMergeItem mergeItem, IBoard board, IPlayer player)
		{
			return false;
		}

		public static int CalculateSameProducerTypes(this IMergeItem item, IEnumerable<MergeItem> mergeItems, IPlayer player)
		{
			return 0;
		}

		public static BubbleState BubbleStateMaybe(this IMergeItem mergeItem)
		{
			return null;
		}

		public static (Currencies, int) GetBubbleOpenCost(this IMergeItem mergeItem, IPlayer player)
		{
			return default((Currencies, int));
		}

		public static MetacoreTime GetBubbleEndTime(this IMergeItem mergeItem)
		{
			return default(MetacoreTime);
		}

		public static IItemDefinition GetBubbleReplacementItem(this IMergeItem item, IPlayer player)
		{
			return null;
		}

		public static int GetExperience(this IMergeItem mergeItem)
		{
			return 0;
		}

		public static int GetBaseExperienceValue(this IMergeItem mergeItem, IPlayer player)
		{
			return 0;
		}

		public static int GetTotalExperience(this IMergeItem mergeItem, IPlayer player)
		{
			return 0;
		}

		public static int GetExperienceRequired(this IMergeItem mergeItem, IPlayer player)
		{
			return 0;
		}

		public static int GetTotalExperienceRequired(this IMergeItem mergeItem, IPlayer player)
		{
			return 0;
		}

		public static float GetExperienceProgress(this IMergeItem mergeItem, IPlayer player)
		{
			return 0f;
		}

		public static int GetExperienceAfterMerge(this IMergeItem mergeItem, IMergeItem fromItem, IPlayer player)
		{
			return 0;
		}

		public static int GetLevelAfterMerge(this IMergeItem mergeItem, IMergeItem fromItem, IMergeMansionGameConfig gameConfig, IPlayer player)
		{
			return 0;
		}

		public static float GetExperienceProgressAfterMerge(this IMergeItem mergeItem, IMergeItem fromItem, IPlayer player)
		{
			return 0f;
		}

		public static IEnumerable<MergeReward> GetMergeRewards(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static bool IsPreserveRatioItem(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsPreserveRatioItemMergeResult(this IMergeItem item, IPlayer player)
		{
			return false;
		}

		public static bool IsActivationItem(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsLevelUpItem(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static MetaTime? GetNextEstimatedActivationStorageFillStep(this IMergeItem mergeItem)
		{
			return null;
		}

		public static MetacoreDuration? GetCurrentActivationStateDuration(this IMergeItem mergeItem, IPlayer player, MetacoreTime timestamp)
		{
			return null;
		}

		public static MetacoreDuration? GetRemainingDuration(this IMergeItem mergeItem, IPlayer player)
		{
			return null;
		}

		public static bool TryGetTransformsIntoBooster(IMergeItem mergeItem, IPlayer player, out IItemDefinition itemDefinition)
		{
			itemDefinition = null;
			return false;
		}

		public static MetaTime? GetEstimatedLifeEndTime(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static Option<MetacoreDuration> GetCurrentSpawnStateDuration(this IMergeItem mergeItem, IPlayer player, MetacoreTime timestamp)
		{
			return default(Option<MetacoreDuration>);
		}

		public static MetaDuration? HowFarIsNextActivationStorageFillStep(this IMergeItem mergeItem, MetacoreTime timestamp)
		{
			return null;
		}

		public static Option<MetaDuration> HowFarIsNextSpawnStorageFillStep(this IMergeItem mergeItem, MetacoreTime timestamp)
		{
			return default(Option<MetaDuration>);
		}

		public static bool CanBeSpedUpWithGems(this IMergeItem mergeItem, IPlayer player, IBoard board)
		{
			return false;
		}

		public static (Currencies, int) GetSpeedUpCost(this IMergeItem mergeItem, IGenerationContext context, MetacoreTime currentTimestamp, IPlayer player)
		{
			return default((Currencies, int));
		}

		public static int GetSpeedUpCost34(SpeedUpCostBehavior speedUpCostBehavior, MetaDuration durationToStorageFillStep)
		{
			return 0;
		}

		public static bool CanSpawn(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool SupportsSpawning(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsSpawnableOrder(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool HasUnlockedSpawnItems(this IMergeItem mergeItem, IPlayer player, IBoard board)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetSpawnItems_003Ed__81))]
		public static IEnumerable<IItemDefinition> GetSpawnItems(this IMergeItem mergeItem, IPlayer player, IBoard board)
		{
			return null;
		}

		public static bool IsOnSpawnCycleDelay(this IMergeItem mergeItem)
		{
			return false;
		}

		public static bool HasItemInfiniteEnergy(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static MetacoreDuration? InfiniteEnergyDuration(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static bool VisibilityAllowsMerge(this IMergeItem mergeItem)
		{
			return false;
		}

		public static (Currencies, int) UnlockValue(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return default((Currencies, int));
		}

		public static bool CanBeUnlocked(this IMergeItem mergeItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsConfirmableMergeResult(this IMergeItem mergeItem, MergeResult mergeResult, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static IConsumptionCheckResult DoesConsumeWorkWithItem(this IMergeItem item, IPlayer player, MergeItem itemToCheck, IBoard mergeBoard, MetacoreTime currentTime)
		{
			return null;
		}

		public static void DoConsumeAction(this IMergeItem item, IPlayer player, MergeBoard mergeBoard, MergeItem itemToModify, Coordinate itemPosition, MetacoreTime timestamp, ICollection<MergeBoardAct> mergeBoardActs)
		{
		}

		public static bool IsItemDecayableWithBoosterAcceleration(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static bool IsItemTimeStorage(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return false;
		}

		public static OrderPhase GetOrderPhase(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return default(OrderPhase);
		}

		public static MetacoreDuration GetAge(this IMergeItem item, MetacoreTime now)
		{
			return default(MetacoreDuration);
		}

		public static int ConsumeCharges(this IMergeItem item, int quantity)
		{
			return 0;
		}

		public static MetacoreDuration ConsumeTime(this IMergeItem item, MetacoreDuration duration)
		{
			return default(MetacoreDuration);
		}

		public static void TryRemoveCooldown(this IMergeItem item, IPlayer player, bool boardHasCooldownRemoverState, bool boardHasOnFireState)
		{
		}

		public static bool AllowRemovingCooldown(this IMergeItem item, IPlayer player, bool boardHasCooldownRemoverState, bool boardHasOnFireState)
		{
			return false;
		}

		public static bool AllowCooldownRemover(this IMergeItem item, IPlayer player)
		{
			return false;
		}

		public static bool AllowOnFire(this IMergeItem item, IPlayer player)
		{
			return false;
		}

		public static void SetWeight(this IMergeItem item, F32 weight, WeightCategory weightCategory, int rodItem)
		{
		}

		public static bool IsActivationStorageFull(this IMergeItem item, IPlayer player)
		{
			return false;
		}

		public static int GetCurrentAmountInActivationStorage(this IMergeItem item)
		{
			return 0;
		}

		public static TakeItemFromChestResult TakeItemFromChest(this IMergeItem item, IMergeMansionGameConfig config)
		{
			return default(TakeItemFromChestResult);
		}

		public static IItemDefinition GetOneLoot(this IMergeItem item, IPlayer player)
		{
			return null;
		}

		[Obsolete("use the version with MetacoreTime instead")]
		public static void StartChestOpen(this IMergeItem item, MetaTime currentTime, IPlayer player)
		{
		}

		public static void StartChestOpen(this IMergeItem item, MetacoreTime currentTime, IPlayer player)
		{
		}

		public static void ForceCompleteChestCountdown(this IMergeItem item)
		{
		}

		public static void FillChestWithLoot(this IMergeItem item, IPlayer player, IGenerationContext generationContext, IBoard board)
		{
		}

		public static void FillChestWithLoot(this IMergeItem item, IPlayer player, IBoard board)
		{
		}

		public static bool CanBeSpedUpWithBooster(this IMergeItem item, MetacoreTime currentTime, IPlayer player, IBoard board)
		{
			return false;
		}

		public static bool IsNonAllowCooldownRemoverActivationItem(this IMergeItem item, IMergeMansionGameConfig gameConfig)
		{
			return false;
		}
	}
}
