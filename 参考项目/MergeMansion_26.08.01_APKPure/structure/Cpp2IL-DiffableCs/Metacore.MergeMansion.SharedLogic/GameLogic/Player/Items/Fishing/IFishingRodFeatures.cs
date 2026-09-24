namespace GameLogic.Player.Items.Fishing;

public interface IFishingRodFeatures
{

	public Int32[] FishWeightCategoryOddsOverrides
	{
		 get { } //Length: 0
	}

	public Int32[] FishWeightCategorySizePercentagesOverrides
	{
		 get { } //Length: 0
	}

	public bool IsFishingRod
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<IItemOdds> ItemOdds
	{
		 get { } //Length: 0
	}

	public IPlacement Placement
	{
		 get { } //Length: 0
	}

	public FishingRodRarity Rarity
	{
		 get { } //Length: 0
	}

	public int WaterDropletOverride
	{
		 get { } //Length: 0
	}

	public Int32[] get_FishWeightCategoryOddsOverrides() { }

	public Int32[] get_FishWeightCategorySizePercentagesOverrides() { }

	public bool get_IsFishingRod() { }

	public IReadOnlyList<IItemOdds> get_ItemOdds() { }

	public IPlacement get_Placement() { }

	public FishingRodRarity get_Rarity() { }

	public int get_WaterDropletOverride() { }

}

