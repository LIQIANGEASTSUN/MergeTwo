namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class FishingSettings : GameConfigKeyValue<FishingSettings>, IValidatable, IFishingSettings
{
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <SmallFishWaterDropletCounts>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDictionary<Int32, Int32> <NonFishWaterDropletCounts>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Int32[] <FishWeightCategoryOdds>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private Int32[] <FishWeightCategorySizePercentages>k__BackingField; //Field offset: 0x28

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override Int32[] FishWeightCategoryOdds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public override Int32[] FishWeightCategorySizePercentages
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyDictionary<Int32, Int32> GameLogic.Player.Items.Fishing.IFishingSettings.NonFishWaterDropletCounts
	{
		private get { } //Length: 8
	}

	[IgnoreDataMember]
	private override IReadOnlyDictionary<Int32, Int32> GameLogic.Player.Items.Fishing.IFishingSettings.SmallFishWaterDropletCounts
	{
		private get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDictionary<Int32, Int32> NonFishWaterDropletCounts
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaDictionary<Int32, Int32> SmallFishWaterDropletCounts
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public FishingSettings() { }

	private override IReadOnlyDictionary<Int32, Int32> GameLogic.Player.Items.Fishing.IFishingSettings.get_NonFishWaterDropletCounts() { }

	private override IReadOnlyDictionary<Int32, Int32> GameLogic.Player.Items.Fishing.IFishingSettings.get_SmallFishWaterDropletCounts() { }

	[CompilerGenerated]
	public override Int32[] get_FishWeightCategoryOdds() { }

	[CompilerGenerated]
	public override Int32[] get_FishWeightCategorySizePercentages() { }

	[CompilerGenerated]
	public MetaDictionary<Int32, Int32> get_NonFishWaterDropletCounts() { }

	[CompilerGenerated]
	public MetaDictionary<Int32, Int32> get_SmallFishWaterDropletCounts() { }

	[CompilerGenerated]
	private void set_FishWeightCategoryOdds(Int32[] value) { }

	[CompilerGenerated]
	public override void set_FishWeightCategorySizePercentages(Int32[] value) { }

	[CompilerGenerated]
	private void set_NonFishWaterDropletCounts(MetaDictionary<Int32, Int32> value) { }

	[CompilerGenerated]
	private void set_SmallFishWaterDropletCounts(MetaDictionary<Int32, Int32> value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

