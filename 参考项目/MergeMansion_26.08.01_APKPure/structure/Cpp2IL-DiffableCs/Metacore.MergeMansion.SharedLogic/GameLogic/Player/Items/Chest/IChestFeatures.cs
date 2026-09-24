namespace GameLogic.Player.Items.Chest;

public interface IChestFeatures
{

	public Option<FallbackPlayerRewardId> FallbackChestIdOption
	{
		 get { } //Length: 0
	}

	public string HintLocId
	{
		 get { } //Length: 0
	}

	public int HowManyToRoll
	{
		 get { } //Length: 0
	}

	public bool IsChest
	{
		 get { } //Length: 0
	}

	public IItemProducer LootProducer
	{
		 get { } //Length: 0
	}

	public MetacoreDuration OpenDuration
	{
		 get { } //Length: 0
	}

	public Option<FallbackPlayerRewardId> get_FallbackChestIdOption() { }

	public string get_HintLocId() { }

	public int get_HowManyToRoll() { }

	public bool get_IsChest() { }

	public IItemProducer get_LootProducer() { }

	public MetacoreDuration get_OpenDuration() { }

	public Option<IPlayerReward> GetFallbackReward(IPlayer player) { }

	public bool IsInstantlyOpenedChest() { }

}

