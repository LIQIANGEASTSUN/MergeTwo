using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Leaderboard;
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
	[MetaSerializableDerived(9)]
	public class LeaderboardEventModel : MetaActivableState<LeaderboardEventId, LeaderboardEventInfo>, IBoardEventModel, IPointsEvent, IGroupIdGetter, ILeaderboardEventModel
	{
		public const byte InitialBoolFields = 0;

		public const int InitialScore = 0;

		public const int InitialLevel = 0;

		public const int InitialLevelProgress = 0;

		[MetaMember(1, MetaMemberFlags.None)]
		public sealed override LeaderboardEventId ActivableId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoard MergeBoard { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<IBoardItem> PocketItems { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public byte BoolFields { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int Score { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int Level { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int LevelProgress { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public EntityId DivisionId { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<int> ClaimedLevels { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public int EnterMergeBoardCount { get; set; }

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

		public bool RankingRewardsClaimed
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

		public bool EventEndPopupClosed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public Option<ShortLeaderboardEventStageId> StageId => default(Option<ShortLeaderboardEventStageId>);

		[IgnoreDataMember]
		public bool Joined => false;

		[IgnoreDataMember]
		IBoardEventInfo IBoardEventModel.BoardEventInfo => null;

		[IgnoreDataMember]
		int IBoardEventModel.EnterMergeBoardCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[IgnoreDataMember]
		Activation? IBoardEventModel.LatestActivation => null;

		[IgnoreDataMember]
		bool IBoardEventModel.RequestExtension
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		[IgnoreDataMember]
		OfferPlacementId IBoardEventModel.BoardShopPlacementId => null;

		[IgnoreDataMember]
		OfferPlacementId IBoardEventModel.BoardShopFlashPlacementId => null;

		[IgnoreDataMember]
		public LeaderboardEventInfo Info => null;

		public IStringId Id => null;

		public LeaderboardEventModel()
		{
		}

		public LeaderboardEventModel(LeaderboardEventInfo info)
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

		public void SetupMergeBoard(PlayerModel player)
		{
		}

		public void FinishMergeBoard(PlayerModel playerModel)
		{
		}

		public void HandleAuxEnergyRemoval(PlayerModel playerModel)
		{
		}

		public void OnBannedFromParticipating(PlayerModel playerModel)
		{
		}

		public void NotePhase(LeaderboardEventNotePhase phase)
		{
		}

		public void AddScore(IPlayer player, int score, LeaderboardEventScoreChangeSourceAction sourceAction)
		{
		}

		public MergeBoardId GetBoardIdentifier()
		{
			return null;
		}

		public void SetDivisionId(EntityId divisionId)
		{
		}

		public void ResetSinglePlayerProgress(PlayerModel player)
		{
		}

		public int GetFirstAvailableUnclaimedLevel()
		{
			return 0;
		}

		public EventLevelInfo GetEventLevelInfo(IPlayer player, ShortLeaderboardEventStageId stageId, int level)
		{
			return null;
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

		public void ClaimLevel(IPlayer player, int level)
		{
		}

		public void ClaimUnclaimedLevels(IPlayer player)
		{
		}

		public PlayerDivisionHistoryEntry GetDivisionHistoryEntry(PlayerModel player)
		{
			return null;
		}

		public bool CanClaimRankingRewards(PlayerModel player)
		{
			return false;
		}

		public bool HasRankingRewardForPosition(PlayerModel player)
		{
			return false;
		}

		public void ClaimRankingRewards(PlayerModel player)
		{
		}

		public void CheckCanBeResolved(PlayerModel player)
		{
		}

		public int GetPoints(IPlayer player)
		{
			return 0;
		}

		public void AddPoints(IPlayer player, int amount)
		{
		}

		public bool IsDeterminingRewards(PlayerModel player)
		{
			return false;
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

		bool IBoardEventModel.IsActive(IPlayerModelBase playerModel)
		{
			return false;
		}
	}
}
