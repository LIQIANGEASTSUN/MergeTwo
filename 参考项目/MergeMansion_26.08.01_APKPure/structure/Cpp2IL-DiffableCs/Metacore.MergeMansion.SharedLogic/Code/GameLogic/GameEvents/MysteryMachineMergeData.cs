namespace Code.GameLogic.GameEvents;

public struct MysteryMachineMergeData
{
	public MysteryMachineMergeItemData ItemDataA; //Field offset: 0x0
	public MysteryMachineMergeItemData ItemDataB; //Field offset: 0x10
	public IMysteryMachineItem Result; //Field offset: 0x20
	public MysteryMachineMultiplierInfo ChainMultiplier; //Field offset: 0x28
	public int Direction; //Field offset: 0x30
	public int SpawnItemsQueueCount; //Field offset: 0x34

	public MysteryMachineMergeData(MysteryMachineMergeItemData itemDataA, MysteryMachineMergeItemData itemDataB, IMysteryMachineItem result, MysteryMachineMultiplierInfo chainMultiplier, int direction, int spawnItemsQueueCount) { }

}

