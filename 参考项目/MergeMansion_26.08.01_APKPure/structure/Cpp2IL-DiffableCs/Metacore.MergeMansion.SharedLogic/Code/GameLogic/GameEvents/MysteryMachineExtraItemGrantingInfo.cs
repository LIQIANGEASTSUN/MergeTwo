namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineExtraItemGrantingInfo : IGameConfigData<MysteryMachineExtraItemGrantingId>, IGameConfigData, IHasGameConfigKey<MysteryMachineExtraItemGrantingId>
{
	[CompilerGenerated]
	private MysteryMachineExtraItemGrantingId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeChainId <ChainId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<ItemDef> <ItemDefs>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Int32> <ExtraItemAmounts>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MergeChainId ChainId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineExtraItemGrantingId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
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

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private List<Int32> ExtraItemAmounts
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixRefs")]
	public private List<ItemDef> ItemDefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineExtraItemGrantingInfo() { }

	public MysteryMachineExtraItemGrantingInfo(MysteryMachineExtraItemGrantingId configKey, MergeChainId chainId, List<ItemDef> itemDefs, List<Int32> extraItemAmounts, int experimentPriority) { }

	public static List<ItemDef> FixRefs(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public MergeChainId get_ChainId() { }

	[CompilerGenerated]
	public override MysteryMachineExtraItemGrantingId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<Int32> get_ExtraItemAmounts() { }

	[CompilerGenerated]
	public List<ItemDef> get_ItemDefs() { }

	[CompilerGenerated]
	private void set_ChainId(MergeChainId value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineExtraItemGrantingId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ExtraItemAmounts(List<Int32> value) { }

	[CompilerGenerated]
	private void set_ItemDefs(List<ItemDef> value) { }

}

