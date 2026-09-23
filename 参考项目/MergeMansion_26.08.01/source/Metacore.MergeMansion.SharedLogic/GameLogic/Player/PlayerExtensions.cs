using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Code.GameLogic.AutoMerge;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.DailyScoop;
using Code.GameLogic.Hotspots;
using Code.GameLogic.Player.Events.DailyScoopEvent;
using Code.GameLogic.ProgressionTracks;
using Code.GameLogic.StatsTracking;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.GameFeatures;
using GameLogic.Hotspots;
using GameLogic.Hotspots.CardStack;
using GameLogic.Merge;
using GameLogic.MiniEvents;
using GameLogic.Player.Board;
using GameLogic.Player.Events;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Collectable;
using GameLogic.Player.Modes;
using GameLogic.Player.Modifiers;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using GameLogic.ProgressivePacks;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;

namespace GameLogic.Player
{
	public static class PlayerExtensions
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003C_003Ec__DisplayClass141_0
		{
			public IPlayer player;
		}

		[CompilerGenerated]
		public sealed class _003CGetActiveUnlockedEventIds_003Ed__141 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public string _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public _003C_003Ec__DisplayClass141_0 _003C_003E8__1;

			[NonSerialized]
			public IEnumerator<IBoardEventModel> _003C_003E7__wrap1;

			[NonSerialized]
			public IEnumerator<GarageCleanupEventModel> _003C_003E7__wrap2;

			[NonSerialized]
			public IEnumerator<ProgressionEventModel> _003C_003E7__wrap3;

			[NonSerialized]
			public IEnumerator<SoloMilestoneEventModel> _003C_003E7__wrap4;

			[NonSerialized]
			public IEnumerator<DailyScoopEventModel> _003C_003E7__wrap5;

			[NonSerialized]
			public IEnumerator<MiniEventModel> _003C_003E7__wrap6;

			[NonSerialized]
			public IEnumerator<TemporaryCardCollectionEventModel> _003C_003E7__wrap7;

			[NonSerialized]
			public IEnumerator<CardCollectionSupportingEventModel> _003C_003E7__wrap8;

			[NonSerialized]
			public IEnumerator<CoreSupportEventModel> _003C_003E7__wrap9;

			string IEnumerator<string>.Current
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
			public _003CGetActiveUnlockedEventIds_003Ed__141(int _003C_003E1__state)
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

			public void _003C_003Em__Finally3()
			{
			}

			public void _003C_003Em__Finally4()
			{
			}

			public void _003C_003Em__Finally5()
			{
			}

			public void _003C_003Em__Finally6()
			{
			}

			public void _003C_003Em__Finally7()
			{
			}

			public void _003C_003Em__Finally8()
			{
			}

			public void _003C_003Em__Finally9()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<string> IEnumerable<string>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetAllInventories_003Ed__97 : IEnumerable<IBoardInventory>, IEnumerable, IEnumerator<IBoardInventory>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IBoardInventory _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public int inventoryTypeFlags;

			public int _003C_003E3__inventoryTypeFlags;

			[NonSerialized]
			public IBoardInventory[] _003Cinventories_003E5__2;

			[NonSerialized]
			public int _003CinvCount_003E5__3;

			[NonSerialized]
			public int _003Ci_003E5__4;

