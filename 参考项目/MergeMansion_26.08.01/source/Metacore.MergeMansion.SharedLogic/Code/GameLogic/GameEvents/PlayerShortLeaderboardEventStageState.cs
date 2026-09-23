using System.Collections.Generic;
using GameLogic.Config.Costs;
using GameLogic.Config.Types;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class PlayerShortLeaderboardEventStageState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ShortLeaderboardEventStageState State { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public EntityId? DivisionId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaTime? RequestJoinTime { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaTime? StartTime { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MergeBoard MergeBoard { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<IBoardItem> PocketItems { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int EnterMergeBoardCount { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public byte BoolFields { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int Points { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public int Stars { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public int Level { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public int LevelProgress { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public OrderedSet<int> ClaimedLevels { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public int ReplayCostStep { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public MetaTime? ReplayCostCooldownStartTime { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public GameCurrencyCost RequestJoinCost { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public int ReplayCount { get; set; }

		public bool Completed
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

		public bool CompletionRewardsClaimed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool CompletionDialogueTriggered
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool StarsClaimed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool StarsClaimNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public void OnJoinRequested(IPlayer player, GameCurrencyCost cost)
		{
		}

		public void OnJoined(EntityId divisionId)
		{
		}

		public void OnJoinFailed()
		{
		}

		public void OnStarted(IPlayer player, ShortLeaderboardEventStageInfo stage, MetacoreTime startTime)
		{
		}

		public void End(PlayerModel playerModel, ShortLeaderboardEventId eventId, ShortLeaderboardEventStageInfo stage)
		{
		}

		public int GetFirstAvailableUnclaimedLevel()
		{
			return 0;
		}

		public bool CanClaimLevel(int level)
		{
			return false;
		}

		public void ClaimLevel(IPlayer player, ShortLeaderboardEventId eventId, ShortLeaderboardEventStageInfo stage, int level)
		{
		}

		public bool CanClaimCompletionRewards()
		{
			return false;
		}

		public void ClaimCompletionRewards(IPlayer player, ShortLeaderboardEventId eventId, ShortLeaderboardEventStageId stageId)
		{
		}

		public void AddPoints(IPlayer player, ShortLeaderboardEventId eventId, ShortLeaderboardEventStageInfo stage, int points)
		{
		}

		public void AddStars(IPlayer player, ShortLeaderboardEventStageId stageId, int stars)
		{
		}

		public void SetupMergeBoard(IPlayer player, ShortLeaderboardEventStageInfo stage)
		{
		}

		public void FinishMergeBoard(PlayerModel playerModel, ShortLeaderboardEventId eventId, ShortLeaderboardEventStageInfo stage)
		{
		}

		public void UpdateLevelProgressWithPoints(IPlayer player, ShortLeaderboardEventId eventId, ShortLeaderboardEventStageInfo stage, int points)
		{
		}
	}
}
