using System;
using System.Collections.Generic;
using Code.GameLogic.IAP;
using Game.Logic;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.Config.Shop.Items;
using GameLogic.Config.Types;
using GameLogic.Hotspots;
using GameLogic.Inventory;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.DailyTasks;
using GameLogic.Player.Events;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;
using GameLogic.Random;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;

public static class MasterFunctions
{
	public struct SimultaneousMultistepTaskProgress : IComparable<SimultaneousMultistepTaskProgress>
	{
		public HotspotDefinition Hotspot;

		public int Completed;

		public int Total;

		public int CompareTo(SimultaneousMultistepTaskProgress other)
		{
			return 0;
		}
	}

	public static bool AllItemsCanBeFoundFromBoards(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, int[] items, int[] amounts)
	{
		return false;
	}

	public static bool AllItemsCanBeFoundFromBoards(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<int>[] items, int[] amounts)
	{
		return false;
	}

	public static bool AllItemsCanBeFoundFromBoardsOrInventories(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, int[] items, int[] amounts, out bool isUsingInventorySink)
	{
		isUsingInventorySink = default(bool);
		return false;
	}

	public static bool AllItemsCanBeFoundFromBoardsOrInventories(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, Span<IEnumerable<int>> items, Span<int> amounts, out bool isUsingInventorySink)
	{
		isUsingInventorySink = default(bool);
		return false;
	}

	public static bool AllItemsCanBeFoundFromBoardsOrInventories(IPlayer player, IReadOnlyCollection<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IEnumerable<(IEnumerable<IItemDefinition>, int)> quantities, out bool isUsingInventorySink)
	{
		isUsingInventorySink = default(bool);
		return false;
	}

	public static bool HasVisibleItemType(IPlayer player, int itemId, int amount)
	{
		return false;
	}

	public static bool HasVisibleItemTypes(IPlayer player, IEnumerable<int> itemIds, int requiredAmount, bool includeEvents = true, int inventoryTypeFlags = 7)
	{
		return false;
	}

	public static int CountVisibleItemTypes(IPlayer player, IEnumerable<IBoard> mergeBoards, int itemId)
	{
		return 0;
	}

	public static int CountVisibleItemTypes(IPlayer player, IEnumerable<IBoard> mergeBoards, IEnumerable<int> itemTypes)
	{
		return 0;
	}

	public static int CountVisibleItemTypesInBoardsAndInventories(IPlayer player, IBoard mergeBoard, IEnumerable<IBoardInventory> inventories, int itemId)
	{
		return 0;
	}

	public static int CountVisibleItemTypesInBoardsAndInventories(IPlayer player, IEnumerable<IBoard> mergeBoards, IEnumerable<IBoardInventory> inventories, int itemId)
	{
		return 0;
	}

	public static int CountVisibleItemTypesInBoardsAndInventories(IPlayer player, IEnumerable<IBoard> mergeBoards, IEnumerable<IBoardInventory> inventories, IEnumerable<int> itemIds)
	{
		return 0;
	}

	public static int CountVisibleItemTypes(IEnumerable<IBoardInventory> inventories, IEnumerable<int> itemTypes)
	{
		return 0;
	}

	public static void RemoveItemsFromBoards(IPlayer player, IEnumerable<MergeBoard> mergeBoards, int[] items, int[] amounts, MetaTime currentTime)
	{
	}

	public static void RemoveItemsFromBoards(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<int>[] items, int[] amounts, MetaTime currentTime)
	{
	}

