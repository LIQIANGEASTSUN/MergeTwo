using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(12)]
	public class MysteryMachineEventModel : MetaActivableState<MysteryMachineEventId, MysteryMachineEventInfo>, IBoardEventModel
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public sealed override MysteryMachineEventId ActivableId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MysteryMachine MysteryMachine { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MergeBoard MergeBoard { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int EnterMergeBoardCount { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public byte BoolFields { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<IBoardItem> PocketItems { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int EventInstance { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public EventInstanceId EventInstanceId { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public MetaTime? StartTimeInGameConfig { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public AcknowledgedMysteryMachineLeaderboardPositionData AcknowledgedLeaderboardPositionData { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public OrderedSet<PlayerSegmentId> LeaderboardRewardSegmentsAtStartOfEvent { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public MysteryMachineLeaderboardConfigId CachedLeaderboardConfigId { get; set; }

		public bool PortalItemGiven => false;

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

		public bool PreviewNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

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

		public bool LeaderboardRewardsClaimed
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
		public IBoardEventInfo BoardEventInfo => null;

		[IgnoreDataMember]
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

		[IgnoreDataMember]
		public OfferPlacementId BoardShopPlacementId => null;

		[IgnoreDataMember]
		public OfferPlacementId BoardShopFlashPlacementId => null;

		Activation? IBoardEventModel.LatestActivation => null;

		public MergeBoardId GetBoardIdentifier()
		{
			return null;
		}

		public void CheckCanBeResolved(PlayerModel player)
		{
		}

		public MysteryMachineEventModel()
		{
		}

		public MysteryMachineEventModel(MysteryMachineEventInfo info)
		{
		}

		public override void OnStartedActivation(IPlayerModelBase player)
		{
		}

		public bool CanExtend(IPlayerModelBase playerBase)
		{
			return false;
		}

		public override void Finalize(IPlayerModelBase player)
		{
		}

		public void OnGameTick()
		{
		}

		public void RefreshCachedLeaderboardId()
		{
		}

		public void SetupEvent(PlayerModel player)
		{
		}

		public void SetupMergeBoard(PlayerModel playerModel)
		{
		}

		public void SetupMysteryMachine(PlayerModel playerModel)
		{
		}

		public void FinishMergeBoard(PlayerModel playerModel)
		{
		}

		public void HandleAuxEnergyRemoval(PlayerModel playerModel)
		{
		}

		public void SetupLeaderboardRewardSegmentsAtStartOfEvent(IPlayer player)
		{
		}

		public void NotePhase(MysteryMachineEventNotePhase phase)
		{
		}

		public PlayerReward GetAllTasksCompletedReward(PlayerModel playerModel)
		{
			return null;
		}

		public bool IsDeterminingRewards(PlayerModel player)
		{
			return false;
		}

		public MysteryMachineLeaderboardConfigInfo GetCachedLeaderboardConfig(PlayerModel playerModel)
		{
			return null;
		}

		public bool UsesLeaderboardCached(PlayerModel playerModel)
		{
			return false;
		}

		public void SyncRequestRewardsEventInstanceIds(PlayerModel playerModel)
		{
		}

		public bool HasSubmittedLeaderboardHighScore()
		{
			return false;
		}

		public void AcknowledgeLeaderboardPosition(AcknowledgedMysteryMachineLeaderboardPositionData positionData)
		{
		}

		public void ClaimLeaderboardRewards(PlayerModel playerModel, EventInstanceId eventInstanceId, MysteryMachineLeaderboardPositionData positionData)
		{
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
