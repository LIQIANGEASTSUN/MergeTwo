namespace GameLogic.Config;

public class ItemInfo : IGameConfigData<Int32>, IGameConfigData, IHasGameConfigKey<Int32>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x14

	public override int ConfigKey
	{
		 get { } //Length: 8
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

	public private int ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ItemInfo() { }

	public static ItemInfo CreateFromItemDefinition(int itemId) { }

	public override int get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public int get_ItemId() { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

}

