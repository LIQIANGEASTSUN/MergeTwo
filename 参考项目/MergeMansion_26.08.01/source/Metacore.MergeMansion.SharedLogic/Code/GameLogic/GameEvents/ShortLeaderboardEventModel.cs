using System.Collections.Generic;
using GameLogic.Config.Costs;
using GameLogic.Config.Types;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(19)]
	public class ShortLeaderboardEventModel : MetaActivableState<ShortLeaderboardEventId, ShortLeaderboardEventInfo>, IBoardEventModel, IGroupIdGetter, IPointsEvent, ILeaderboardEventModel
	{
		[MetaSerializable]
		public struct StageData
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public ShortLeaderboardEventStageId StageId;

			[MetaMember(2, MetaMemberFlags.None)]
			public PlayerShortLeaderboardEventStageState State;

			public StageData(ShortLeaderboardEventStageId stageId, PlayerShortLeaderboardEventStageState state)
			{
				StageId = null;
				State = null;
			}

			public bool IsValid()
			{
				return false;
			}
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public sealed override ShortLeaderboardEventId ActivableId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public byte BoolFields { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaTime StartTime { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public StageData CurrentStage { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<StageData> OtherStages { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public MergeBoard IntroMergeBoard { get; set; }

		public bool StartNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool EndNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool EndDialogueTriggered
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool FinalRewardClaimed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool InfoPopupTriggered
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool IntroFinished
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool RequestExtension
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public IBoardEventInfo BoardEventInfo => null;

		public List<IBoardItem> PocketItems => null;

		public MergeBoard MergeBoard => null;

		public int EnterMergeBoardCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public bool EnterBoardDialogueTriggered
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public OfferPlacementId BoardShopPlacementId => null;

		public OfferPlacementId BoardShopFlashPlacementId => null;

		public Option<ShortLeaderboardEventStageId> StageId => default(Option<ShortLeaderboardEventStageId>);

		public bool PortalItemGiven => false;

		public IStringId Id => null;

		Activation? IBoardEventModel.LatestActivation => null;

		public int GetStageNumber()
		{
			return 0;
		}

		public int GetPoints(IPlayer player)
		{
			return 0;
		}

		public ShortLeaderboardEventModel()
		{
		}

		public ShortLeaderboardEventModel(ShortLeaderboardEventInfo info)
		{
		}

		public MergeBoardId GetBoardIdentifier()
		{
			return null;
		}

		public void CheckCanBeResolved(PlayerModel player)
		{
		}

		public bool CanExtend(IPlayerModelBase playerModel)
		{
			return false;
		}

		public Option<EventGroupId> GetGroupIdOption()
		{
			return default(Option<EventGroupId>);
		}

		public StoryDefinitionId GetEnterBoardDialogue(IPlayer player)
		{
			return null;
		}

		public int GetAuxEnergyAttachmentChance(IPlayer player)
		{
			return 0;
		}

		public bool EligibleForBubbleBonus()
		{
			return false;
		}

		public void AddPoints(IPlayer player, int amount)
		{
		}

		public void AddPoints(IPlayer player, int amount, LeaderboardEventScoreChangeSourceAction sourceAction)
		{
		}

		public override void OnStartedActivation(IPlayerModelBase player)
		{
		}

		public override bool CanBeFinalized(IPlayerModelBase player)
		{
			return false;
		}

		public override void Finalize(IPlayerModelBase player)
		{
		}

		public void OnGameTick(PlayerModel playerModel)
		{
		}

		public void NotePhase(ShortLeaderboardEventNotePhase phase)
		{
		}

		public bool CanRequestJoinStage(IPlayer player, ShortLeaderboardEventStageId stageId)
		{
			return false;
		}

		public void OnStageJoinRequested(IPlayer player, ShortLeaderboardEventStageId stageId, GameCurrencyCost cost)
		{
		}

		public void OnStageJoined(EntityId divisionId)
		{
		}

		public void OnStageJoinFailed()
		{
		}

		public MetaActionResult GetReplayStageResult(IPlayer player, ShortLeaderboardEventStageId stageId)
		{
			return null;
		}

		public MetaActionResult GetCanAffordStageReplayResult(IPlayer player, StageData stageData)
		{
			return null;
		}

		public void ForceReplayStage(IPlayer player, ShortLeaderboardEventStageId stageId)
		{
		}

		public GameCurrencyCost GetReplayCost(IPlayer player, StageData stageData)
		{
			return null;
		}

		public bool CanRequestJoinStage(IPlayer player, out ShortLeaderboardEventStageInfo stage)
		{
			stage = null;
			return false;
		}

		public ShortLeaderboardEventStageInfo GetReplayStage()
		{
			return null;
		}

		public void ForceClaimStageCompletionRewards(IPlayer player, ShortLeaderboardEventStageId stageId)
		{
		}

		public int GetStageStars(ShortLeaderboardEventStageId stageId)
		{
			return 0;
		}

		public int GetTotalStars()
		{
			return 0;
		}

		public bool HasCompletedStage(ShortLeaderboardEventStageId stageId)
		{
			return false;
		}

		public int GetLevel(ShortLeaderboardEventStageId stageId)
		{
			return 0;
		}

		public int GetLevelProgress(ShortLeaderboardEventStageId stageId)
		{
			return 0;
		}

		public int GetFirstAvailableUnclaimedLevel(ShortLeaderboardEventStageId stageId)
		{
			return 0;
		}

		public bool CanClaimLevel(int level)
		{
			return false;
		}

		public void ForceClaimLevel(IPlayer player, int level)
		{
		}

		public int GetPoints(ShortLeaderboardEventStageId stageId)
		{
			return 0;
		}

		public EventLevelInfo GetEventLevelInfo(IPlayer player, ShortLeaderboardEventStageId stageId, int level)
		{
			return null;
		}

		public int GetCompletedStageCount()
		{
			return 0;
		}

		public bool CanStartCurrentStage()
		{
			return false;
		}

		public void ForceStartCurrentStage(PlayerModel playerModel, MetacoreTime startTime)
		{
		}

		public bool ShouldEndCurrentStage(PlayerModel playerModel)
		{
			return false;
		}

		public void ForceEndCurrentStage(PlayerModel playerModel)
		{
		}

		public void RefreshReplayCosts(PlayerModel playerModel)
		{
		}

		public void RefreshReplayCost(PlayerModel playerModel, StageData stageData)
		{
		}

		public MetaTime GetStageUnlockTime(ShortLeaderboardEventStageInfo stage)
		{
			return default(MetaTime);
		}

		public bool StageUnlockTimePassed(IPlayer player, ShortLeaderboardEventStageInfo stage)
		{
			return false;
		}

		public StageData GetLastCompletedStage()
		{
			return default(StageData);
		}

		public bool IsLastCompletedStage(ShortLeaderboardEventStageId stageId)
		{
			return false;
		}

		public StageData GetStageData(ShortLeaderboardEventStageId stageId)
		{
			return default(StageData);
		}

		public bool CanClaimStageCompletionRewards(IPlayer player, out ShortLeaderboardEventStageInfo stage)
		{
			stage = null;
			return false;
		}

		public bool CanClaimStageCompletionRewards(ShortLeaderboardEventStageId stageId)
		{
			return false;
		}

		public int GetNextStageIndex()
		{
			return 0;
		}

		public int GetReplayStageIndex()
		{
			return 0;
		}

		public int GetLastCompletedStageIndex()
		{
			return 0;
		}

		public bool HasCurrentStage()
		{
			return false;
		}

		public bool HasCurrentNonJoinFailedStage()
		{
			return false;
		}

		public bool HasClaimedStageCompletionRewards(ShortLeaderboardEventStageId stageId)
		{
			return false;
		}

		public bool HasCompletedAtLeastOneStage()
		{
			return false;
		}

		public bool CanClaimFinalReward()
		{
			return false;
		}

		public PlayerReward GetFinalReward()
		{
			return null;
		}

		public void ForceClaimFinalReward(IPlayer player)
		{
		}

		public bool CanStartIntro()
		{
			return false;
		}

		public void ForceStartIntro(IPlayer player)
		{
		}

		public bool CanFinishIntro()
		{
			return false;
		}

		public void ForceFinishIntro()
		{
		}

		public OfferPlacementId GetBoardShopPlacementId()
		{
			return null;
		}

		public bool PendingClaimStageStars(out ShortLeaderboardEventStageId stageId)
		{
			stageId = null;
			return false;
		}

		public bool CanClaimStageStars(PlayerModel playerModel, ShortLeaderboardEventStageId stageId, out int rankingPosition)
		{
			rankingPosition = default(int);
			return false;
		}

		public void ForceClaimStageStars(PlayerModel playerModel, ShortLeaderboardEventStageId stageId, int rankingPosition)
		{
		}

		public bool ClaimStageStarsNoted(ShortLeaderboardEventStageId stageId)
		{
			return false;
		}

		public void NoteClaimStageStars(ShortLeaderboardEventStageId stageId)
		{
		}

		public static int GetStageStarsForRankingPosition(PlayerModel playerModel, ShortLeaderboardEventStageId stageId, int rankingPosition)
		{
			return 0;
		}

		bool IBoardEventModel.IsActive(IPlayerModelBase playerModel)
		{
			return false;
		}
	}
}
