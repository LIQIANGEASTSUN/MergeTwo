namespace GameLogic.Player;

[AnalyticsEvent(30, "State Restored Fixup", 1, null, True, False, False)]
public class PlayerEventRestoredStateFixup : PlayerEventBase
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<KeyValuePair`2<String, Int32>, String> <>9__12_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal string <get_EventDescription>b__12_0(KeyValuePair<String, Int32> kv) { }

	}

	[MetaSerializable]
	internal class FixupEntry
	{
		[CompilerGenerated]
		private string <Source>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private string <Change>k__BackingField; //Field offset: 0x18

		[MetaMember(2, MetaMemberFlags::None (0))]
		public private string Change
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		[MetaMember(1, MetaMemberFlags::None (0))]
		public private string Source
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		private FixupEntry() { }

		public FixupEntry(string source, string change) { }

		[CompilerGenerated]
		public string get_Change() { }

		[CompilerGenerated]
		public string get_Source() { }

		[CompilerGenerated]
		private void set_Change(string value) { }

		[CompilerGenerated]
		private void set_Source(string value) { }

	}

	[CompilerGenerated]
	private List<FixupEntry> <Changes>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDictionary<String, Int32> <TotalChangesBySource>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private List<FixupEntry> Changes
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public virtual string EventDescription
	{
		 get { } //Length: 408
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDictionary<String, Int32> TotalChangesBySource
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerEventRestoredStateFixup() { }

	public PlayerEventRestoredStateFixup(List<FixupEntry> changes, MetaDictionary<String, Int32> totalChangesBySource) { }

	[CompilerGenerated]
	public List<FixupEntry> get_Changes() { }

	public virtual string get_EventDescription() { }

	[CompilerGenerated]
	public MetaDictionary<String, Int32> get_TotalChangesBySource() { }

	[CompilerGenerated]
	private void set_Changes(List<FixupEntry> value) { }

	[CompilerGenerated]
	private void set_TotalChangesBySource(MetaDictionary<String, Int32> value) { }

}

