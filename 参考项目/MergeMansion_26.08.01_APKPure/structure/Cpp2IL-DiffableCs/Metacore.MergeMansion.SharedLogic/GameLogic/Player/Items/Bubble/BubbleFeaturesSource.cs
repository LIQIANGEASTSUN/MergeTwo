namespace GameLogic.Player.Items.Bubble;

public class BubbleFeaturesSource : IItemConfigPart<BubbleFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public MetaDuration BubbleDuration; //Field offset: 0x18
	public Currencies OpenCurrency; //Field offset: 0x20
	public int OpenCost; //Field offset: 0x24
	public int SpawnOdds; //Field offset: 0x28
	public string ReplacementItem; //Field offset: 0x30
	public List<BubbleVariationId> BubbleVariants; //Field offset: 0x38

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public BubbleFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override BubbleFeatures ToConfigData(IProducerFactory producerFactory) { }

}

