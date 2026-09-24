namespace Code.GameLogic.GameEvents
{
	public struct MysteryMachineMergeData
	{
		public MysteryMachineMergeItemData ItemDataA;

		public MysteryMachineMergeItemData ItemDataB;

		public IMysteryMachineItem Result;

		public MysteryMachineMultiplierInfo ChainMultiplier;

		public int Direction;

		public int SpawnItemsQueueCount;

		public MysteryMachineMergeData(MysteryMachineMergeItemData itemDataA, MysteryMachineMergeItemData itemDataB, IMysteryMachineItem result, MysteryMachineMultiplierInfo chainMultiplier, int direction, int spawnItemsQueueCount)
		{
			ItemDataA = default(MysteryMachineMergeItemData);
			ItemDataB = default(MysteryMachineMergeItemData);
			Result = null;
			ChainMultiplier = null;
			Direction = 0;
			SpawnItemsQueueCount = 0;
		}
	}
}
