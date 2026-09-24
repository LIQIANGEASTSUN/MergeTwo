namespace GameLogic.Player.Items.Order;

[MetaSerializable]
public class OrderParentState
{
	[CompilerGenerated]
	private IOrderState <CurrentOrder>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <CurrentOrderIndex>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private IOrderState CurrentOrder
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int CurrentOrderIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OrderParentState() { }

	public OrderParentState(IOrderState currentOrder) { }

	[CompilerGenerated]
	public IOrderState get_CurrentOrder() { }

	[CompilerGenerated]
	public int get_CurrentOrderIndex() { }

	[CompilerGenerated]
	private void set_CurrentOrder(IOrderState value) { }

	[CompilerGenerated]
	private void set_CurrentOrderIndex(int value) { }

	public void SetNewOrder(IOrderState newOrder) { }

}

