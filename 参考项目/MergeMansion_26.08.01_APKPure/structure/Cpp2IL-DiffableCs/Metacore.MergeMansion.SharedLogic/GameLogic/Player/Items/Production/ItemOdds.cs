namespace GameLogic.Player.Items.Production;

[MetaSerializable]
public class ItemOdds : IItemOdds
{
	[CompilerGenerated]
	private ItemDef <Type>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Weight>k__BackingField; //Field offset: 0x18

	[IgnoreDataMember]
	public override int ConfigKey
	{
		 get { } //Length: 120
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef Type
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int Weight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ItemOdds() { }

	public ItemOdds(int type, int weight) { }

	public ItemOdds(IItemDefinition itemDefinition, int weight) { }

	protected bool Equals(ItemOdds other) { }

	public virtual bool Equals(object obj) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	private override IItemDefinition GameLogic.Player.Items.Production.IItemOdds.GetItem(IMergeMansionGameConfig config) { }

	public override int get_ConfigKey() { }

	[CompilerGenerated]
	public ItemDef get_Type() { }

	[CompilerGenerated]
	public override int get_Weight() { }

	public virtual int GetHashCode() { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	private void set_Type(ItemDef value) { }

	[CompilerGenerated]
	private void set_Weight(int value) { }

}

