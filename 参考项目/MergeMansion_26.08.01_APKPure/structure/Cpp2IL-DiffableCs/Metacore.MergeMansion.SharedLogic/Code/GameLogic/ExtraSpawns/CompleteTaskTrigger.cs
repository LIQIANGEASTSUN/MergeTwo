namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(4)]
public class CompleteTaskTrigger : IExtraSpawnTrigger
{
	[CompilerGenerated]
	private Nullable<HotspotId> <Hotspot>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private Nullable<HotspotId> Hotspot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override ExtraSpawnTriggerType Type
	{
		 get { } //Length: 8
	}

	public CompleteTaskTrigger() { }

	public CompleteTaskTrigger(Nullable<HotspotId> hotspot) { }

	[CompilerGenerated]
	public Nullable<HotspotId> get_Hotspot() { }

	public override ExtraSpawnTriggerType get_Type() { }

	public override bool Matches(IExtraSpawnTrigger other) { }

	[CompilerGenerated]
	private void set_Hotspot(Nullable<HotspotId> value) { }

	public override CurrencySource ToCurrencySource() { }

	public override ItemActSource ToItemActSource() { }

}

