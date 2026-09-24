namespace GameLogic.Player.Items.Order;

public class OrderFeaturesSource : IItemConfigPart<OrderFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private string <ItemKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <RequirementType>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <RequirementRandomMarker>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <OrderPool>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <HideProgressBar>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <ClaimTextLocId>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <DecayLogic>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private string <DecayProducerType>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private string <DecayRandomMarker>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<String> <DecayItem>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<Int32> <DecayWeight>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private ActivationPlacementStyle <RewardsPlacement>k__BackingField; //Field offset: 0x68

	private string ClaimTextLocId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	private List<String> DecayItem
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DecayLogic
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DecayProducerType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string DecayRandomMarker
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> DecayWeight
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool HideProgressBar
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ItemKey
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ItemType
	{
		private get { } //Length: 8
	}

	private string OrderPool
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RequirementRandomMarker
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string RequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ActivationPlacementStyle RewardsPlacement
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OrderFeaturesSource() { }

	[CompilerGenerated]
	private string get_ClaimTextLocId() { }

	public override string get_ConfigKey() { }

	[CompilerGenerated]
	private List<String> get_DecayItem() { }

	[CompilerGenerated]
	private string get_DecayLogic() { }

	[CompilerGenerated]
	private string get_DecayProducerType() { }

	[CompilerGenerated]
	private string get_DecayRandomMarker() { }

	[CompilerGenerated]
	private List<Int32> get_DecayWeight() { }

	[CompilerGenerated]
	private bool get_HideProgressBar() { }

	[CompilerGenerated]
	private string get_ItemKey() { }

	private string get_ItemType() { }

	[CompilerGenerated]
	private string get_OrderPool() { }

	[CompilerGenerated]
	private string get_RequirementRandomMarker() { }

	[CompilerGenerated]
	private string get_RequirementType() { }

	[CompilerGenerated]
	private ActivationPlacementStyle get_RewardsPlacement() { }

	[CompilerGenerated]
	private void set_ClaimTextLocId(string value) { }

	[CompilerGenerated]
	private void set_DecayItem(List<String> value) { }

	[CompilerGenerated]
	private void set_DecayLogic(string value) { }

	[CompilerGenerated]
	private void set_DecayProducerType(string value) { }

	[CompilerGenerated]
	private void set_DecayRandomMarker(string value) { }

	[CompilerGenerated]
	private void set_DecayWeight(List<Int32> value) { }

	[CompilerGenerated]
	private void set_HideProgressBar(bool value) { }

	[CompilerGenerated]
	private void set_ItemKey(string value) { }

	[CompilerGenerated]
	private void set_OrderPool(string value) { }

	[CompilerGenerated]
	private void set_RequirementRandomMarker(string value) { }

	[CompilerGenerated]
	private void set_RequirementType(string value) { }

	[CompilerGenerated]
	private void set_RewardsPlacement(ActivationPlacementStyle value) { }

	public override OrderFeatures ToConfigData(IProducerFactory producerFactory) { }

}

