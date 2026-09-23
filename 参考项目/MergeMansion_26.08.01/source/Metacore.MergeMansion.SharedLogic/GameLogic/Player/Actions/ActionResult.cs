using System;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions
{
	public static class ActionResult
	{
		public static readonly MetaActionResult Success;

		public static readonly MetaActionResult InvalidDirectorEventId;

		public static readonly MetaActionResult NotEnoughResources;

		public static readonly MetaActionResult AlreadyUnlocked;

		public static readonly MetaActionResult InvalidCoordinate;

		public static readonly MetaActionResult LevelUpNotPossible;

		public static readonly MetaActionResult CoordinateDoesNotContainItem;

		public static readonly MetaActionResult CoordinateDoesNotContainWantedItem;

		public static readonly MetaActionResult InvalidMergeBoardId;

		public static readonly MetaActionResult InvalidMergeBoardInventoryId;

		public static readonly MetaActionResult NoHotspotDefinition;

		public static readonly MetaActionResult InvalidHotspot;

		public static readonly MetaActionResult ItemCantBeActivated;

		public static readonly MetaActionResult InvalidCurrentTime;

		public static readonly MetaActionResult InvalidEpochDay;

		public static readonly MetaActionResult CannotPausePausedTimer;

		public static readonly MetaActionResult CannotUnpauseUnpausedTimer;

		public static readonly MetaActionResult ShopItemsRollNotDue;

		public static readonly MetaActionResult StoreSetupOfferNotDue;

		public static readonly MetaActionResult ShopItemNotCurrentlyBeingSold;

		public static readonly MetaActionResult ShopItemNotInShopItemFinder;

		public static readonly MetaActionResult NotEnoughCurrency;

		public static readonly MetaActionResult TryingToUseNegativeCurrency;

		public static readonly MetaActionResult PocketHasNoItems;

		public static readonly MetaActionResult PocketItemsExceeded;

		public static readonly MetaActionResult CodeAlreadyUsed;

		public static readonly MetaActionResult NoFreeSpaceInInventory;

		public static readonly MetaActionResult InventoryDoesNotHaveItem;

		public static readonly MetaActionResult CannotMoveItemFromBoardToInventory;

		public static readonly MetaActionResult CannotMoveItemFromInventoryToBoard;

		public static readonly MetaActionResult CannotBuyInventorySlot;

		public static readonly MetaActionResult CannotUnlockProducerInventorySlot;

		public static readonly MetaActionResult CannotBuyEnergy;

		public static readonly MetaActionResult NoFreeSpaceOnBoard;

		public static readonly MetaActionResult WouldNotBeValidMerge;

		public static readonly MetaActionResult WouldNotBeValidMove;

		public static readonly MetaActionResult WouldNotBeValidSwap;

		public static readonly MetaActionResult WouldNotBeValidChestOpen;

		public static readonly MetaActionResult WouldNotBeValidChestFastOpen;

		public static readonly MetaActionResult WouldNotBeValidSinkIn;

		public static readonly MetaActionResult WouldNotBeValidConsumeIn;

		public static readonly MetaActionResult InvalidConversionStates;

		public static readonly MetaActionResult AlreadyAcceptedTOS;

		public static readonly MetaActionResult NothingToMakeClaimable;

		public static readonly MetaActionResult EventAlreadyOnGoing;

		public static readonly MetaActionResult EventDefinitionMissing;

		public static readonly MetaActionResult EventNotGoing;

		public static readonly MetaActionResult EventNotInCollectionMode;

		public static readonly MetaActionResult EventProgressDefinitionMissing;

		public static readonly MetaActionResult SocialRewardAlreadyClaimed;

		public static readonly MetaActionResult SocialRewardNoRewards;

		public static readonly MetaActionResult NoChangeToGameSettings;

		public static readonly MetaActionResult ShopOfferNotActive;

		public static readonly MetaActionResult ShopOfferNoPurchasesToClear;

		public static readonly MetaActionResult DailyTaskStillActive;

		public static readonly MetaActionResult DailyTaskInvalidSlotIndex;

		public static readonly MetaActionResult DailyTaskInputFailed;

		public static readonly MetaActionResult DailyTaskNotReadyForTotalComplete;

		public static readonly MetaActionResult DailyTaskAlreadyTotalCompleted;

		public static readonly MetaActionResult DailyTasksV2AlreadyCompleted;

		public static readonly MetaActionResult DailyTasksV2AlreadyRegistered;

		public static readonly MetaActionResult DailyTasksV2InvalidIndex;

		public static readonly MetaActionResult DailyTasksV2MissingRequirementItem;

		public static readonly MetaActionResult DailyTasksV2NotAvailable;

		public static readonly MetaActionResult DailyTasksV2StillActive;

		public static readonly MetaActionResult DailyTasksV2RefreshDisabled;

		public static readonly MetaActionResult MissingSocialAuthenticationReward;

		public static readonly MetaActionResult SocialAuthenticationRewardNotSet;

		public static readonly MetaActionResult SurveyRewardAlreadyClaimed;

		public static readonly MetaActionResult SurveyRewardNoRewards;

		public static readonly MetaActionResult SurveyResultAlreadyAdded;

		public static readonly MetaActionResult NegativeDecorationSlot;

		public static readonly MetaActionResult PlayerDoesNotOwnDecoration;

		public static readonly MetaActionResult ItemRequirementsNotMetFromMergeBoards;

		public static readonly MetaActionResult EventNotFound;

		public static readonly MetaActionResult ProgressionTrackNotFound;

		public static readonly MetaActionResult EventTaskIdNotFound;

		public static readonly MetaActionResult EventLevelNotFound;

		public static readonly MetaActionResult EventAttemptRollbackPoints;

		public static readonly MetaActionResult EventOfferNotFound;

		public static readonly MetaActionResult EventIsNotActive;

		public static readonly MetaActionResult UnableToAffordPrice;

		public static readonly MetaActionResult EventLevelNotReached;

		public static readonly MetaActionResult EventLevelCurrentMismatch;

		public static readonly MetaActionResult EventUnableToResolve;

		public static readonly MetaActionResult EventOfferSetNotFound;

		public static readonly MetaActionResult EventOfferSetNotCompleted;

		public static readonly MetaActionResult EventOfferSetAlreadyClaimed;

		public static readonly MetaActionResult PlayerDoesNotHavePrecursorEventOfferSet;

		public static readonly MetaActionResult EventOfferAlreadyConsumed;

		public static readonly MetaActionResult EventIsActive;

		public static readonly MetaActionResult UnableToFinalizeEvent;

		public static readonly MetaActionResult EventCannotBeStarted;

		public static readonly MetaActionResult EventCannotBeExtended;

		public static readonly MetaActionResult EventExtensionBeyondSafetyMargin;

		public static readonly MetaActionResult ScriptedEventNotFound;

		public static readonly MetaActionResult ItemNotDiscovered;

		public static readonly MetaActionResult DiscoveryRewardAlreadyClaimed;

		public static readonly MetaActionResult DiscoveryRewardNotSet;

		public static readonly MetaActionResult InvalidItemType;

		public static readonly MetaActionResult InvalidMergeChainId;

		public static readonly MetaActionResult ThirdPartySurveyNotStarted;

		public static readonly MetaActionResult ThirdPartySurveyAlreadyStarted;

		public static readonly MetaActionResult ThirdPartySurveyAlreadyCompleted;

		public static readonly MetaActionResult BankFull;

		public static readonly MetaActionResult GameFeatureDisabled;

		public static readonly MetaActionResult GarageCleanupLevelAlreadyStarted;

		public static readonly MetaActionResult GarageCleanupLevelNotStarted;

		public static readonly MetaActionResult GarageCleanupInvalidLevel;

		public static readonly MetaActionResult GarageCleanupBoardNotFilled;

		public static readonly MetaActionResult GarageCleanupInvalidSlotCoordinate;

		public static readonly MetaActionResult GarageCleanupSlotAlreadyFilled;

		public static readonly MetaActionResult GarageCleanupItemRequirementNotMet;

		public static readonly MetaActionResult GarageCleanupSpawnerItemAlreadyClaimed;

		public static readonly MetaActionResult GarageCleanupLevelAlreadyBought;

		public static readonly MetaActionResult AreaNotFound;

		public static readonly MetaActionResult AreaNotCompletable;

		public static readonly MetaActionResult TeasedAreaAlreadyNoted;

		public static readonly MetaActionResult ProgressionEventModelMissing;

		public static readonly MetaActionResult ProgressionEventPremiumIAPNotAllowed;

		public static readonly MetaActionResult ProgressionEventPremiumIAPMissing;

		public static readonly MetaActionResult ProgressionEventRewardNotClaimable;

		public static readonly MetaActionResult ProgressionEventNotValidForEndDialogue;

		public static readonly MetaActionResult ProgressionEventExtraInventoryNotValidForRemove;

		public static readonly MetaActionResult FeatureNotAvailable;

		public static readonly MetaActionResult AmountExceeded;

		public static readonly MetaActionResult RequirementsNotMet;

		public static readonly MetaActionResult CurrencyBankNotPurchaseable;

		public static readonly MetaActionResult CollectibleBoardEventPortalItemAlreadyGiven;

		public static readonly MetaActionResult CollectibleBoardEventLevelNotClaimable;

		public static readonly MetaActionResult CollectibleBoardEventNotValidForEndDialogue;

		public static readonly MetaActionResult BoardEventNotValidForEnterBoardDialogue;

		public static readonly MetaActionResult PlayerNameNotSet;

		public static readonly MetaActionResult LeaderboardEventLevelNotClaimable;

		public static readonly MetaActionResult LeaderboardEventRankingRewardsNotClaimable;

		public static readonly MetaActionResult PlayerBannedFromLeaderboards;

		public static readonly MetaActionResult LeaderboardEventNotValidForEndDialogue;

		public static readonly MetaActionResult LeaderboardEventAlreadySetup;

		public static readonly MetaActionResult LeaderboardEventAlreadyJoined;

		public static readonly MetaActionResult BoardEventPortalItemAlreadyGiven;

		public static readonly MetaActionResult SideBoardEventPortalItemAlreadyGiven;

		public static readonly MetaActionResult SideBoardEventLevelNotClaimable;

		public static readonly MetaActionResult CannotSellItemFromBoard;

		public static readonly MetaActionResult PhotoOfItemAlreadyTaken;

		public static readonly MetaActionResult UnclaimedWorldRecordFishRewardNotFound;

		public static readonly MetaActionResult WeightStarRewardAlreadyClaimed;

		public static readonly MetaActionResult WeightStarWeightNotReached;

		public static readonly MetaActionResult NoSeasonDefinition;

		public static readonly MetaActionResult CyclesAlreadyFull;

		public static readonly MetaActionResult RentableInventoryIsNull;

		public static readonly MetaActionResult RentableInventoryMaximumBought;

		public static readonly MetaActionResult RentableInventorySettingsNull;

		public static readonly MetaActionResult SongAlreadyUnlocked;

		public static readonly MetaActionResult InvalidSideBoardEventCharacter;

		public static readonly MetaActionResult NoSideBoardEventCharacterToNote;

		public static readonly MetaActionResult IncorrectSideBoardEventCharacterToNote;

		public static readonly MetaActionResult InvalidDecorationShopItemId;

		public static readonly MetaActionResult InvalidDecorationShopItemCostIndex;

		public static readonly MetaActionResult InvalidPlayerMode;

		public static readonly MetaActionResult InfiniteEnergyBlocksPlayerMode;

		public static readonly MetaActionResult LevelEventLevelNotClaimable;

		public static readonly MetaActionResult CollectableCannotBeCollected;

		public static readonly MetaActionResult AdWatchNotSuccessful;

		public static readonly MetaActionResult InvalidPetId;

		public static readonly MetaActionResult PlayerDoesNotOwnPet;

		public static readonly MetaActionResult WebShopPurchaseAlreadyExists;

		public static readonly MetaActionResult InvalidWebShopPurchaseId;

		public static readonly MetaActionResult InvalidOfferGroupForActivation;

		public static readonly MetaActionResult MysteryMachineEventBoardAlreadySetup;

		public static readonly MetaActionResult InvalidMysteryMachine;

		public static readonly MetaActionResult MysteryMachineContainerFull;

		public static readonly MetaActionResult MysteryMachineOverheat;

		public static readonly MetaActionResult MysteryMachineHasMerges;

		public static readonly MetaActionResult MysteryMachineHasNoMerges;

		public static readonly MetaActionResult MysteryMachineNoCameraTargets;

		public static readonly MetaActionResult MysteryMachinePreparationError;

		public static readonly MetaActionResult MysteryMachineCannotClaimAllTasksCompletedReward;

		public static readonly MetaActionResult MysteryMachineSpecialSaleMaxPurchaseCountReached;

		public static readonly MetaActionResult MysteryMachineSpawnItemsQueueEmpty;

		public static readonly MetaActionResult MysteryMachineSpawnItemsQueueNotEmpty;

		public static readonly MetaActionResult AdsAlreadySet;

		public static readonly MetaActionResult AdvertisementPlacementIdDoesntMatch;

		public static readonly MetaActionResult BoultonLeagueEventDivisionAlreadyJoined;

		public static readonly MetaActionResult BoultonLeagueEventLeaderboardPlacementRewardsNotClaimable;

		public static readonly MetaActionResult BoultonLeagueEventPlayerBanned;

		public static readonly MetaActionResult BoultonLeagueEventStageMissing;

		public static readonly MetaActionResult MakeYourOwnOfferItemsNotSelected;

		public static readonly MetaActionResult ScriptedEventCannotBeStarted;

		public static readonly MetaActionResult MysteryMachineEventNotUsingLeaderboard;

		public static readonly MetaActionResult NoMysteryMachineLeaderboardRewardsToClaim;

		public static readonly MetaActionResult MysteryMachineLeaderboardPositionAlreadySet;

		public static readonly MetaActionResult MysteryMachineLeaderboardScoreOutOfRange;

		public static readonly MetaActionResult NoAdRewardToClaim;

		public static readonly MetaActionResult AdRewardActionFailed;

		public static readonly MetaActionResult AdvertisementPlacementNotFound;

		public static readonly MetaActionResult CannotForceResetFlashSale;

		public static readonly MetaActionResult MissingEnergyType;

		public static readonly MetaActionResult CannotBuyEvidenceBox;

		public static readonly MetaActionResult CannotCraftCard;

		public static readonly MetaActionResult CannotGetSkipTimePriceForEvidenceBox;

		public static readonly MetaActionResult NoResetNeeded;

		public static readonly MetaActionResult RewardAlreadyClaimed;

		public static readonly MetaActionResult MinigameNotFound;

		public static readonly MetaActionResult ShortLeaderboardEventLevelNotClaimable;

		public static readonly MetaActionResult CannotAcknowledgeShortLeaderboardEventStageEnded;

		public static readonly MetaActionResult CannotTriggerShortLeaderboardEventEndDialogue;

		public static readonly MetaActionResult CannotRequestJoinShortLeaderboardEventStage;

		public static readonly MetaActionResult CannotStartShortLeaderboardEventStage;

		public static readonly MetaActionResult CannotReplayShortLeaderboardEventStage;

		public static readonly MetaActionResult CannotClaimShortLeaderboardEventFinalReward;

		public static readonly MetaActionResult CannotMarkShortLeaderboardEventStageCompletionDialogueTriggered;

		public static readonly MetaActionResult CannotClaimShortLeaderboardEventStageCompletionRewards;

		public static readonly MetaActionResult CannotClaimShortLeaderboardEventStageStars;

		public static readonly MetaActionResult CannotEndShortLeaderboardEventStage;

		public static readonly MetaActionResult NoAvailableMuseumSlotForItem;

		public static readonly MetaActionResult AlreadyHasMuseumCollection;

		public static readonly MetaActionResult UnconfiguredMuseumShelf;

		public static readonly MetaActionResult MuseumCollectionNotFound;

		public static readonly MetaActionResult MuseumShelfNotFound;

		public static readonly MetaActionResult CannotRequestJoinClassicRacesEventStage;

		public static readonly MetaActionResult CannotReplayClassicRacesEventStage;

		public static readonly MetaActionResult CannotStartClassicRacesEventStage;

		public static readonly MetaActionResult CannotEndClassicRacesEventStage;

		public static readonly MetaActionResult CannotFinalizeClassicRacesEventStage;

		public static readonly MetaActionResult ClassicRacesEventIntroAlreadyFinished;

		public static readonly MetaActionResult ClassicRacesEventRaceLostDialogAlreadyFinished;

		public static readonly MetaActionResult ClassicRacesEventRaceWonDialogAlreadyFinished;

		public static readonly MetaActionResult InsufficientLevelToChangeTheBoard;

		public static readonly MetaActionResult InsufficientLettersToChangeTheBoard;

		[Obsolete("Task Group were removed")]
		public static readonly MetaActionResult TaskListNotFound;

		[Obsolete("Task Group were removed")]
		public static readonly MetaActionResult TaskListNotActive;

		[Obsolete("Task Group were removed")]
		public static readonly MetaActionResult TaskListNotActivatable;

		[Obsolete("Task Group were removed")]
		public static readonly MetaActionResult TaskListNotDeactivatable;

		[Obsolete("Task Group were removed")]
		public static readonly MetaActionResult TaskListHasNotEnoughEmptySlots;

		public static readonly MetaActionResult CannotGiveCoreSupportEventPortalItem;

		public static readonly MetaActionResult CannotInitCoreSupportEventMinigame;

		public static readonly MetaActionResult CannotClaimCoreSupportEventMinigameReward;

		public static readonly MetaActionResult InvalidRecipe;

		public static readonly MetaActionResult NotEnoughIngredients;

		public static readonly MetaActionResult NoSuchShelf;

		public static readonly MetaActionResult ShelfItemAlreadySeen;

		public static readonly MetaActionResult IneligibleToClaimReward;

		public static readonly MetaActionResult DigEventTileAlreadyRevealed;

		public static readonly MetaActionResult AreaNotUnlockable;

		public static readonly MetaActionResult UnlockableAreaAlreadyNoted;

		public static readonly MetaActionResult NoPendingOnFire;

		public static readonly MetaActionResult StatsObjectiveRequirementNotMet;

		public static readonly MetaActionResult StatsObjectiveLocked;

		public static readonly MetaActionResult StatsObjectiveAlreadyCompleted;

		public static readonly MetaActionResult NoRewardToClaim;

		public static readonly MetaActionResult NotEnoughWildItems;

		public static readonly MetaActionResult CouldntUseEnegy;

		public static readonly MetaActionResult ItemIsNotRequiredInAnyActiveTask;

		public static readonly MetaActionResult MergeBoardAlreadyExists;
	}
}
