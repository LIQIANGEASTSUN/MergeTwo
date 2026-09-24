//Type is in global namespace

public class BoardSlotData
{
	public bool IsLocked; //Field offset: 0x10
	public int ItemId; //Field offset: 0x14
	public bool IsItemLocked; //Field offset: 0x18
	public int ItemLevel; //Field offset: 0x1C
	public int BubbleItemID; //Field offset: 0x20
	public int BubbleItemLevel; //Field offset: 0x24
	public string BubbleActivateTime; //Field offset: 0x28
	public List<ActiveItemProducerData> ProducersData; //Field offset: 0x30

	public BoardSlotData() { }

	public BoardSlotData Clone() { }

	public void Reset() { }

	public virtual string ToString() { }

}

