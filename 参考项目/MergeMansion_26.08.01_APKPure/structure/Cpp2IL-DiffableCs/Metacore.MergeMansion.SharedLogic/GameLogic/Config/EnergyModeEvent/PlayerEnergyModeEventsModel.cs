namespace GameLogic.Config.EnergyModeEvent;

[MetaActivableSet("EnergyModeEvent", False)]
[MetaSerializableDerived(12)]
public class PlayerEnergyModeEventsModel : MetaActivableSet<EnergyModeEventId, EnergyModeEventInfo, EnergyModeEventModel>
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_0
	{
		public PlayerModel player; //Field offset: 0x10
		public PlayerEnergyModeEventsModel <>4__this; //Field offset: 0x18

		public <>c__DisplayClass2_0() { }

		internal bool <RefreshState>g__CanStartActivationBasedOnGroup|0(EnergyModeEventInfo eventInfo) { }

	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaTime _nextEventStartTime; //Field offset: 0x20

	public PlayerEnergyModeEventsModel() { }

	protected virtual EnergyModeEventModel CreateActivableState(EnergyModeEventInfo info, IPlayerModelBase player) { }

	public Option<EnergyModeEventModel> GetFirstActiveUnlockedMatchingMode(PlayerModel player, PlayerModeId modeId) { }

	public void RefreshState(PlayerModel player, PlayerEventsModelRefreshAction action) { }

}

