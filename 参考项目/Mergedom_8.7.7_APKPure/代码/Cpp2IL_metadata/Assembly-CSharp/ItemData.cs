//Type is in global namespace

[CreateAssetMenu(fileName = "ItemData", menuName = "_GAME/ItemData", order = 1)]
public class ItemData : ScriptableObject
{
	public string UniqueKey; //Field offset: 0x18
	public ItemType ItemType; //Field offset: 0x20
	public ItemInfoProducerType ItemInfoProducerType; //Field offset: 0x24
	public string Name; //Field offset: 0x28
	public int Id; //Field offset: 0x30
	public int Difficulty; //Field offset: 0x34
	public bool IsSaleable; //Field offset: 0x38
	public bool ConsumeEnergyOnTap; //Field offset: 0x39
	public bool ShowSellButtonWhileRecharging; //Field offset: 0x3A
	public int BaseUnlockGoldCost; //Field offset: 0x3C
	public List<ItemData> BubbleProduceItemData; //Field offset: 0x40
	public List<Int32> BubbleProduceProbabilities; //Field offset: 0x48
	public List<Int32> BubbleProduceItemLevel; //Field offset: 0x50
	public List<ItemLevelData> ItemLevelsData; //Field offset: 0x58
	public DefaultTextTypes DefaultTextType; //Field offset: 0x60
	public ProducerTextTypes ProducerTextType; //Field offset: 0x64
	public RechargingProducerTextTypes RechargingProducerTextType; //Field offset: 0x68
	public MaxLevelTextTypes MaxLevelTextType; //Field offset: 0x6C
	public MaxLevelRechargingProducerTextTypes MaxLevelRechargingProducerTextType; //Field offset: 0x70

	public ItemData() { }

	public virtual string ToString() { }

}

