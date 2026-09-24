namespace Code.GameLogic.GameEvents;

public interface IBoardEventInfo : IHasRequirement
{

	public MetaActivableParams ActivableParams
	{
		 get { } //Length: 0
	}

	public DecorationInfo ActiveDecoration
	{
		 get { } //Length: 0
	}

	public IStringId BoardEventId
	{
		 get { } //Length: 0
	}

	public string Description
	{
		 get { } //Length: 0
	}

	public ExtendableEventParams ExtendableEventParams
	{
		 get { } //Length: 0
	}

	public MetaRef<InAppProductInfo> ExtensionInAppProduct
	{
		 get { } //Length: 0
	}

	public MetaDuration ExtensionPurchaseSafetyMargin
	{
		 get { } //Length: 0
	}

	public MergeBoardId MergeBoardId
	{
		 get { } //Length: 0
	}

	public PlayerRequirement UnlockRequirement
	{
		 get { } //Length: 0
	}

	public bool CanExtendLatestActivation(PlayerModel player) { }

	public MetaActivableParams get_ActivableParams() { }

	public DecorationInfo get_ActiveDecoration() { }

	public IStringId get_BoardEventId() { }

	public string get_Description() { }

	public ExtendableEventParams get_ExtendableEventParams() { }

	public MetaRef<InAppProductInfo> get_ExtensionInAppProduct() { }

	public MetaDuration get_ExtensionPurchaseSafetyMargin() { }

	public MergeBoardId get_MergeBoardId() { }

	public PlayerRequirement get_UnlockRequirement() { }

	public List<IPlayerReward> GetExtensionRewards(IPlayer player) { }

	public bool IsEndingSoon(PlayerModel player) { }

	public bool TryGetVisibleStatus(PlayerModel player, out MetaActivableVisibleStatus visibleStatus) { }

	public bool UsesLeaderboard() { }

}

