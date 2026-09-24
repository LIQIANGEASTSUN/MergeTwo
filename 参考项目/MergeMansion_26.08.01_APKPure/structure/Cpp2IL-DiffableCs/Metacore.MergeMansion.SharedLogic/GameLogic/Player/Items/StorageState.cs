namespace GameLogic.Player.Items;

[MetaSerializable]
public sealed class StorageState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private int currentAmount; //Field offset: 0x10

	public StorageState() { }

	public StorageState(int amountInContainer) { }

	public StorageState(IActivationFeatures mergedFeatures, IActivationFeatures featuresA, StorageState stateA, CycleInfo cycleInfoA, IActivationFeatures featuresB, StorageState stateB, CycleInfo cycleInfoB, StorageActionType storageAction) { }

	public StorageState(StorageState container1, StorageState container2) { }

	public int AddToContainerIfThereIsSpace(int howManyToAdd, int maxLimit) { }

	public int GetCurrentAmount() { }

	public bool IsFull(int maxLimit) { }

	public void SetCurrentAmount(int currentAmount) { }

	public int TryToTake(int howManyAreWanted) { }

}

