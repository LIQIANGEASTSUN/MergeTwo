namespace Code.GameLogic.GameEvents
{
	public struct MysteryMachineMergeItemData
	{
		public IMysteryMachineItem Item;

		public int ContainerItemsIndex;

		public MysteryMachineMergeItemData(IMysteryMachineItem item, int containerItemsIndex)
		{
			Item = null;
			ContainerItemsIndex = 0;
		}
	}
}
