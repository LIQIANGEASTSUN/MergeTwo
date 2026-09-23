using System;
using System.Collections.Generic;
using External.MoonActive.Data.Storage;
using Framework.Core.Services.Backend.Remote;
using Framework.Core.Signal.Iap;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Tutorials;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Items;
using MergeEngine.Signal.Tutorial;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Signal;
using Merger.Game.Signal.ShopOffers;
using Merger.Game.Views.Popups.Components;
using Merger.LiveOps.Events.ECS.System;
using Merger.LiveOps.Events.Model.Data;
using Merger.Models;
using Merger.PendingRewarders.Collect.Interfaces;
using Merger.PendingRewarders.Data;
using Merger.PendingRewarders.Interfaces;
using Merger.PendingRewarders.Responses;
using Merger.PowerBoost.Models;
using Merger.PowerBoost.Services;
using Merger.PowerBoost.Signals;
using Merger.Services.User;
using Zenject;

namespace Merger.PowerBoost
{
	public class PowerBoostSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostService _powerBoostService;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IRemoteServerStatesService _remoteServerStatesService;

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[Inject]
		[NonSerialized]
		public IPendingRewardCollector _rewardCollector;

		[Inject]
		[NonSerialized]
		public IPendingRewardModel _pendingRewardModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[InjectSystem]
		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		[InjectSystem]
		[NonSerialized]
		public TutorialSystem _tutorialSystem;

		public const int DefaultEnergyCost = 1;

		public const int BasicPowerBoostMode = 2;

		public const string TextColorPowerBoostOnHex = "#83368A";

		public const int DefaultMinLevel = 1;

		public const int MinUnlockedBoostOptions = 2;

		public const string BoostModeUnlockedPopupPersistenceKeyPrefix = "powerboost_modeunlocked";

		public const string BoostModeUnlockedPopupPersistenceValue = "unlocked";

		public const string PowerboostTutorialId = "tutorials_powerboost-tutorial";

		[NonSerialized]
		public BoardInteractionSystem _boardInteractionSystem;

		public int? LowLevelItemBoost;

		[NonSerialized]
		public IEnumerable<int> _availableBoostOptionsByEnergy;

		[NonSerialized]
		public IEnumerable<int> _availableBoostOptionsByLevel;

		[NonSerialized]
		public Dictionary<int, bool> _coreBoostButtonTooltipShown;

		[NonSerialized]
		public Dictionary<int, bool> _eventBoostButtonTooltipShown;

		[NonSerialized]
		public PrefixedPlayerPrefsWrapper _prefixedPlayerPrefsWrapper;

		[NonSerialized]
		public bool _waitingForPopup;

		[NonSerialized]
		public SelectedBoardItem _lastSelectedBoardItem;

		[NonSerialized]
		public bool _shouldProcessNextUnlockAttempt;

		[NonSerialized]
		public bool _resetFlagCore;

		[NonSerialized]
		public bool _resetFlagEvent;

		public LiveOpsEventProgress ActiveBoardEvent => null;

		public PowerBoostMultiModesConfig PowerBoostConfig => null;

		public PowerBoostMultiModesConfig EventPowerBoostConfig => null;

		public string PowerBoostConfigurationName => null;

		public IEnumerable<int> ConfiguredBoostOptions => null;

		public int MinLevelForFeature => 0;

		public int MinLevelForEventFeature => 0;

		public bool IsPowerBoostAvailable => false;

		public bool IsEventPowerBoostAvailable => false;

		public bool IsTutorialStarted => false;

		public bool IsTutorialNeeded => false;

		public bool IsPowerBoostSeen => false;

		public bool MultiModesToggle => false;

		public bool OutOfEnergyReset => false;

		public bool NextGenIndication => false;

		public bool EventNextGenIndication => false;

		public BoardInteractionSystem BoardInteractionSystem => null;

		public int CurrentBoostMode => 0;

		public int MaxEnergyThreshold => 0;

		public bool IsMaxBoostMode => false;

		public IEnumerable<int> AvailableBoostOptionsByEnergy => null;

		public IEnumerable<int> AvailableBoostOptionsByLevel => null;

		public int MaxAvailableBoost => 0;

