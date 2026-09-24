namespace GameLogic.Player.Items.Fishing;

public class FishingRodFeaturesSource : IItemConfigPart<FishingRodFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public List<String> Item; //Field offset: 0x18
	public List<Int32> Weight; //Field offset: 0x20
	public FishingRodRarity Rarity; //Field offset: 0x28
	public string FishWeightCategoryOddsOverrides; //Field offset: 0x30
	public string FishWeightCategorySizePercentagesOverrides; //Field offset: 0x38
	public string WaterDropletOverride; //Field offset: 0x40

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public FishingRodFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override FishingRodFeatures ToConfigData(IProducerFactory producerFactory) { }

}

