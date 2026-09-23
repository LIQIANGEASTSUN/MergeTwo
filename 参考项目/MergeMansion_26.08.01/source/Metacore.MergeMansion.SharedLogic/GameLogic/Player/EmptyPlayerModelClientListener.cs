using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
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
	public class EmptyPlayerModelClientListener : IPlayerModelClientListener
	{
		public static readonly EmptyPlayerModelClientListener Instance;

		public event Action UpdateExtraRewards
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void BoardActTriggered(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs)
		{
		}

		public void BoardActTriggered(MergeBoardId boardId, MergeBoardAct boardAct)
		{
		}

		public void RunVisualEffect(IVisualEffect visualEffect)
		{
		}

		public void TriggerDialogue(StoryDefinitionId dialogueId)
		{
		}

		public void TriggerVideo(VideoId videoId)
		{
		}

		public void TriggerSlideShow(SlideShowId slideShowId)
		{
		}

		public void TriggerCutscene(CutsceneId cutsceneId)
		{
		}

		public void ForceCompleteDirectorGroup(DirectorGroupId directorGroupId)
		{
		}

		public void OnGarageCleanupPatternsClaimed(GarageCleanupEventId eventId, List<GarageCleanupPatternInfo> patterns, int lastClaimedRowIndex, int lastClaimedColumnIndex)
		{
		}

		public void OnGarageCleanupEventModelLeveledUp(GarageCleanupEventId eventId)
		{
		}

		public void OnGarageCleanupSlotClaimed(GarageCleanupEventId eventId, int rowIndex, int columnIndex)
		{
		}

		public void TriggerPopup(string popupId, List<ISerializableArg> args)
		{
		}

		public void FlashSalesRolled()
		{
		}

		public void MarkDirectorGroupEnded(DirectorGroupId directorGroupId)
		{
		}

		public void ResolveDecorationRewardsDirectorEvents(List<DecorationId> decorationRewards)
		{
		}

		public void CleanupLayeredDecorationsDirectors(DecorationId decorationId)
		{
		}

		public void CleanupDirectorGroup(DirectorGroupId groupId)
		{
		}

		public void HideEventHotspot(string eventId)
		{
		}

		public void OnPlayerNameValidationCompleted(string newName, PlayerNameValidationResult result, bool dryRun)
		{
		}

		public void TriggerSong(string songAlias)
		{
		}

		public void OnAddedBankCurrencyAfterCompleteDailyTask(int addedAmount)
		{
		}

		public void OnAddedBankCurrencyAfterCompleteEventTask(int addedAmount)
		{
		}

		public void OnAddedBankCurrencyAfterCompleteHotspotMergeGoalTask(int addedAmount, IHotspotDefinition hotspotDefinition, float[] originPosition)
		{
		}

		public void OnAddedBankCurrencyAfterMerge(int addedAmount, Coordinate coordinate)
		{
		}

		public void OnAddedBankCurrencyAfterSpawnItemUsingEnergy(int addedAmount, Coordinate coordinate)
		{
		}

		public void OnConsumedCurrencyBank(CurrencyBankId currencyBankId, long consumedAmount)
		{
		}

		public void OnCurrencyBankStartedActivation(CurrencyBankId currencyBankId)
		{
		}

		public void OnCurrencyBankFinalizedActivation(CurrencyBankId currencyBankId)
		{
		}

		public void OnUpdatedCurrencyBank(CurrencyBankId currencyBankId, bool forceFullRefreshImmediatelyState)
		{
		}

		public void OnLeaderboardEventJoined(LeaderboardEventId eventId)
		{
		}

		public void OnLeaderboardEventScoreChanged(int scoreChange)
		{
		}

		public void OnBoultonLeagueEventDivisionJoined(BoultonLeagueEventId eventId)
		{
		}

		public void OnBoultonLeagueEventFinalized(BoultonLeagueEventId eventId)
		{
		}

		public void OnBoultonLeagueEventScoreChanged(BoultonLeagueEventId eventId, int amount)
		{
		}

		public void OnBubbleBonusGranted(Coordinate sourceCoordinate, IBubbleBonus bonus)
		{
		}

		public void ShowTutorialDrag(F32 delay, int itemTypeFrom, int itemTypeTo)
		{
		}

		public void ShowTutorialFinger(string targetId)
		{
		}

		public void OnMergeItemRewardsClaimed(Coordinate coordinate, IEnumerable<IPlayerReward> rewards)
		{
		}

		public void OnFishCaught()
		{
		}

		public void OnWeightStarRewardClaimed()
		{
		}

		public void OnLevelEventLevelUp(IStringId eventId)
		{
		}

		public void OnLevelEventLevelClaimed(IStringId eventId)
		{
		}

		public void OnSideBoardEventLevelClaimed()
		{
		}

		public void OnRentableInventoryExpired()
		{
		}

		public void SetTab(string targetId, int tabIndex)
		{
		}

		public void OnMailInboxUpdated()
		{
		}

		public void OnSetPlayerModeActive(PlayerModeId playerModeId, bool active)
		{
		}

		public void OnSetPlayerModeActive(PlayerModeId playerModeId, MergeBoardId boardId, bool active)
		{
		}

		public void OnAdReceived(bool isAdReceived)
		{
		}

		public void OnAdRewarded(string adRewardId)
		{
		}

		public void OnOffersUpdated()
		{
		}

		public void OnShopItemPurchasedAds()
		{
		}

		public void SendWebShopAuthTokenRequest(bool redirect, string code = null)
		{
		}

		public void OnMysteryMachineItemActivated(MysteryMachineEventId eventId, int containerItemIndex, IMysteryMachineItem item)
		{
		}

		public void OnMysteryMachineItemsSpawnedIntoContainer(MysteryMachineEventId eventId, int spawnedItemCount)
		{
		}

		public void OnMysteryMachineHeatLevelUp(MysteryMachineEventId eventId)
		{
		}

		public void OnMysteryMachineLevelUp(MysteryMachineEventId eventId)
		{
		}

		public void OnCardCollectionOpenCardPack(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List<(CardCollectionCardId cardId, bool duplicate)>> cardsPerPack)
		{
		}

		public void OnCardCollectionOpenWildCard(TemporaryCardCollectionEventModel eventModel, bool isSpecial)
		{
		}

		public void OnDebugCardPackSimulationComplete(DebugCardPackOpeningResult result)
		{
		}

		public void OnPlayerClaimedGenericRewardFromPocket(List<IPlayerReward> rewards, IRewardContext rewardContext, Action onAnimatedRewardsCompletion)
		{
		}

		public void OnDailyTaskStatusChanged()
		{
		}

		public void OnGemCut()
		{
		}

		public void OnGemWeightRewardClaimed()
		{
		}

		public void OnShortLeaderboardEventDivisionJoined()
		{
		}

		public void OnShortLeaderboardEventScoreChanged(int scoreChange)
		{
		}

		public void OnEnergyModeEventStatesChanged()
		{
		}

		public void OnClassicRacesEventDivisionJoined()
		{
		}

		public void OnClassicRacesRaceEnded()
		{
		}

		public void PollClassicRacesDivisionStatus(ClassicRacesMinigameModel classicRacesMinigameModel)
		{
		}

		public void OnExtraSpawn(IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Option<List<(Currencies, long)>> spawnCurrenciesOption, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption)
		{
		}

		public void OnMetaJourneyRequestFromServer(MetaJourneyPayload metaJourneyPayload)
		{
		}

		public void OnCoreSupportEventStartedOrFinalized()
		{
		}

		public void OnAutoMergeAvailabilityChanged()
		{
		}

		public void OnAutoMergeDurationChanged()
		{
		}

		public void OnDebugForceSetActivablePhase(MetaActivableKindId kindId, string activableIdStr, MetaActivableState.DebugPhase? phase)
		{
		}

		public void OnEventProcessed<TEvent>(TEvent evt)
		{
		}

		public void OnAutoMergeBoosterReceived(MetaDuration durationSeconds)
		{
		}
	}
}
