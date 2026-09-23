using System;
using System.Collections.Generic;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.TemporaryCardCollection;
using Game.Cloud.Player;
using GameLogic.Banks;
using GameLogic.CardCollection;
using GameLogic.Config;
using GameLogic.Cutscenes;
using GameLogic.Decorations;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Modes;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using GameLogic.Story.SlideShows;
using GameLogic.Story.Videos;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Math;

namespace GameLogic.Player
{
	public interface IPlayerModelClientListener
	{
		event Action UpdateExtraRewards;

		void BoardActTriggered(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs);

		void BoardActTriggered(MergeBoardId boardId, MergeBoardAct boardAct);

		void RunVisualEffect(IVisualEffect visualEffect);

		void TriggerDialogue(StoryDefinitionId dialogueId);

		void TriggerVideo(VideoId videoId);

		void TriggerSlideShow(SlideShowId slideShowId);

		void TriggerCutscene(CutsceneId cutsceneId);

		void ForceCompleteDirectorGroup(DirectorGroupId directorGroupId);

		void OnGarageCleanupEventModelLeveledUp(GarageCleanupEventId eventId);

		void OnGarageCleanupSlotClaimed(GarageCleanupEventId eventId, int rowIndex, int columnIndex);

		void OnGarageCleanupPatternsClaimed(GarageCleanupEventId eventId, List<GarageCleanupPatternInfo> patterns, int lastClaimedRowIndex, int lastClaimedColumnIndex);

		void TriggerPopup(string popupId, List<ISerializableArg> args);

		void FlashSalesRolled();

		void MarkDirectorGroupEnded(DirectorGroupId directorGroupId);

		void ResolveDecorationRewardsDirectorEvents(List<DecorationId> decorationRewards);

		void HideEventHotspot(string eventId);

		void CleanupLayeredDecorationsDirectors(DecorationId decorationId);

		void CleanupDirectorGroup(DirectorGroupId groupId);

		void OnPlayerNameValidationCompleted(string newName, PlayerNameValidationResult result, bool dryRun);

		void TriggerSong(string songAlias);

		void OnAddedBankCurrencyAfterCompleteDailyTask(int addedAmount);

		void OnAddedBankCurrencyAfterCompleteEventTask(int addedAmount);

		void OnAddedBankCurrencyAfterCompleteHotspotMergeGoalTask(int addedAmount, IHotspotDefinition hotspotDefinition, float[] originPosition);

		void OnAddedBankCurrencyAfterMerge(int addedAmount, Coordinate coordinate);

		void OnAddedBankCurrencyAfterSpawnItemUsingEnergy(int addedAmount, Coordinate coordinate);

		void OnConsumedCurrencyBank(CurrencyBankId currencyBankId, long consumedAmount);

		void OnCurrencyBankStartedActivation(CurrencyBankId currencyBankId);

		void OnCurrencyBankFinalizedActivation(CurrencyBankId currencyBankId);

		void OnUpdatedCurrencyBank(CurrencyBankId currencyBankId, bool forceFullRefreshImmediatelyState);

		void OnLeaderboardEventJoined(LeaderboardEventId eventId);

		void OnLeaderboardEventScoreChanged(int scoreChange);

		void OnBoultonLeagueEventDivisionJoined(BoultonLeagueEventId eventId);

		void OnBoultonLeagueEventFinalized(BoultonLeagueEventId eventId);

		void OnBoultonLeagueEventScoreChanged(BoultonLeagueEventId eventId, int amount);

		void OnBubbleBonusGranted(Coordinate sourceCoordinate, IBubbleBonus bonus);

		void ShowTutorialDrag(F32 delay, int itemTypeFrom, int itemTypeTo);

		void ShowTutorialFinger(string targetId);

		void OnMergeItemRewardsClaimed(Coordinate coordinate, IEnumerable<IPlayerReward> rewards);

		void OnFishCaught();

		void OnWeightStarRewardClaimed();

		void OnLevelEventLevelUp(IStringId eventId);

		void OnLevelEventLevelClaimed(IStringId eventId);

		void OnRentableInventoryExpired();

		void OnSideBoardEventLevelClaimed();

		void SetTab(string targetId, int tabIndex);

		void OnMailInboxUpdated();

		void OnSetPlayerModeActive(PlayerModeId playerModeId, bool active);

		void OnSetPlayerModeActive(PlayerModeId playerModeId, MergeBoardId boardId, bool active);

		void OnOffersUpdated();

		void OnShopItemPurchasedAds();

		void SendWebShopAuthTokenRequest(bool redirect, string code = null);

		void OnDailyTaskStatusChanged();

		void OnMysteryMachineHeatLevelUp(MysteryMachineEventId eventId);

		void OnMysteryMachineLevelUp(MysteryMachineEventId eventId);

		void OnGemCut();

		void OnGemWeightRewardClaimed();

		void OnCardCollectionOpenCardPack(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List<(CardCollectionCardId cardId, bool duplicate)>> cardsPerPack);

		void OnCardCollectionOpenWildCard(TemporaryCardCollectionEventModel eventModel, bool isSpecial);

		void OnDebugCardPackSimulationComplete(DebugCardPackOpeningResult result);

		void OnPlayerClaimedGenericRewardFromPocket(List<IPlayerReward> rewards, IRewardContext rewardContext, Action onAnimatedRewardsCompletion);

		void OnShortLeaderboardEventDivisionJoined();

		void OnShortLeaderboardEventScoreChanged(int scoreChange);

		void OnClassicRacesEventDivisionJoined();

		void OnClassicRacesRaceEnded();

		void PollClassicRacesDivisionStatus(ClassicRacesMinigameModel classicRacesMinigameModel);

		void OnEnergyModeEventStatesChanged();

		void OnExtraSpawn(IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Option<List<(Currencies, long)>> spawnCurrenciesOption, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption);

		void OnMetaJourneyRequestFromServer(MetaJourneyPayload metaJourneyPayload);

		void OnCoreSupportEventStartedOrFinalized();

		void OnAutoMergeAvailabilityChanged();

		void OnAutoMergeDurationChanged();

		void OnDebugForceSetActivablePhase(MetaActivableKindId kindId, string activableIdStr, MetaActivableState.DebugPhase? phase);

		void OnEventProcessed<TEvent>(TEvent evt);

		void OnAutoMergeBoosterReceived(MetaDuration durationSeconds);
	}
}
