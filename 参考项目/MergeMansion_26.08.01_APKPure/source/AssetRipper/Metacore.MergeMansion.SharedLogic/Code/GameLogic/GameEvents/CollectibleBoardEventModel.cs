using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.ProgressionTracks;
using GameLogic.Config;
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
	[MetaSerializableDerived(8)]
	[MetaBlockedMembers(new int[] { 16, 17, 18, 19, 20, 21, 22, 23 })]
	public class CollectibleBoardEventModel : ExtendableEventState<CollectibleBoardEventId, CollectibleBoardEventInfo>, ILevelBoardEventModel, ILevelEventModel, IBoardEventModel, IPointsEvent, IGroupIdGetter
	{
		public const int InitialLevel = 0;

		public const int InitialLevelProgress = 0;

		public const byte InitialBoolFields = 0;

		public const int InitialEnterMergeBoardCount = 0;

		[MetaMember(1, MetaMemberFlags.None)]
		public sealed override CollectibleBoardEventId ActivableId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Level { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int LevelProgress { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<LevelEventClaimedLevelData> ClaimedLevels { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MergeBoard MergeBoard { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public byte BoolFields { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<IBoardItem> PocketItems { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public int EnterMergeBoardCount { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<EventTaskId> AvailableTaskIds { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public int CompletedTaskCount { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public byte BoolFields2 { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public OrderedSet<int> PhotoTakenItems { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public OrderedSet<int> CaughtFishes { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public OrderedSet<int> FishCatchPopupSeenItems { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public OrderedSet<int> FoundGems { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public byte BoolFields3 { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public ProgressionTrackId EventProgressionTrackId { get; set; }

		public bool PortalItemGiven
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

		public bool EndOfEventLevelsClaimed
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

		public bool ActiveDecorationNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool IsPlayable
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

		public bool CanBeResolved
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool FtueNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool FishCaught
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool CameraNoted
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool GemFound
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
		public CollectibleBoardEventInfo Info => null;

		[IgnoreDataMember]
		public IBoardEventInfo BoardEventInfo => null;

		[IgnoreDataMember]
		public ILevelEventInfo LevelEventInfo => null;

		[IgnoreDataMember]
		public override ExtendableEventParams ExtendableEventParams => null;

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

		public Option<ProgressionTrackId> EventProgressionTrackIdOption => default(Option<ProgressionTrackId>);

		public IStringId Id => null;

		public bool TryGetProgressionTrack(IPlayer player, out ProgressionTrack track)
		{
			track = null;
			return false;
		}

		public int GetLevel(IPlayer player)
		{
			return 0;
		}

		public int GetLevelProgress(IPlayer player)
		{
			return 0;
		}

		public List<LevelEventClaimedLevelData> GetClaimedLevels(IPlayer player)
		{
			return null;
		}

		public CollectibleBoardEventModel()
		{
		}

		public CollectibleBoardEventModel(CollectibleBoardEventInfo info)
		{
		}

		public bool CanExtend(IPlayerModelBase playerBase)
		{
			return false;
		}

		public override void OnStartedActivation(IPlayerModelBase player)
		{
		}

		public void SetEventProgressionTrack(PlayerModel player)
		{
		}

		public void SetupEventMergeBoard(PlayerModel playerModel)
		{
		}

		public override void OnExtendedActivation(IPlayerModelBase player)
		{
		}

		public void ResetProgress(PlayerModel playerModel)
		{
		}

		public void ResetItemDiscoverability(PlayerModel playerModel)
		{
		}

		public void ResetDirectorGroups(PlayerModel playerModel)
		{
		}

		public void ResetMergeChainLevels(PlayerModel playerModel)
		{
		}

		public override void Finalize(IPlayerModelBase player)
		{
		}

		public void CleanupLayeredDecorationProgress(PlayerModel playerModel)
		{
		}

		public override void SoftFinalize(IPlayerModelBase player)
		{
		}

		public bool GetSuggestExtension(PlayerModel player)
		{
			return false;
		}

		public void CheckCanBeResolved(PlayerModel playerModel)
		{
		}

		public bool HasPendingExtensionPurchase(PlayerModel playerModel)
		{
			return false;
		}

		public void NotePhase(CollectibleBoardEventNotePhase phase)
		{
		}

		public CollectibleBoardEventSetupMergeBoardResultType CheckSetupMergeBoardResult(MergeBoardId targetMergeBoardId, IPlayer player)
		{
			return default(CollectibleBoardEventSetupMergeBoardResultType);
		}

		public bool HasVisiblePortalToBoard(IPlayer player)
		{
			return false;
		}

		public void ForceSetupMergeBoard(PlayerModel player, MergeBoardId targetMergeBoardId)
		{
		}

		public void ForceSetupMergeBoard(PlayerModel player, BoardInfo board)
		{
		}

		public IEnumerable<PlayerReward> CompleteTask(EventTaskId taskId, PlayerModel player)
		{
			return null;
		}

		public void AddAvailableTasks(int removedFromIndex, IEnumerable<EventTaskInfo> unlockedTasks)
		{
		}

		public void AddInitTaskInfo()
		{
		}

		public void AddEventDecoration(PlayerModel playerModel)
		{
		}

		public void RemoveEventDecoration(PlayerModel playerModel)
		{
		}

		public void FinishMergeBoard(PlayerModel playerModel)
		{
		}

		public void HandleAuxEnergyRemoval(PlayerModel playerModel)
		{
		}

		public void ClaimEndOfEventLevels(PlayerModel player)
		{
		}

		public MergeBoardId GetBoardIdentifier()
		{
			return null;
		}

		public void SetPhotoTakenOfItem(IItemDefinition itemDefinition)
		{
		}

		public bool HasPhotoOfItemBeenTaken(IItemDefinition itemDefinition)
		{
			return false;
		}

		public bool HasFishBeenCaught(int fishItemId)
		{
			return false;
		}

		public void OnFishCaught(int fishItemId)
		{
		}

		public bool HasSeenFishCatchPopupFor(int itemId)
		{
			return false;
		}

		public void SetFishCatchPopupSeenFor(int itemId, IMergeMansionGameConfig gameConfig)
		{
		}

		public bool HasGemBeenFound(int gemItemId)
		{
			return false;
		}

		public void OnGemFound(int gemItemId)
		{
		}

		public int GetPoints(IPlayer player)
		{
			return 0;
		}

		public void AddPoints(IPlayer player, int amount)
		{
		}

		public OfferPlacementId GetBoardShopPlacementId()
		{
			return null;
		}

		public void CleanupBoardSpecificSpawnFactoryCache(IPlayerModelBase player)
		{
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

		public bool HasEnteredEvent()
		{
			return false;
		}

		bool IBoardEventModel.IsActive(IPlayerModelBase playerModel)
		{
			return false;
		}
	}
}
