namespace GameLogic.Player.Items.Bubble;

public interface IBubbleFeatures
{

	public MetacoreDuration BubbleDuration
	{
		 get { } //Length: 0
	}

	public List<BubbleVariationId> BubbleVariants
	{
		 get { } //Length: 0
	}

	public ValueTuple<Currencies, Int32> OpenCost
	{
		 get { } //Length: 0
	}

	public Currencies OpenCurrency
	{
		 get { } //Length: 0
	}

	public int OpenQuantity
	{
		 get { } //Length: 0
	}

	public int SpawnOdds
	{
		 get { } //Length: 0
	}

	public MetacoreDuration get_BubbleDuration() { }

	public List<BubbleVariationId> get_BubbleVariants() { }

	public ValueTuple<Currencies, Int32> get_OpenCost() { }

	public Currencies get_OpenCurrency() { }

	public int get_OpenQuantity() { }

	public int get_SpawnOdds() { }

	public MetacoreDuration GetBubbleDuration(IPlayer player, BubbleVariationId variationId) { }

	public ValueTuple<Currencies, Int32> GetOpenCost(IPlayer player, BubbleVariationId variationId) { }

	public IItemDefinition GetReplacementItem(IPlayer player, BubbleVariationId variationId) { }

	public int GetSpawnOdds(IPlayer player) { }

	public bool TryGetRelevantBubbleVariant(IPlayer player, out BubbleVariantsDefinition variationDefinition) { }

}

