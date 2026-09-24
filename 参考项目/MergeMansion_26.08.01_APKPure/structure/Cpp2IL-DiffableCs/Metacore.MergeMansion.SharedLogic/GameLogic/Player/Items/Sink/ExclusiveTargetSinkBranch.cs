namespace GameLogic.Player.Items.Sink;

[MetaSerializable]
public class ExclusiveTargetSinkBranch
{
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ItemDef <RewardItemDef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Target>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef RewardItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Target
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ExclusiveTargetSinkBranch() { }

	public ExclusiveTargetSinkBranch(int itemId, int target, int rewardItemId) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public int get_ItemId() { }

	[CompilerGenerated]
	public ItemDef get_RewardItemDef() { }

	[CompilerGenerated]
	public int get_Target() { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

	[CompilerGenerated]
	private void set_RewardItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_Target(int value) { }

}

