namespace Code.GameLogic.GameEvents;

[MetaActivableSet("CollectibleBoardEvent", False)]
[MetaSerializableDerived(8)]
public class PlayerCollectibleBoardEventsModel : ExtendableEventSet<CollectibleBoardEventId, CollectibleBoardEventInfo, CollectibleBoardEventModel>
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public PlayerModel player; //Field offset: 0x10

		public <>c__DisplayClass5_0() { }

		internal bool <RefreshState>g__CanStartActivationBasedOnGroup|0(CollectibleBoardEventInfo eventInfo) { }

	}

	private static readonly CollectibleBoardEventId GREAT_ESCAPE_EVENT_ID; //Field offset: 0x0
	private static readonly OfferPlacementId[] GREAT_ESCAPE_OFFER_IDS; //Field offset: 0x8
	[MetaMember(1, MetaMemberFlags::None (0))]
	public List<StaleCollectibleBoardEventExtensionPurchaseInfo> StaleExtensionPurchaseInfos; //Field offset: 0x20
	[MetaMember(2, MetaMemberFlags::None (0))]
	private MetaTime _nextEventStartTime; //Field offset: 0x28

	private static PlayerCollectibleBoardEventsModel() { }

	public PlayerCollectibleBoardEventsModel() { }

	protected virtual CollectibleBoardEventModel CreateActivableState(CollectibleBoardEventInfo info, IPlayerModelBase player) { }

	private void EnsureCorrectInactiveState(CollectibleBoardEventId eventId, PlayerModel player) { }

	private void EnsureCorrectInactiveStates(IEnumerable<CollectibleBoardEventInfo> collectibleBoardEvents, PlayerModel player) { }

	public Option<CollectibleBoardEventModel> GetCurrentDigEvent(PlayerModel player) { }

	public void RefreshState(PlayerModel player, PlayerEventsModelRefreshAction action) { }

	public void TryDeleteGreatEscapeModel(PlayerModel player) { }

	public bool TryGetCurrentFishingEvent(PlayerModel player, LuckyType luckyType, out CollectibleBoardEventId eventId) { }

	public bool TryGetCurrentGemMiningEvent(PlayerModel player, out CollectibleBoardEventId eventId) { }

}