			IBoardInventory IEnumerator<IBoardInventory>.Current
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
			public _003CGetAllInventories_003Ed__97(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IBoardInventory> IEnumerable<IBoardInventory>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetHandlers_003Ed__162<TEvent> : IEnumerable<IEventModelHandler<TEvent>>, IEnumerable, IEnumerator<IEventModelHandler<TEvent>>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IEventModelHandler<TEvent> _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public TEvent evt;

			public TEvent _003C_003E3__evt;

			IEventModelHandler<TEvent> IEnumerator<IEventModelHandler<TEvent>>.Current
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
			public _003CGetHandlers_003Ed__162(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IEventModelHandler<TEvent>> IEnumerable<IEventModelHandler<TEvent>>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static readonly string GET_ALL_INVENTORIES_ASSERT_MESSAGE;

		public static IBoardInventory GetInventory(this IPlayer player, MergeBoardId boardId, int typeFlag)
		{
			return null;
		}

		public static bool FeatureUnlocked(this IPlayer player, GameFeatureId featureId)
		{
			return false;
		}

		public static IEnumerable<IItemDefinition> GetItemsWithUnlockRequirements(this IPlayer player, Type filterRequirement = null)
		{
			return null;
		}

		public static int GetFirstCardDeckOnBoard(this IPlayer player, MergeBoard board, bool areBubbleItemsAllowed = false)
		{
			return 0;
		}

		public static bool HasCompletedAllRequirements(this IPlayer player, IEnumerable<PlayerRequirement> requirements)
		{
			return false;
		}

		public static bool ArtifactsEnabled(this IPlayer player)
		{
			return false;
		}

		public static bool CanBubblesAppear(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsShopAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsShopOffersAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsInventoryAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsProducerInventoryLocked(this PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsProducerInventoryAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool HasActionableProducerInventorySlots(this PlayerModel playerModel)
		{
			return false;
		}

		public static int GetNumberOfInventorySlotsRequiredToUnlockProducerInventory(this PlayerModel playerModel)
		{
			return 0;
		}

		public static bool IsTodoAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsDailyTasksAvailable(this IPlayer playerModel, out int outVersion)
		{
			outVersion = default(int);
			return false;
		}

		public static bool IsCodexAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsCurrencyBankAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsCalendarAvailable(this PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsInboxAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsAnimatedDialogueTextEnabled(this IPlayer playerModel)
		{
			return false;
		}

		public static bool ItemNeededBadgeEnabled(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsSinkItemTooltipEnalbed(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsRentableInventoryEnabled(this IPlayer playerModel)
		{
			return false;
		}

		public static bool IsWebShopAvailable(this IPlayer playerModel)
		{
			return false;
		}

		public static bool FeatureInPreview(this IPlayer player, GameFeatureId featureId)
		{
			return false;
		}

		public static IItemDefinition FirstItemInPocket(this IPlayer playerModel, MergeBoardId boardId, IBoardEventModel boardEvent)
		{
			return null;
		}

		public static IPlayerModifier InfiniteEnergyModifier(this IPlayer playerModel)
		{
			return null;
		}

		public static bool HasInfiniteEnergy(this IPlayer playerModel)
		{
			return false;
		}

		public static MetaTime GetEstimatedInfiniteEnergyEndTime(this IPlayer playerModel)
		{
			return default(MetaTime);
		}

		public static IPlayerModifier AddInfiniteEnergy(this IPlayer playerModel, MetaDuration duration)
		{
			return null;
		}

		public static bool IsInventoryAtMaxSlots(this IPlayer playerModel, IBoardInventory inventory)
		{
			return false;
		}

		public static bool ShouldEnableMergeItemFlashSaleBuyButton(this IPlayer player)
		{
			return false;
		}

		public static IEnumerable<HotspotDefinition> VisibleHotspots(this IPlayer player)
		{
			return null;
		}

		public static bool HasItem(this IPlayer player, IItemDefinition definition)
		{
			return false;
		}

		public static int ItemCountInAllSources(this IPlayer player, int item)
		{
			return 0;
		}

		public static int ItemCountInAllSources(this IPlayer player, int itemId, Span<MergeBoard> boards, Span<IBoardInventory> inventories, Option<List<IPlayerReward>> rewardsOption)
		{
			return 0;
		}

		public static int ItemCountOnBoards(this IPlayer player, int itemId, Span<MergeBoard> boards)
		{
			return 0;
		}

		public static int ItemCountInInventories(int itemId, Span<IBoardInventory> inventories)
		{
			return 0;
		}

		public static int ItemCountInRewards(int itemId, List<IPlayerReward> rewards)
		{
			return 0;
		}

		public static void CollectItemsFromBoardRemoveInBubble(this PlayerModel player, IEnumerable<int> items, CurrencySource currencySource)
		{
		}

		public static void CollectAllCollectablesFromBoard(this PlayerModel player, MergeBoard board, CurrencySource currencySource, bool notifyClient = true)
		{
		}

		public static void CollectItemsFromInventories(this PlayerModel player, IEnumerable<int> items, ICollectionContext context)
		{
		}

		public static void CollectItemsFromInventory(this PlayerModel player, MergeBoardId boardId, List<int> itemTypes, ICollectionContext context)
		{
		}

		public static void CollectItemsFromPocket(this PlayerModel player, MergeBoardId boardId, IEnumerable<int> itemIds, ICollectionContext context)
		{
		}

		public static void RemoveItemsFromGarageBoardV2(this PlayerModel playerModel, IEnumerable<int> itemIds)
		{
		}

		public static void RemoveItemsFromGarageBoard(this PlayerModel playerModel, IEnumerable<int> itemIds)
		{
		}

		public static void RemoveItemsFromGarageBoardAndAddSellAmount(this PlayerModel playerModel, IEnumerable<int> itemIds)
		{
		}

		public static void RemoveItemsFromBoard(this IPlayer player, MergeBoardId mergeBoardId, IEnumerable<int> itemIds)
		{
		}

		public static void RemoveItemsFromBoard(this IPlayer player, MergeBoardId mergeBoardId, string itemTag)
		{
		}

		public static void RemoveItemsFromInventories(this IPlayer player, IEnumerable<int> items)
		{
		}

		public static void RemoveItemsFromInventoriesAndAddSellAmount(this IPlayer player, IEnumerable<int> items)
		{
		}

		public static void RemoveItemsFromInventories(this IPlayer player, string itemTag)
		{
		}

		public static void RemoveItemsFromInventories(this PlayerModel player, IEnumerable<int> items, Action<MergeItem> onRemoved)
		{
		}

		public static void RemoveItemsFromPockets(this IPlayer player, IEnumerable<int> items)
		{
		}

		public static void RemoveItemsFromPocketsAndAddSellAmount(this PlayerModel playerModel, IEnumerable<int> itemIds)
		{
		}

		public static void RemoveItemsFromPockets(this IPlayer player, string itemTag)
		{
		}

		public static void RemoveItemsFromMailInbox(this IPlayer player, IEnumerable<int> items)
		{
		}

		public static void RemoveItemsFromMailInbox(this IPlayer player, string itemTag)
		{
		}

		public static bool AnyVisibleTaskRequiresItem(this IPlayer player, int item)
		{
			return false;
		}

		public static IEnumerable<int> GetItemIdsBasedOnItemTag(this IPlayer player, string itemTag)
		{
			return null;
		}

		public static int GetMaxDiscoveredLoveStoryItemType(this PlayerModel playerModel)
		{
			return 0;
		}

		public static void PersistFeatureUnlocks(this IPlayer player, bool executePersistAction)
		{
		}

		public static bool IsOwnedDecorationOffer(this IPlayer player, EventOfferInfo eventOffer)
		{
			return false;
		}

		public static bool HasEventOffer(this IPlayer player, EventOfferInfo eventOffer)
		{
			return false;
		}

		public static ProgressionEventPerkContext GetAvailableShopItemPerkContext(this IPlayer player, ShopItemId shopItemId)
		{
			return null;
		}

		public static void UsePerk(this IPlayer player, ProgressionEventPerkContext perkContext)
		{
		}

		public static (ProgressionEventModel, ProgressionEventExtraInventorySlotsPerk, IBoardInventory) GetProgressionEventExtraInventoryData(this PlayerModel player)
		{
			return default((ProgressionEventModel, ProgressionEventExtraInventorySlotsPerk, IBoardInventory));
		}

		public static int GetDaysFromEpoch(this IPlayer player)
		{
			return 0;
		}

		public static bool AddItemToInventory(this IPlayer player, MergeItem itemToAdd, MetaTime timestamp)
		{
			return false;
		}

		public static bool CanPotentiallyUnlockArea(this IPlayer player, IAreaInfo area)
		{
			return false;
		}

		public static bool MeetsMergeChainLevelForMerge(this IPlayer player, IMergeItem item)
		{
			return false;
		}

		public static bool MeetsMergeChainLevelForDisplay(this IPlayer player, IItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool MeetsMergeChainLevel(this IPlayer player, IItemDefinition itemDefinition, int levelOffset = 0)
		{
			return false;
		}

		public static bool IsPendingPopup(this PlayerModel playerModel, string id)
		{
			return false;
		}

		public static EnergyType GetEnergyTypeForBoard(this IPlayer player, MergeBoardId mergeBoardId)
		{
			return default(EnergyType);
		}

		public static AuxEnergyAttachmentChance GetAuxEnergyItemAttachmentChance(this PlayerModel player, MergeBoardId mergeBoardId, int activationCost)
		{
			return null;
		}

		public static (EnergyType?, int, int) GetSoloMilestoneTokenBonusChance(this IPlayer player, StatsTrackingType trackingType, int resourcesUsed)
		{
			return default((EnergyType?, int, int));
		}

		public static (EnergyType?, long) GetHotspotCompletionBonusAmount(this PlayerModel player, HotspotDefinition hotspotDefinition)
		{
			return default((EnergyType?, long));
		}

		public static (EnergyType?, long) GetHotspotCompletionExpBonusAmount(this PlayerModel player, HotspotDefinition hotspotDefinition)
		{
			return default((EnergyType?, long));
		}

		public static Option<SoloMilestoneEventModel> GetRandomActiveSoloMilestoneEvent(this IPlayer player)
		{
			return default(Option<SoloMilestoneEventModel>);
		}

		public static Option<List<SoloMilestoneEventModel>> GetActiveSoloMilestoneEvents(this IPlayer player)
		{
			return default(Option<List<SoloMilestoneEventModel>>);
		}

		public static bool IsSoloMilestoneEventActive(this IPlayer player, out SoloMilestoneEventModel soloMilestoneEventModel)
		{
			soloMilestoneEventModel = null;
			return false;
		}

		public static bool IsSMETokenRollSuccessful(IPlayer player, (EnergyType? energyType, int chance, int amount) soloMilestoneTokenBonusChance)
		{
			return false;
		}

		public static Option<List<AuxEnergyAttachmentChance>> GetEligibleAuxEnergyAttachmentChances(PlayerModel player, StatsTrackingType statsTrackingType, int resourcesUsed)
		{
			return default(Option<List<AuxEnergyAttachmentChance>>);
		}

		public static IBoardEventModel TryGetBoardEventState(this PlayerModel player, string eventId)
		{
			return null;
		}

		public static bool HasName(this PlayerModel player)
		{
			return false;
		}

		public static float GetAreaProgress(this PlayerModel player, AreaInfo area)
		{
			return 0f;
		}

		public static float GetAreaProgress(this IPlayer player, IAreaInfo area)
		{
			return 0f;
		}

		public static int GetAreaCompletedHotspotCount(this IPlayer player, IAreaInfo area)
		{
			return 0;
		}

		public static void ResetAuxEnergy(this IPlayer player, EnergyType energyType)
		{
		}

		public static bool HasEnteredMergeBoardForGarageCleanupEvent(this PlayerModel playerModel, MergeBoardId mergeBoardId)
		{
			return false;
		}

		public static void RemoveAuxEnergyAttachments(this PlayerModel playerModel, EnergyType auxEnergyType)
		{
		}

		public static void RemoveBubbleAuxEnergyBonuses(this PlayerModel playerModel, EnergyType energyType)
		{
		}

		public static MetaDuration? GetAuxEnergyUnitRestoreDuration(this IPlayer player, EnergyType energyType)
		{
			return null;
		}

		public static EnergyType GetBoardEventEnergyType(this IPlayer player, IBoardEventModel boardEventModel)
		{
			return default(EnergyType);
		}

		public static PetInfo GetActivePetInfo(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAllInventories_003Ed__97))]
		public static IEnumerable<IBoardInventory> GetAllInventories(this IPlayer player, int inventoryTypeFlags = 7)
		{
			return null;
		}

		public static int GetAllInventories(this IPlayer player, Span<IBoardInventory> results, int inventoryTypeFlags = 7)
		{
			return 0;
		}

		public static int GetFishingRodActivationCost(this IPlayer player)
		{
			return 0;
		}

		public static ActivationCostData GetActivationCostData(this IPlayer player, IBoard board, MergeItem mergeItem)
		{
			return default(ActivationCostData);
		}

		public static ActivationCostData GetDefaultActivationCostData(this IPlayer player, IBoard board, IItemDefinition itemDefinition)
		{
			return default(ActivationCostData);
		}

		public static ILevelEventModel GetLevelEventModel(this PlayerModel playerModel, string eventId)
		{
			return null;
		}

		public static void ServerSideEnsureRandomsByFishingRodType(this IPlayer player)
		{
		}

		public static bool HasEnergyModeActiveOnBoard(this IPlayer player, MergeBoardId boardId)
		{
			return false;
		}

		public static Option<EnergyModeInfo> GetActiveEnergyModeOnBoard(this IPlayer player, MergeBoardId boardId)
		{
			return default(Option<EnergyModeInfo>);
		}

		public static bool IsBoardEnergyModeAllowed(this IPlayer player, MergeBoardId mergeBoardId)
		{
			return false;
		}

		public static bool CanUseEnergyModeForItemInBoard(this IPlayer player, MergeItem item, IBoard board)
		{
			return false;
		}

		public static (Currencies, int) GetFlashSaleResetPrice(this IPlayer player, OfferPlacementId placementId)
		{
			return default((Currencies, int));
		}

		public static DailyScoopStandardObjectiveData GetStandardDailyScoopObjectiveData(this IPlayer player, string objectiveId)
		{
			return null;
		}

		public static DailyScoopSpecialObjectiveData GetSpecialDailyScoopObjectiveData(this IPlayer player, string objectiveId)
		{
			return null;
		}

		public static bool IsInSegmentorSegment(this IPlayer player, string segmentId)
		{
			return false;
		}

		public static bool IsInSegmentorTag(this IPlayer player, string tagId)
		{
			return false;
		}

		public static bool IsInSegment(this IPlayer player, PlayerSegmentId segmentId)
		{
			return false;
		}

		public static F32 GetValueInRange(this IPlayer player, F32 min, F32 max)
		{
			return default(F32);
		}

		public static int GetValueInRange(this IPlayer player, int min, int max)
		{
			return 0;
		}

		public static bool IsRewardEligibleForSoloMilestoneTokens(this IPlayer player, List<int> energyAttachmentFlashSaleParameters, PlayerReward reward)
		{
			return false;
		}

		public static bool HasAnyEnergyModeEventActive(this PlayerModel player)
		{
			return false;
		}

		public static bool HasEnergyModeEventActive(this PlayerModel player, PlayerModeId modeId)
		{
			return false;
		}

		public static int GetEligibleEnergyModesForBoard(this IPlayer player, IBoard board, EnergyModeInfo[] resultBuffer)
		{
			return 0;
		}

		public static MetaDuration GetEnergyUnitRestoreDuration(this IPlayer player)
		{
			return default(MetaDuration);
		}

		public static SpeedUpBehavior GetSpeedUpBehavior(this IPlayer player)
		{
			return default(SpeedUpBehavior);
		}

		public static int CalculateAverageHistoricalLeaderboardEventScore(this PlayerModel playerModel)
		{
			return 0;
		}

		public static int CalculateAverageHistoricalBoultonLeagueEventScore(this PlayerModel playerModel)
		{
			return 0;
		}

		public static bool HasInfiniteDailyTasksV2(this IPlayer player)
		{
			return false;
		}

		public static ProgressionPackEventInfo GetProgressionPackObjectiveData(this IPlayer player, string objectiveId)
		{
			return null;
		}

		public static MysteryMachineEventModel GetActiveOrPreviousMysteryMachineEvent(this PlayerModel player)
		{
			return null;
		}

		public static F64 GetMoneySpentInLastNDays(this IPlayer player, int n)
		{
			return default(F64);
		}

		public static void HandleShortLeaderboardEventStuckJoining(this PlayerModel playerModel)
		{
		}

		public static bool TryGetActiveBoardFishingEventModel(this PlayerModel playerModel, out CollectibleBoardEventModel activeFishingEvents)
		{
			activeFishingEvents = null;
			return false;
		}

		public static void SetModeActive(this IPlayer player, MergeBoardId boardId, PlayerModeId modeId, bool active, bool triggerAnalytics)
		{
		}

		public static void SetEnergyModeActiveForAllEligibleMergeBoards(this PlayerModel playerModel, EnergyModeInfo energyModeInfo, bool triggerAnalytics)
		{
		}

		public static bool CanSetEnergyModeActiveOnMergeBoard(this IPlayer playerModel, IBoard board, BoardInfo boardInfo, EnergyModeInfo energyModeInfo)
		{
			return false;
		}

		public static int GetActivationCost(this IPlayer player, IItemDefinition item)
		{
			return 0;
		}

		public static void HandleExtraSpawnsFromProduceItem(this PlayerModel player, IExtraSpawnTrigger trigger, MergeBoard board, Coordinate coordinate, AnalyticsContext analyticsContext, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public static void HandleExtraSpawnsFromCompleteDailyTaskV2(this PlayerModel player, int requiredItem, AnalyticsContext analyticsContext)
		{
		}

		public static int GetHashCodeWithSalt(this EntityId entityId, string segmentSalt)
		{
			return 0;
		}

		public static void HandleExtraSpawns(this PlayerModel player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, AnalyticsContext analyticsContext, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public static Option<List<ExtraSpawnInfo>> GetEligibleExtraSpawns(this IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption)
		{
			return default(Option<List<ExtraSpawnInfo>>);
		}

		public static void ResetAndAddEligibleExtraSpawns(this IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, List<ExtraSpawnInfo> outputEligibleExtraSpawns, Dictionary<CoreSupportEventExtraSpawnGroupId, (ExtraSpawnInfo, CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId>)> tmpSegmentMatchPass)
		{
		}

		[IteratorStateMachine(typeof(_003CGetActiveUnlockedEventIds_003Ed__141))]
		public static IEnumerable<string> GetActiveUnlockedEventIds(this IPlayer player)
		{
			return null;
		}

		public static bool GetAutoMergeGatedInitialEnabledState(this IPlayer player)
		{
			return false;
		}

		public static void GrantAutoMergeDuration(this IPlayer player, MetacoreTime startTime, MetacoreDuration duration, AutoMergeSource source)
		{
		}

		public static ICoreSupportEventMinigameModel CreateCoreSupportEventMinigameModel(this IPlayer player, CoreSupportEventType eventType, CoreSupportEventMinigameId minigameId, CoreSupportEventId eventId)
		{
			return null;
		}

		public static Option<ICoreSupportEventModel> GetActiveCoreSupportEventForPortalItem(this IPlayer player, IItemDefinition portalItem)
		{
			return default(Option<ICoreSupportEventModel>);
		}

		public static void ResetCoreSupportEventProgress(this PlayerModel playerModel, CoreSupportEventModel eventModel)
		{
		}

		public static void ResetDigEventData(PlayerModel playerModel)
		{
		}

		public static void ResetRollTheDiceData(PlayerModel playerModel)
		{
		}

		public static F32 GetExtraSpawnItemValue<TId>(this IPlayer player, Option<IItemDefinition> itemOption, TId id)
		{
			return default(F32);
		}

		public static F32 GetExtraSpawnCurrencyValue<TId>(this IPlayer player, Currencies currency, TId id)
		{
			return default(F32);
		}

		public static F32 GetExtraSpawnCardStackValue<TId>(this IPlayer player, CardStackId cardStackId, TId id)
		{
			return default(F32);
		}

		public static F32 GetExtraSpawnIllustrationValue<TId>(this IPlayer player, CustomHotspotTableId illustrationId, TId id)
		{
			return default(F32);
		}

		public static bool HasActiveUnlockedProgressionEvent(this IPlayer player)
		{
			return false;
		}

		public static Option<CoreSupportEventModel> GetCoreSupportEventForToken(this IPlayer player, CoreSupportEventTokenId tokenId)
		{
			return default(Option<CoreSupportEventModel>);
		}

		public static Option<CoreSupportEventInfo> GetCoreSupportEventInfoForToken(this IPlayer player, CoreSupportEventTokenId tokenId)
		{
			return default(Option<CoreSupportEventInfo>);
		}

		public static Option<ICoreSupportEventModel> GetActiveCoreSupportEvent(this IPlayer player, CoreSupportEventType eventType)
		{
			return default(Option<ICoreSupportEventModel>);
		}

		public static bool HasAuxEnergyEventActiveAndUnlocked(this PlayerModel playerModel, EnergyType auxEnergyType)
		{
			return false;
		}

		public static Option<ProgressionTrackInfo> TryGetProgressionTrackInfoForEvent(this IPlayer player, string eventId)
		{
			return default(Option<ProgressionTrackInfo>);
		}

		public static bool HasAnyOfBoardEventsNowOrInFuture(this IPlayer player, List<string> eventIds)
		{
			return false;
		}

		public static Dictionary<int, List<MergeItem.MergeItemExtra>> BuildVisibleItemsExtraLookup(this IPlayer player, IReadOnlyList<ItemDef> itemDefs = null, IReadOnlyList<MergeChainDef> mergeChainDefs = null)
		{
			return null;
		}

		public static void DispatchEvent<TEvent>(this IPlayer model, TEvent evt)
		{
		}

		[IteratorStateMachine(typeof(_003CGetHandlers_003Ed__162<>))]
		public static IEnumerable<IEventModelHandler<TEvent>> GetHandlers<TEvent>(TEvent evt)
		{
			return null;
		}

		public static bool MatchesHotspotRequirements(this IPlayer player, IHotspotDefinition hotspotDefinition)
		{
			return false;
		}

		public static Option<ActivationCostData> TryGetEnergyModeActivationCostDataWithFallbacks(IPlayer player, IBoard board, IMergeItem item, int activationCost, EnergyType energyType, EnergyModeInfo energyMode)
		{
			return default(Option<ActivationCostData>);
		}

		public static Option<ActivationCostData> TryGetEnergyModeActivationCostData(IPlayer player, IMergeItem item, int activationCost, EnergyType energyType, EnergyModeInfo energyMode)
		{
			return default(Option<ActivationCostData>);
		}

		public static Option<List<IPlayerReward>> GetAllMailMessageRewards(this IPlayer player)
		{
			return default(Option<List<IPlayerReward>>);
		}
	}
}
