namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class GarageCleanupBoardRowInfo : IGameConfigData<GarageCleanupBoardRowId>, IGameConfigData, IHasGameConfigKey<GarageCleanupBoardRowId>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__13_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <.ctor>b__13_0(int value) { }

	}

	[CompilerGenerated]
	private GarageCleanupBoardRowId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<ItemDef> <Items>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override GarageCleanupBoardRowId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 12
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRefList")]
	public private List<ItemDef> Items
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public GarageCleanupBoardRowInfo() { }

	public GarageCleanupBoardRowInfo(GarageCleanupBoardRowId boardId, List<Int32> items, int experimentPriority) { }

	public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override GarageCleanupBoardRowId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<ItemDef> get_Items() { }

	[CompilerGenerated]
	private void set_ConfigKey(GarageCleanupBoardRowId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Items(List<ItemDef> value) { }

}

