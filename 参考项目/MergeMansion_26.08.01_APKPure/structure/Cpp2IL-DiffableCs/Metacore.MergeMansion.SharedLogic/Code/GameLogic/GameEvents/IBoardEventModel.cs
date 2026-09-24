namespace Code.GameLogic.GameEvents;

public interface IBoardEventModel
{

	public IBoardEventInfo BoardEventInfo
	{
		 get { } //Length: 0
	}

	public OfferPlacementId BoardShopFlashPlacementId
	{
		 get { } //Length: 0
	}

	public OfferPlacementId BoardShopPlacementId
	{
		 get { } //Length: 0
	}

	public bool EnterBoardDialogueTriggered
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public int EnterMergeBoardCount
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Nullable<Activation> LatestActivation
	{
		 get { } //Length: 0
	}

	public MergeBoard MergeBoard
	{
		 get { } //Length: 0
	}

	public List<IBoardItem> PocketItems
	{
		 get { } //Length: 0
	}

	public bool RequestExtension
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool CanExtend(IPlayerModelBase playerModel) { }

	public void CheckCanBeResolved(PlayerModel player) { }

	public IBoardEventInfo get_BoardEventInfo() { }

	public OfferPlacementId get_BoardShopFlashPlacementId() { }

	public OfferPlacementId get_BoardShopPlacementId() { }

	public bool get_EnterBoardDialogueTriggered() { }

	public int get_EnterMergeBoardCount() { }

	public Nullable<Activation> get_LatestActivation() { }

	public MergeBoard get_MergeBoard() { }

	public List<IBoardItem> get_PocketItems() { }

	public bool get_RequestExtension() { }

	public Nullable<MetaTime> GetActivationVisibilityEndsAtTime(IPlayerModelBase player) { }

	public int GetAuxEnergyAttachmentChance(IPlayer player) { }

	public MergeBoardId GetBoardIdentifier() { }

	public StoryDefinitionId GetEnterBoardDialogue(IPlayer player) { }

	public bool IsActive(IPlayerModelBase playerModel) { }

	public void set_EnterBoardDialogueTriggered(bool value) { }

	public void set_EnterMergeBoardCount(int value) { }

	public void set_RequestExtension(bool value) { }

}

