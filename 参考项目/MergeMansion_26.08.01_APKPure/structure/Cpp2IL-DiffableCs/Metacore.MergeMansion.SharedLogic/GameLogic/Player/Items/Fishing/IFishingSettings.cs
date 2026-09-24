namespace GameLogic.Player.Items.Fishing;

public interface IFishingSettings
{

	public Int32[] FishWeightCategoryOdds
	{
		 get { } //Length: 0
	}

	public Int32[] FishWeightCategorySizePercentages
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, Int32> NonFishWaterDropletCounts
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<Int32, Int32> SmallFishWaterDropletCounts
	{
		 get { } //Length: 0
	}

	public Int32[] get_FishWeightCategoryOdds() { }

	public Int32[] get_FishWeightCategorySizePercentages() { }

	public IReadOnlyDictionary<Int32, Int32> get_NonFishWaterDropletCounts() { }

	public IReadOnlyDictionary<Int32, Int32> get_SmallFishWaterDropletCounts() { }

	public void set_FishWeightCategorySizePercentages(Int32[] value) { }

}

