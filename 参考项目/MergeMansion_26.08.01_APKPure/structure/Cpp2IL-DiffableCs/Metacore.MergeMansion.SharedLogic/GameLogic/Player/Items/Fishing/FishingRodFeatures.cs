namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class FishingRodFeatures : IFishingRodFeatures
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ValueTuple`2<Int32, Int32>, ItemOdds> <>9__31_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemOdds <.ctor>b__31_0(ValueTuple<Int32, Int32> itemWeightPair) { }

	}

	public static readonly FishingRodFeatures NoFishingRodFeatures; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsFishingRod>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<ItemOdds> <ItemOdds>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private IPlacement <Placement>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private FishingRodRarity <Rarity>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private Int32[] <FishWeightCategoryOddsOverrides>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private Int32[] <FishWeightCategorySizePercentagesOverrides>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <WaterDropletOverride>k__BackingField; //Field offset: 0x40

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override Int32[] FishWeightCategoryOddsOverrides
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override Int32[] FishWeightCategorySizePercentagesOverrides
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyList<IItemOdds> GameLogic.Player.Items.Fishing.IFishingRodFeatures.ItemOdds
	{
		private get { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsFishingRod
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private List<ItemOdds> ItemOdds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override IPlacement Placement
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override FishingRodRarity Rarity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private override int WaterDropletOverride
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static FishingRodFeatures() { }

	public FishingRodFeatures(IEnumerable<ValueTuple`2<Int32, Int32>> itemWeightPairs, FishingRodRarity rarity, string fishWeightCategoryOddsOverrides, string fishWeightCategorySizePercentagesOverrides, string waterDropletOverride) { }

	private FishingRodFeatures() { }

	private FishingRodFeatures(bool isFishingRod, List<ItemOdds> itemOdds, IPlacement placement, FishingRodRarity rarity, string fishWeightCategoryOddsOverrides, string fishWeightCategorySizePercentagesOverrides, string waterDropletOverride) { }

	private override IReadOnlyList<IItemOdds> GameLogic.Player.Items.Fishing.IFishingRodFeatures.get_ItemOdds() { }

	[CompilerGenerated]
	public override Int32[] get_FishWeightCategoryOddsOverrides() { }

	[CompilerGenerated]
	public override Int32[] get_FishWeightCategorySizePercentagesOverrides() { }

	[CompilerGenerated]
	public override bool get_IsFishingRod() { }

	[CompilerGenerated]
	public List<ItemOdds> get_ItemOdds() { }

	[CompilerGenerated]
	public override IPlacement get_Placement() { }

	[CompilerGenerated]
	public override FishingRodRarity get_Rarity() { }

	[CompilerGenerated]
	public override int get_WaterDropletOverride() { }

	[CompilerGenerated]
	private void set_FishWeightCategoryOddsOverrides(Int32[] value) { }

	[CompilerGenerated]
	private void set_FishWeightCategorySizePercentagesOverrides(Int32[] value) { }

	[CompilerGenerated]
	private void set_IsFishingRod(bool value) { }

	[CompilerGenerated]
	private void set_ItemOdds(List<ItemOdds> value) { }

	[CompilerGenerated]
	private void set_Placement(IPlacement value) { }

	[CompilerGenerated]
	private void set_Rarity(FishingRodRarity value) { }

	[CompilerGenerated]
	private void set_WaterDropletOverride(int value) { }

}

