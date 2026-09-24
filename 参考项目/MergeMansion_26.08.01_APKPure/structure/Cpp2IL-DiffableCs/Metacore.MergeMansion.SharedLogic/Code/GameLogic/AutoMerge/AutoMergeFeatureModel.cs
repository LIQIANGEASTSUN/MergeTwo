namespace Code.GameLogic.AutoMerge;

[MetaSerializableDerived(1)]
public class AutoMergeFeatureModel : IAutoMergeFeatureModel
{
	[CompilerGenerated]
	private bool <IsUserToggleOn>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Nullable<MetacoreTime> <AvailableSince>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<MetacoreTime> <AvailableUntil>k__BackingField; //Field offset: 0x28

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override Nullable<MetacoreTime> AvailableSince
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override Nullable<MetacoreTime> AvailableUntil
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override bool IsActive
	{
		 get { } //Length: 44
	}

	[IgnoreDataMember]
	public override bool IsAvailable
	{
		 get { } //Length: 128
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsUserToggleOn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public AutoMergeFeatureModel() { }

	public override void AddDuration(MetacoreTime startTime, MetacoreDuration duration, AutoMergeSource source, IPlayerModelClientListener clientListener) { }

	public override void ForceDeactivate(IPlayerModelClientListener clientListener) { }

	[CompilerGenerated]
	public override Nullable<MetacoreTime> get_AvailableSince() { }

	[CompilerGenerated]
	public override Nullable<MetacoreTime> get_AvailableUntil() { }

	public override bool get_IsActive() { }

	public override bool get_IsAvailable() { }

	[CompilerGenerated]
	public override bool get_IsUserToggleOn() { }

	private void NotifyIfChanged(bool wasAvailable, bool wasActive, IPlayerModelClientListener clientListener) { }

	public override void OnGameTick(MetaTime currentTime, IPlayerModelClientListener clientListener) { }

	[CompilerGenerated]
	private void set_AvailableSince(Nullable<MetacoreTime> value) { }

	[CompilerGenerated]
	private void set_AvailableUntil(Nullable<MetacoreTime> value) { }

	[CompilerGenerated]
	private void set_IsUserToggleOn(bool value) { }

	public override void SetUserToggle(bool enabled, IPlayerModelClientListener clientListener) { }

}

