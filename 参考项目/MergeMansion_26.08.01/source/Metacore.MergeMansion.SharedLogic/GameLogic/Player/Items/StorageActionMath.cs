using GameLogic.Config.Types;
using GameLogic.Player.Items.Activation;
using GameLogic.Player.Items.Chest;
using GameLogic.Player.Items.Merging;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items
{
	public static class StorageActionMath
	{
		public static int CalculateMergedChestLootQuantity(IChestFeatures mergedChestFeatures, IChestFeatures featuresA, IChestState stateA, IChestFeatures featuresB, IChestState stateB, StorageActionType storageAction)
		{
			return 0;
		}

		public static int CalculateMergedActivationLootQuantity(IActivationFeatures mergedFeatures, IActivationFeatures featuresA, StorageState stateA, CycleInfo cycleInfoA, IActivationFeatures featuresB, StorageState stateB, CycleInfo cycleInfoB, StorageActionType storageAction)
		{
			return 0;
		}

		public static void UpdateScissorsResultLootQuantities(IPlayer player, IMergeItem splitItem, MetacoreTime splitTime, IMergeItem itemA, IMergeItem itemB)
		{
		}

		public static int CalculateMergedLootQuantity(int mergedHowManyToRoll, int howManyToRollA, int quantityA, int howManyToRollB, int quantityB, StorageActionType storageAction)
		{
			return 0;
		}

		public static void UpdateScissorsResultChestLootQuantities(IPlayer player, IMergeItem splitChest, MetacoreTime splitTime, IMergeItem chestA, IMergeItem chestB)
		{
		}

		public static F64 CalculateChestRollsLeftPercentage(IPlayer player, IMergeItem splitChest, MetacoreTime splitTime)
		{
			return default(F64);
		}

		public static void UpdateScissorsResultChestLootQuantity(IPlayer player, IMergeItem resultChest, F64 rollsLeftPercentage)
		{
		}

		public static void UpdateScissorsResultActivationLootQuantities(IPlayer player, IMergeItem splitActivation, MetacoreTime splitTime, IMergeItem activationA, IMergeItem activationB)
		{
		}

		public static void UpdateScissorsResultActivationLootQuantity(IPlayer player, IMergeItem resultActivation, F64 rollsLeftPercentage)
		{
		}

		public static F64 CalculateActivationRollsLeftPercentage(IPlayer player, IMergeItem splitActivation, MetacoreTime splitTime)
		{
			return default(F64);
		}

		public static int CalculateActivationHowManyToRoll(IActivationCycle activationCycle, CycleInfo cycleInfo)
		{
			return 0;
		}
	}
}
