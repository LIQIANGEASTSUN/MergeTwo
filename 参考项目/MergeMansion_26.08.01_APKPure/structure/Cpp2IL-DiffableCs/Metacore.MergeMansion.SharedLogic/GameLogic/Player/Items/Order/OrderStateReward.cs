namespace GameLogic.Player.Items.Order;

[MetaSerializable]
public class OrderStateReward
{
	[CompilerGenerated]
	private ItemDefinition <Item>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Claimed>k__BackingField; //Field offset: 0x1C

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Claimed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private ItemDefinition Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OrderStateReward() { }

	public OrderStateReward(ItemDefinition item, int amount, int claimed) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public int get_Claimed() { }

	[CompilerGenerated]
	public ItemDefinition get_Item() { }

	public void IncrementClaimed() { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_Claimed(int value) { }

	[CompilerGenerated]
	private void set_Item(ItemDefinition value) { }

}

