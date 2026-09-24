namespace Code.GameLogic.GameEvents;

public struct MysteryMachineMergeItemData
{
	public IMysteryMachineItem Item; //Field offset: 0x0
	public int ContainerItemsIndex; //Field offset: 0x8

	public MysteryMachineMergeItemData(IMysteryMachineItem item, int containerItemsIndex) { }

}

