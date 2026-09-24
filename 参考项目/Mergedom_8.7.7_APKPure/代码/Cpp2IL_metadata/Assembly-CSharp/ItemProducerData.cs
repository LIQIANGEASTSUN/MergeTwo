//Type is in global namespace

public class ItemProducerData
{
	internal enum ActionToProduce : int
	{
		Tap = 0,
		Merge = 1,
		Auto = 2,
	}

	public int RechargeCostIncreasePerSeconds; //Field offset: 0x10
	public int RechargeCost; //Field offset: 0x14
	public int StartDropCapacity; //Field offset: 0x18
	public int MaxDropCapacity; //Field offset: 0x1C
	public int DropCapacityIncreasePerCharge; //Field offset: 0x20
	public bool StartRechargeOnInit; //Field offset: 0x24
	public int MaxRechargeCount; //Field offset: 0x28
	public int RechargeTimeInSeconds; //Field offset: 0x2C
	public ActionToProduce ActionToProduceType; //Field offset: 0x30
	public bool PlayThrowAnimOnTransformedItem; //Field offset: 0x34
	public bool TransformOnDispose; //Field offset: 0x35
	public ItemData ItemDataToTransform; //Field offset: 0x38
	public int ItemLevelToTransform; //Field offset: 0x40
	public bool ProduceItemLocked; //Field offset: 0x44
	public bool ProduceWithProbability; //Field offset: 0x45
	public bool ProduceInOrder; //Field offset: 0x46
	public bool ProduceInOrderThenProbability; //Field offset: 0x47
	public List<ItemToProduce> ItemsToProduce; //Field offset: 0x48

	public ItemProducerData() { }

}

