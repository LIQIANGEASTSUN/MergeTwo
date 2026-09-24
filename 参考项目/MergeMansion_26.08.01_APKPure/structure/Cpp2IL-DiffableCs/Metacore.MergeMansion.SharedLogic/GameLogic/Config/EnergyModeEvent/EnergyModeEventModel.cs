namespace GameLogic.Config.EnergyModeEvent;

[MetaSerializableDerived(13)]
public class EnergyModeEventModel : MetaActivableState<EnergyModeEventId, EnergyModeEventInfo>, IGroupIdGetter
{
	[CompilerGenerated]
	private EnergyModeEventId <ActivableId>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private byte <BoolFields>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private Nullable<EnergyModeEnableType> <CachedEnergyModeEnableType>k__BackingField; //Field offset: 0x84

	[MetaMember(1, MetaMemberFlags::None (0))]
	public virtual EnergyModeEventId ActivableId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private byte BoolFields
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private Nullable<EnergyModeEnableType> CachedEnergyModeEnableType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public bool EndNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool EnergyModeEnableHandled
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool FtueNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public bool StartNoted
	{
		 get { } //Length: 16
		 set { } //Length: 40
	}

	public EnergyModeEventModel(EnergyModeEventInfo info) { }

	private EnergyModeEventModel() { }

	protected virtual void Finalize(IPlayerModelBase player) { }

	[CompilerGenerated]
	public virtual EnergyModeEventId get_ActivableId() { }

	[CompilerGenerated]
	private byte get_BoolFields() { }

	[CompilerGenerated]
	private Nullable<EnergyModeEnableType> get_CachedEnergyModeEnableType() { }

	public bool get_EndNoted() { }

	public bool get_EnergyModeEnableHandled() { }

	public bool get_FtueNoted() { }

	public bool get_StartNoted() { }

	public override Option<EventGroupId> GetGroupIdOption() { }

	public void NotePhase(EnergyModeEventNotePhase phase) { }

	protected virtual void OnStartedActivation(IPlayerModelBase player) { }

	[CompilerGenerated]
	protected virtual void set_ActivableId(EnergyModeEventId value) { }

	[CompilerGenerated]
	private void set_BoolFields(byte value) { }

	[CompilerGenerated]
	private void set_CachedEnergyModeEnableType(Nullable<EnergyModeEnableType> value) { }

	public void set_EndNoted(bool value) { }

	public void set_EnergyModeEnableHandled(bool value) { }

	public void set_FtueNoted(bool value) { }

	public void set_StartNoted(bool value) { }

	public void TryHandleEnergyModeEnable(PlayerModel playerModel) { }

}

