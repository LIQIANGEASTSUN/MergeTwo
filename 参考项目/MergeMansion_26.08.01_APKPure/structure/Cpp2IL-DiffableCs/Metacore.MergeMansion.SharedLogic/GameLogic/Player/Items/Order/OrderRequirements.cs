namespace GameLogic.Player.Items.Order;

[MetaSerializable]
public class OrderRequirements : IGameConfigData<OrderRequirementsId>, IGameConfigData, IHasGameConfigKey<OrderRequirementsId>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"item", "amount"})]
		public static Func<ValueTuple`2<Int32, Int32>, Int32> <>9__25_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"item", "amount"})]
		public static Func<ValueTuple`2<Int32, Int32>, Int32> <>9__25_1; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"item", "amount"})]
		public static Func<ValueTuple`2<Int32, Int32>, Int32> <>9__25_2; //Field offset: 0x18
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"item", "amount"})]
		public static Func<ValueTuple`2<Int32, Int32>, Int32> <>9__25_3; //Field offset: 0x20

		private static <>c() { }

		public <>c() { }

		internal int <.ctor>b__25_0(ValueTuple<Int32, Int32> item) { }

		internal int <.ctor>b__25_1(ValueTuple<Int32, Int32> item) { }

		internal int <.ctor>b__25_2(ValueTuple<Int32, Int32> item) { }

		internal int <.ctor>b__25_3(ValueTuple<Int32, Int32> item) { }

	}

	[CompilerGenerated]
	private OrderRequirementsId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <SinkFactoryType>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <SinkItemsAndAmounts>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <ActivationType>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <ActivationRewardsAndAmounts>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x38

	[MetaMember(5, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> ActivationRewardsAndAmounts
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private string ActivationType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override OrderRequirementsId ConfigKey
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

	[MetaMember(2, MetaMemberFlags::None (0))]
	private string SinkFactoryType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> SinkItemsAndAmounts
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OrderRequirements() { }

	public OrderRequirements(OrderRequirementsId configKey, string sinkFactoryType, List<ValueTuple`2<Int32, Int32>> sinkItems, string activationType, List<ValueTuple`2<Int32, Int32>> activationRewards, int experimentPriority) { }

	public IOrderState CreateState(IGenerationContext context) { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_ActivationRewardsAndAmounts() { }

	[CompilerGenerated]
	private string get_ActivationType() { }

	[CompilerGenerated]
	public override OrderRequirementsId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_SinkFactoryType() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> get_SinkItemsAndAmounts() { }

	[CompilerGenerated]
	private void set_ActivationRewardsAndAmounts(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	private void set_ActivationType(string value) { }

	[CompilerGenerated]
	private void set_ConfigKey(OrderRequirementsId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_SinkFactoryType(string value) { }

	[CompilerGenerated]
	private void set_SinkItemsAndAmounts(MetaDictionary<Int32, Int32> value) { }

}

