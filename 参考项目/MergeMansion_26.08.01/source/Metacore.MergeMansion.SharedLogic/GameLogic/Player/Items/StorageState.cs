using System;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Merging;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public sealed class StorageState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public int currentAmount;

		public StorageState()
		{
		}

		public StorageState(int amountInContainer)
		{
		}

		public StorageState(IActivationFeatures mergedFeatures, IActivationFeatures featuresA, StorageState stateA, CycleInfo cycleInfoA, IActivationFeatures featuresB, StorageState stateB, CycleInfo cycleInfoB, StorageActionType storageAction)
		{
		}

		public StorageState(StorageState container1, StorageState container2)
		{
		}

		public void SetCurrentAmount(int currentAmount)
		{
		}

		public int TryToTake(int howManyAreWanted)
		{
			return 0;
		}

		public int AddToContainerIfThereIsSpace(int howManyToAdd, int maxLimit)
		{
			return 0;
		}

		public int GetCurrentAmount()
		{
			return 0;
		}

		public bool IsFull(int maxLimit)
		{
			return false;
		}
	}
}