	public static void AddSpawnAmountToAllItems(IPlayer player, IItemDefinition itemDefinition, int cycles)
	{
	}

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, int item, int amount, MetacoreTime currentTime)
	{
	}

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, int[] items, int[] amounts, MetacoreTime currentTime)
	{
	}

	public static void RemoveItemFromBoardAndInventories(IPlayer player, MergeBoard board, IEnumerable<IBoardInventory> inventories, int itemId, MetacoreTime timestamp)
	{
	}

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IEnumerable<int>[] items, int[] amounts, MetacoreTime currentTime)
	{
	}

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IReadOnlyCollection<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IEnumerable<(IEnumerable<IItemDefinition>, int)> quantities, IComparer<MergeItem> preference, MetacoreTime timestamp)
	{
	}

	public static void DismissBubble(MergeBoard board, PlayerModel player, Coordinate bubbleCoordinate, MergeItem mergeItem)
	{
	}

	public static void OnSpawnItem(PlayerModel playerModel, MergeBoard board, MergeItem spawner, Coordinate spawnerPosition, IEnumerable<MergeBoardAct> boardActs, bool skipEnergyUsage)
	{
	}

	public static bool TryToUseRequirements(IPlayer player, IReadOnlyCollection<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IReadOnlyCollection<(IEnumerable<IItemDefinition>, int)> requirements, IComparer<MergeItem> preference, MetacoreTime currentTime)
	{
		return false;
	}

	public static void SetItemsDiscoveredBasedOnBoardActs(IPlayer player, IEnumerable<MergeBoardAct> boardActs, MergeBoard board, ProgressState progressState)
	{
	}

	public static void SetItemsDiscoveredBasedOnBoardAct(IPlayer player, MergeBoardAct act, MergeBoard board, ProgressState progressState)
	{
	}

	public static void SetRelevantItemsDiscoveredForItemOnBoard(IPlayer player, MergeBoard mergeBoard, IMergeItem itemOnBoard, ProgressState progressState)
	{
	}

	[Obsolete("Use the overload with MetacoreTime instead")]
	public static bool TryToCollectItemFromBoard(MergeBoard mergeBoard, MergeItem itemToCollect, Coordinate collectCoordinate, PlayerModel player, MetaTime currentTime, CurrencySource currencySource, ICollection<MergeBoardAct> collectedActs)
	{
		return false;
	}

	public static bool TryToCollectItemFromBoard(MergeBoard mergeBoard, MergeItem itemToCollect, Coordinate collectCoordinate, PlayerModel player, MetacoreTime currentTime, CurrencySource currencySource, ICollection<MergeBoardAct> collectedActs)
	{
		return false;
	}

	public static void TryToCollectItemFromChestOnBoard(MergeBoard mergeBoard, MergeItem chestItem, IEnumerable<int> itemsToCollect, Coordinate collectCoordinate, PlayerModel player, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs)
	{
	}

	public static void TryToRemoveItemFromBoard(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, MetacoreTime currentTime, ICollection<MergeBoardAct> acts)
	{
	}

	public static void SellItemFromAllInventories(IPlayer player, IItemDefinition itemToSell)
	{
	}

	public static void SellItemsFromBoardInventory(PlayerModel player, MergeBoardId boardId, List<int> itemsToSell)
	{
	}

	public static void SellItemFromPocket(IPlayer player, MergeBoardId mergeBoardId, IItemDefinition itemToSell)
	{
	}

	public static void SellItemsFromPocket(IPlayer player, MergeBoardId mergeBoardId, List<int> itemsToSell)
	{
	}

	public static void TryToSellItemFromBoard(MergeBoard mergeBoard, MergeItem itemToSell, Coordinate sellCoordinate, PlayerModel player, MetacoreTime currentTime, CurrencySource currencySource, ICollection<MergeBoardAct> collectedActs, bool checkTagRestriction)
	{
	}

	public static void TryToSpeedUpItemOnBoard(IPlayer player, IGenerationContext context, MergeBoard mergeBoard, MergeItem itemToSpeedUp, Coordinate speedUpCoordinate, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs)
	{
	}

	public static void TryToSpeedUpItemOnBoard(IPlayer player, IGenerationContext context, MergeBoard mergeBoard, MergeItem itemToSpeedUp, Coordinate speedUpCoordinate, MetacoreTime currentTime, MetacoreDuration duration, ICollection<MergeBoardAct> collectedActs)
	{
	}

	public static void TryToUndoSellItem(PlayerModel player, MergeBoard mergeBoard, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs)
	{
	}

	public static bool TryToMoveItemFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IEnumerable<IBoardInventory> inventories, MetacoreTime currentTime)
	{
		return false;
	}

	public static bool TryToMoveStackItemFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IBoardInventory[] boardInventories, MetacoreTime currentTime)
	{
		return false;
	}

	public static bool CanItemBeMovedFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IEnumerable<IBoardInventory> inventories, MetacoreTime currentTime)
	{
		return false;
	}

	public static bool TryToMoveItemFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IBoardInventory inventory, MetacoreTime currentTime)
	{
		return false;
	}

	public static bool TryToMoveItemFromBoardToRentableInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, BoardInventory inventory, MetacoreTime currentTime)
	{
		return false;
	}

	public static bool CanMoveItemFromInventoryToBoard(IBoardInventory inventory, int itemIndex, MergeBoard board)
	{
		return false;
	}

	public static bool TryToMoveItemFromInventoryToBoard(MergeBoard mergeBoard, IBoardInventory bi, int itemIndex, MetacoreTime timestamp, IGenerationContext generationContext, IPlayer player, bool shouldAddMergeAct = false)
	{
		return false;
	}

	public static bool TryToMakeDirectorControlledItemActivable(MergeBoard board, Coordinate coord, MetacoreTime currentTime, bool isPaused, ICollection<MergeBoardAct> collectedActs, IPlayer player)
	{
		return false;
	}

	public static void CleanupEmptyRentableInventorySlots(PlayerModel player)
	{
	}

	public static bool HasPlayerSeenItem(int item, ProgressState progressState)
	{
		return false;
	}

	public static bool CanHotspotBeVisible(IHotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return false;
	}

	public static HotspotMakeVisibleAttempt CheckIfHotspotCanBeMadeVisible(IHotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return default(HotspotMakeVisibleAttempt);
	}

	public static bool AllAreaUnlockHotspotTeasingRequirementsCompleted(IHotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return false;
	}

	public static bool AllHotspotUnlockingParentsCompleted(IHotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return false;
	}

	public static HotspotMakeHiddenAttempt CheckIfHotspotCanBeHidden(HotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return default(HotspotMakeHiddenAttempt);
	}

	public static HotspotCompletionAttempt CheckIfHotspotCanBeCompleted(HotspotId hotspotId, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IPlayer playerModel)
	{
		return default(HotspotCompletionAttempt);
	}

	public static HotspotCompletionAttempt CheckIfHotspotCanBePartiallyCompleted(HotspotId hotspotId, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IPlayer playerModel)
	{
		return default(HotspotCompletionAttempt);
	}

	public static bool CanUnlockAreaHotspotBeCompleted(IHotspotDefinition hotspotDefinition, IPlayer player)
	{
		return false;
	}

	public static bool UseAreaGlobalRequirements(PlayerModel playerModel)
	{
		return false;
	}

	public static int GetUnlockAreaHotspotLevel(IHotspotDefinition unlockAreaHotspot, IPlayer playerModel)
	{
		return 0;
	}

	public static PlayerLevelRequirement GetUnlockAreaHotspotLevelRequirement(IHotspotDefinition unlockAreaHotspot, IPlayer playerModel)
	{
		return null;
	}

	public static bool CanAreaBeMarkedCompleted(PlayerModel player, AreaId areaId)
	{
		return false;
	}

	public static bool CanAreaBeMarkedCompleted(PlayerModel player, IAreaInfo area)
	{
		return false;
	}

	public static void MarkAreaCompleted(PlayerModel player, IAreaInfo area)
	{
	}

	public static void MarkAreaCompletedAndConsumeRewards(PlayerModel player, IAreaInfo area)
	{
	}

	public static bool TryToCompleteHotspot(HotspotDefinition hotspotDefinition, PlayerModel playerModel, bool giveBonusReward = false)
	{
		return false;
	}

	public static bool TryToForceCompleteHotspot(HotspotDefinition hotspotDefinition, PlayerModel playerModel)
	{
		return false;
	}

	public static void HandleHotspotCompletionBonus(PlayerModel playerModel, HotspotDefinition hotspotDefinition, MetacoreTime currentTime)
	{
	}

	public static (int, int) GetHotspotGroupCompletion(IEnumerable<HotspotDefinition> hotspots, IPlayer playerModel)
	{
		return default((int, int));
	}

	public static bool IsValidHotspotForReEngagement(PlayerModel player, HotspotId hotspotId)
	{
		return false;
	}

	public static List<IAreaInfo> GetUnlockedAreas(IPlayer player, bool allowCompletedAreas = false)
	{
		return null;
	}

	public static bool IsAreaUnlocked(IPlayer player, IAreaInfo area)
	{
		return false;
	}

	public static List<HotspotDefinition> GetMultistepGroupHotspots(MultistepGroupId multistepGroupId, IPlayer playerModel, bool allowOnlyUncompleted = false, bool allowOnlyVisible = false)
	{
		return null;
	}

	public static (int, int) GetMultistepGroupCompletion(MultistepGroupId multistepGroupId, IPlayer playerModel)
	{
		return default((int, int));
	}

	public static bool IsSimultaneousMultistepGroup(MultistepGroupId multistepGroupId, IPlayer playerModel)
	{
		return false;
	}

	public static bool IsSimultaneousMultistepGroup(List<HotspotDefinition> multistepTasks, IPlayer playerModel)
	{
		return false;
	}

	public static HotspotDefinition[] GetSimultaneousMultistepTasksOrderedByProgress(MultistepGroupId multistepGroupId, IPlayer playerModel, bool allowOnlyUncompleted = false, bool allowOnlyVisible = false)
	{
		return null;
	}

	public static HotspotDefinition[] GetSimultaneousMultistepTasksOrderedByProgress(List<HotspotDefinition> multistepTasks, IPlayer player)
	{
		return null;
	}

	public static HotspotDefinition[] GetMultistepGroupHotspotsInOrder(MultistepGroupId multistepGroupId, IPlayer playerModel)
	{
		return null;
	}

	public static bool PassesMultistepVisibilityValidation(IHotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return false;
	}

	public static bool IsFirstUncompletedMultistepHotspot(IHotspotDefinition hotspotDefinition, IPlayer playerModel)
	{
		return false;
	}

	public static float GetMultistepGroupCompletionPercentage(MultistepGroupId multistepGroupId, IPlayer playerModel)
	{
		return 0f;
	}

	public static bool IsMultistepGroupFinalTaskAvailable(MultistepGroupId multistepGroupId, IPlayer playerModel)
	{
		return false;
	}

	public static bool HasNextMultistepTaskInGroup(HotspotId hotspotId, IPlayer playerModel, bool allowOnlyUncompleted = false)
	{
		return false;
	}

	public static bool HasNextMultistepTaskInGroup(HotspotDefinition hotspotDef, IPlayer playerModel, bool allowOnlyUncompleted = false)
	{
		return false;
	}

	public static IHotspotDefinition GetNextMultistepGroupHotspot(IHotspotDefinition currentHotspotDefinition, IPlayer playerModel, bool allowOnlyUncompleted = false)
	{
		return null;
	}

	public static HotspotDefinition GetNextMultistepGroupHotspot(MultistepGroupId multistepGroupId, HotspotId currentHotspotId, IPlayer playerModel, bool allowOnlyUncompleted = false)
	{
		return null;
	}

	public static Option<HotspotDefinition> GetNextSimultaneousMultistepGroupHotspot(MultistepGroupId multistepGroupId, IPlayer playerModel, bool allowOnlyUncompleted = false)
	{
		return default(Option<HotspotDefinition>);
	}

	public static IHotspotDefinition GetPreviousMultistepGroupHotspot(IHotspotDefinition hotspotDef, IPlayer playerModel)
	{
		return null;
	}

	public static bool CanPlayerLevelUp(PlayerModel playerModel)
	{
		return false;
	}

	public static int AvailablePlayerLevelUpsCount(PlayerModel playerModel)
	{
		return 0;
	}

	public static void DoPlayerLevelUp(PlayerModel playerModel)
	{
	}

	public static (CurrencyUsageResult, Currencies, long) TryToFastOpenChest(IPlayer player, MergeItem chest, MetacoreTime currentTime, MergeBoardId boardId)
	{
		return default((CurrencyUsageResult, Currencies, long));
	}

	public static (bool, Currencies, long) TryToBuyExtraInventorySlot(IBoardInventory boardInventory, int inventoryTypeFlag, IPlayer playerModel)
	{
		return default((bool, Currencies, long));
	}

	public static (CurrencyUsageResult, Currencies, long) TryToBuyEnergy(IPlayer playerModel, EnergyItem energyItem, AnalyticsContext context)
	{
		return default((CurrencyUsageResult, Currencies, long));
	}

	public static CurrencySink GetCurrencySinkForEnergyType(EnergyType energyType)
	{
		return default(CurrencySink);
	}

	public static void PauseAllBoardItems(MergeBoard mergeBoard)
	{
	}

	public static void UnpauseAllBoardItems(MergeBoard mergeBoard)
	{
	}

	public static void ExecuteSuccessfulInAppPurchase(PlayerModel player, InAppProductInfo productInfo, string offerId, string transactionId)
	{
	}

	public static bool TryToRollNewDailyTasks(PlayerModel playerModel)
	{
		return false;
	}

	public static void RollNewDailyTasks(PlayerModel playerModel, bool clearOldTasks = false)
	{
	}

	public static void RollPurchasedDailyTasks(PlayerModel playerModel)
	{
	}

	public static void StartNewDailyTasks(List<DailyTaskDefinition> tasks, PlayerModel playerModel, bool clearOldTasks = false)
	{
	}

	public static void InputWantedDailyTaskItem(PlayerModel player, DailyTaskState taskStatus, MergeBoard mainMergeBoard)
	{
	}

	public static void StartNewDailyTasksV2(PlayerModel player, bool logEnabled)
	{
	}

	public static void ResolveDailyTaskV2Step(PlayerModel player, int taskIndex, bool logEnabled, bool hasInfiniteTasks)
	{
	}

	public static bool TryResolveDailyTasksV2Completion(PlayerModel player)
	{
		return false;
	}

	public static void RunDailyTasksV2TaskGeneratorAlgorithm(PlayerModel player, int taskIndex, bool logEnabled, bool isRefresh = false)
	{
	}

	public static bool RefreshDailyTaskV2(PlayerModel player, int taskIndex, bool logEnabled)
	{
		return false;
	}

	public static bool TryStepDailyTaskV2(PlayerModel player, int taskIndex, bool logEnabled)
	{
		return false;
	}

	public static void SkipGameTimeDebug(MetaDuration numMillisecondToSkip, PlayerModel player)
	{
	}

	public static void SkipGameTime(MetaDuration numMillisecondToSkip, PlayerModel player, MergeBoardId boardId)
	{
	}

	public static void PurchaseRentableInventoryBatch(PlayerModel player, RentableInventorySettings settings, int amountToAdd)
	{
	}

	public static void ExpireRentableInventory(PlayerModel player)
	{
	}

	public static void TryToMoveItemsFromRentableInventoryToBoard(PlayerModel player)
	{
	}

	public static bool TryToUnlockProducerInventorySlot(ProducerInventorySlotConfig producerInventorySlot, IPlayer player, bool commit)
	{
		return false;
	}

	public static void CheckSoloMilestoneProgressAndSendAnalytics(PlayerModel player, SoloMilestoneEventModel activeSoloMilestoneEvent, (EnergyType? energyType, int chance, int amount) itemActivationBonusChance, string itemName, string spawnSource, IShopItem mergeItem = null)
	{
	}

	public static void CheckSoloMilestoneProgress(PlayerModel player, SoloMilestoneEventModel activeSoloMilestoneEvent)
	{
	}

	public static void ProcessSoloMilestoneProgressForAnalytics(PlayerModel player, SoloMilestoneEventModel activeEvent, (EnergyType? energyType, int chance, int amount) itemActivationBonusChance, string itemName, string spawnSource, IShopItem mergeItem = null)
	{
	}

	public static void CompletePlayerStep(PlayerModel player, PlayerStep playerStep)
	{
	}

	public static void ClearAllPlayerSteps(PlayerModel player)
	{
	}
}
