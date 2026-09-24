namespace GameLogic.Player.Items.Order;

[MetaSerializable]
public class OrderFeatures : IOrderFeatures
{
	public static readonly OrderFeatures NoOrder; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsOrder>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IOrderProducer <OrderProducer>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <HideRequirementsPhaseProgressBar>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private IPlacement <RewardsPlacement>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private ItemVisibility <RewardsItemVisibility>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private IItemProducer <DecayProducer>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private OrderItemDecayLogic <DecayLogic>k__BackingField; //Field offset: 0x40

	[MetaMember(7, MetaMemberFlags::None (0))]
	private OrderItemDecayLogic DecayLogic
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override IItemProducer DecayProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override bool HideRequirementsPhaseProgressBar
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsOrder
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private IOrderProducer OrderProducer
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override ItemVisibility RewardsItemVisibility
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override IPlacement RewardsPlacement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static OrderFeatures() { }

	public OrderFeatures(bool isOrder, bool hideRequirementsPhaseProgressBar, IItemProducer decayProducer, IOrderSpawner orderProducer, OrderItemDecayLogic decayLogic, IPlacement rewardsPlacement) { }

	private OrderFeatures() { }

	public override OrderParentState CreateState(IGenerationContext context) { }

	[CompilerGenerated]
	private OrderItemDecayLogic get_DecayLogic() { }

	[CompilerGenerated]
	public override IItemProducer get_DecayProducer() { }

	[CompilerGenerated]
	public override bool get_HideRequirementsPhaseProgressBar() { }

	[CompilerGenerated]
	public override bool get_IsOrder() { }

	[CompilerGenerated]
	private IOrderProducer get_OrderProducer() { }

	[CompilerGenerated]
	public override ItemVisibility get_RewardsItemVisibility() { }

	[CompilerGenerated]
	public override IPlacement get_RewardsPlacement() { }

	public override IOrderState GetNextOrder(OrderParentState currentState, IGenerationContext context) { }

	[CompilerGenerated]
	private void set_DecayLogic(OrderItemDecayLogic value) { }

	[CompilerGenerated]
	private void set_DecayProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_HideRequirementsPhaseProgressBar(bool value) { }

	[CompilerGenerated]
	private void set_IsOrder(bool value) { }

	[CompilerGenerated]
	private void set_OrderProducer(IOrderProducer value) { }

	[CompilerGenerated]
	private void set_RewardsItemVisibility(ItemVisibility value) { }

	[CompilerGenerated]
	private void set_RewardsPlacement(IPlacement value) { }

}

