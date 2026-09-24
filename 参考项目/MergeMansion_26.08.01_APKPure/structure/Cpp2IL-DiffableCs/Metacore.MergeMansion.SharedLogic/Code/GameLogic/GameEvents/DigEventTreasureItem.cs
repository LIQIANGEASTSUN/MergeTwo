namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class DigEventTreasureItem
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public string TreasureName; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"x", "y"})]
	public List<ValueTuple`2<Int32, Int32>> Shape; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	public F32 Weight; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	public bool IsShiny; //Field offset: 0x24
	[MetaMember(5, MetaMemberFlags::None (0))]
	public string AssetId; //Field offset: 0x28

	public DigEventTreasureItem() { }

	public DigEventTreasureItem(string treasureName, List<ValueTuple`2<Int32, Int32>> shape, F32 weight, string assetId, bool isShiny = false) { }

}