		public int MaxUnlockableBoost => 0;

		public int MinUnlockableBoostMode => 0;

		public int MaxConfiguredBoost => 0;

		public string CurrentEventId => null;

		public PlayerResourceEnum CurrentModeResourceType => default(PlayerResourceEnum);

		public LiveOpsEventProgress CurrentEvent => null;

		public int CurrentLevel => 0;

		public int CurrentEventLevel => 0;

		public int CurrentEnergy => 0;

		public int EventEnergy => 0;

		public bool IsInBoardEvent => false;

		public Dictionary<int, bool> TooltipShownCollection => null;

		public bool ShouldResetBoosts => false;

		public bool IsMinBoostForMaxClassification()
		{
			return false;
		}

		public void SetLowLevelItemBoost(int? boost)
		{
		}

		public override void OnGameStarted()
		{
		}

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void OnEnergyRefillFromAd(FillEnergyWithAdSignal signal)
		{
		}

		public void OnShopPurchaseCompleted(ShopFlowItemPurchasedSignal signal)
		{
		}

		public void OnPromotionPurchaseCompleted(PurchaseCompletedSignal signal)
		{
		}

		public void OnFreeEnergyRefill(FreeEnergyRefillSuccessSignal signal)
		{
		}

		public void OnOutOfEnergy()
		{
		}

		public void TryResetPowerBoosts(string eventId)
		{
		}

		public bool ShouldShowButton()
		{
			return false;
		}

		public bool IsFeatureAvailable()
		{
			return false;
		}

		public bool IsEventPowerBoostFeatureAvailable()
		{
			return false;
		}

		public BoostModeConfig GetNextBoostModeToUnlock(int boost)
		{
			return null;
		}

		public BoostModeConfig GetConfigForBoost(int boost)
		{
			return null;
		}

		public bool CanUnlockBoost(int boost)
		{
			return false;
		}

		public bool IsBoostUnlockedInBackend(int boost)
		{
			return false;
		}

		public void SaveAlreadyUnlockedBoostModesIfNeeded(int maxBoost)
		{
		}

		public bool ShouldShowUnlockFlow(int unlockableBoost)
		{
			return false;
		}

		public bool ShouldPopupBeOpened(int popupBoost)
		{
			return false;
		}

		public int GetMinLevelForFeature(PowerBoostMultiModesConfig powerBoostModesConfig)
		{
			return 0;
		}

		public IEnumerable<int> GetConfiguredBoostOptions(PowerBoostMultiModesConfig powerBoostMultiModesConfig)
		{
			return null;
		}

		public IEnumerable<int> GetAvailableBoostOptionsByEnergy(PowerBoostMultiModesConfig powerBoostConfig, int currentLevel, int currentEnergy, bool isNextGen, int minUnlockableBoost, string eventId = null)
		{
			return null;
		}

		public IEnumerable<int> GetAvailableBoostOptionsByLevel(PowerBoostMultiModesConfig powerBoostConfig, int currentLevel)
		{
			return null;
		}

		public IEnumerable<BoostModeConfig> GetAvailableBoostConfigByLevel(PowerBoostMultiModesConfig powerBoostMultiModesConfig, int currentLevel)
		{
			return null;
		}

		public int GetMaxThresholdFromBoost()
		{
			return 0;
		}

		public int GetCurrentBoostMode()
		{
			return 0;
		}

		public string GetConfigurationName()
		{
			return null;
		}

		public bool IsMergeItemBoostable(IMergeItem mergeItem)
		{
			return false;
		}

		public bool IsPowerBoostActive()
		{
			return false;
		}

		public void OnTutorialUIElementShown(TutorialUIElementShownSignal signal)
		{
		}

		public void OnTutorialUIElementDisabled(TutorialUIElementDisabledSignal signal)
		{
		}

		public void OnTutorialCompleted(TutorialCompletedSignal signal)
		{
		}

		public void InitConfig()
		{
		}

		public void OnEventStarted()
		{
		}

		public void CheckMissingBoostMode()
		{
		}

		public bool CheckUnavailableCoreBoostMode()
		{
			return false;
		}

		public void CheckMissingCoreBoost()
		{
		}

		public bool CheckUnavailableEventBoost()
		{
			return false;
		}

