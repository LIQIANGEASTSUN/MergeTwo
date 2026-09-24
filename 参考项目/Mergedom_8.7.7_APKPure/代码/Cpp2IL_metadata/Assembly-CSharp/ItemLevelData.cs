//Type is in global namespace

public class ItemLevelData
{
	public string Name; //Field offset: 0x10
	public Sprite Asset; //Field offset: 0x18
	public Sprite UIAsset; //Field offset: 0x20
	public int ProduceBubblePercentage; //Field offset: 0x28
	public int UnlockBubbleCost; //Field offset: 0x2C
	public int BubbleGoldConversionAmount; //Field offset: 0x30
	public bool OpenRarePopupOnSell; //Field offset: 0x34
	public bool IsProducer; //Field offset: 0x35
	public List<ItemProducerData> ProducersData; //Field offset: 0x38

	public ItemLevelData() { }

}

