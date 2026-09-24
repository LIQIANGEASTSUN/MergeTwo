namespace GameLogic.Config;

[MetaSerializable]
public class CollectItemsOnSessionStartSettings
{
	[CompilerGenerated]
	private bool <Enabled>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <DurationSinceLastSession>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<Int32> <TypesToCollect>k__BackingField; //Field offset: 0x20

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDuration DurationSinceLastSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private bool Enabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private List<Int32> TypesToCollect
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public CollectItemsOnSessionStartSettings() { }

	public CollectItemsOnSessionStartSettings(bool enabled, MetaDuration durationSinceLastSession, List<Int32> typesToCollect) { }

	[CompilerGenerated]
	public MetaDuration get_DurationSinceLastSession() { }

	[CompilerGenerated]
	public bool get_Enabled() { }

	[CompilerGenerated]
	public List<Int32> get_TypesToCollect() { }

	[CompilerGenerated]
	private void set_DurationSinceLastSession(MetaDuration value) { }

	[CompilerGenerated]
	private void set_Enabled(bool value) { }

	[CompilerGenerated]
	private void set_TypesToCollect(List<Int32> value) { }

}