		public void CheckMissingEventBoost()
		{
		}

		public void ResetCorePowerBoost()
		{
		}

		public void OnConfigUpdated()
		{
		}

		public void UpdateLiveOps()
		{
		}

		public void OnBoardLiveOpEntered()
		{
		}

		public void OnEnergyUpdated(int newEnergy)
		{
		}

		public void UpdateAvailableBoosts()
		{
		}

		public void ProcessLevelUp(int amount = 0)
		{
		}

		public void UpdateAvailableBoostsByLevel(int amount = 0)
		{
		}

		public void UpdateAvailableBoostsByEnergy(int amount = 0)
		{
		}

		public void UpdateEventPowerBoost()
		{
		}

		public void ResetEventPowerBoost()
		{
		}

		public void UpdateCorePowerBoost()
		{
		}

		public bool IsLevelRequirementMet()
		{
			return false;
		}

		public bool IsEventLevelRequirementMet()
		{
			return false;
		}

		public int GetBoostMode(int defaultValue, IMergeItem selectedItem = null)
		{
			return 0;
		}

		public void PowerBoostButtonClicked()
		{
		}

		public void UpdateCorePowerBoostMode()
		{
		}

		public void SetCurrentCoreBoost(int nextBoostMode, bool shouldDeselect = true)
		{
		}

		public void UpdateEventPowerBoostMode()
		{
		}

		public void SetCurrentEventBoost(int nextBoostMode, bool shouldDeselect = true)
		{
		}

		public int GetNextBoostMode()
		{
			return 0;
		}

		public bool WasButtonTooltipShown(int boost)
		{
			return false;
		}

		public bool CheckTooltipShown(int boost, Dictionary<int, bool> collection)
		{
			return false;
		}

		public void OnButtonTooltipShown(int boost)
		{
		}

		public void UpdateTooltipCollection(Dictionary<int, bool> collection, int boost)
		{
		}

		public void ResetTooltipCollection(Dictionary<int, bool> collection)
		{
		}

		public bool WasUnlockPopupShown(int boost)
		{
			return false;
		}

		public void OnItemSelected(BoardItemSelectedSignal signal)
		{
		}

		public void OnItemProduced(ProducerSpawnedItemSignal signal)
		{
		}

		public bool IsPowerBoostedProducerSelected()
		{
			return false;
		}

		public void ShowBoostModeUnlockedPopupIfNeeded()
		{
		}

		public void OnStartedClaimingNewBoostMode(PowerBoostStartedClaimOfNewBoostModeSignal signal)
		{
		}

		public void OnUnlockRewardClaimed(int unlockedBoost, string currentEventId)
		{
		}

		public void TryToSilentClaimPendingReward(Action onComplete = null)
		{
		}

		public void SilentClaimReward(string rewardId, Action onComplete = null)
		{
		}

		public void ClaimReward(string rewardId, RewardPositionsMap rewardPositionsMap, Action<bool> completion)
		{
		}

		public void ReportFailedRewardCollection(string rewardId, Exception exception)
		{
		}

		public void CollectedClaimedReward(RewardPositionsMap rewardPositionsMap, CollectRewardsResponse collectRewardsResponse)
		{
		}

		public PendingReward GetPendingRewardForPowerBoost()
		{
			return null;
		}

		public bool IsBoostLocallyUnlocked(int boostMode, string eventId)
		{
			return false;
		}

		public void SaveAndUpdateBoostMode(int boostMode, string eventId)
		{
		}

		public string GetBoostModeKey(int boostMode, string eventId)
		{
			return null;
		}

		public void DeletePowerBoostForEvent()
		{
		}

		public void UnlockNewPowerBoostModeIfNeeded()
		{
		}

		public bool ShouldShowTooltip(int tooltipBoost)
		{
			return false;
		}

		public bool TooltipThresholdRequirementMet(int tooltipBoost)
		{
			return false;
		}

		public bool TooltipBoostLevelRequirementMet(int tooltipBoost)
		{
			return false;
		}

		public bool TooltipNoveltyRequirementMet(int tooltipBoost)
		{
			return false;
		}

		public void TryRecalculatePowerBoostAfterOOE()
		{
		}
	}
}
