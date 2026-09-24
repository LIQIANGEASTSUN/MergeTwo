namespace GameLogic.Player.Items;

public static class StorageActionMath
{

	[CompilerGenerated]
	internal static int <CalculateMergedChestLootQuantity>g__GetQuantityForCalculation|0_0(IChestFeatures features, IChestState state) { }

	private static int CalculateActivationHowManyToRoll(IActivationCycle activationCycle, CycleInfo cycleInfo) { }

	private static F64 CalculateActivationRollsLeftPercentage(IPlayer player, IMergeItem splitActivation, MetacoreTime splitTime) { }

	private static F64 CalculateChestRollsLeftPercentage(IPlayer player, IMergeItem splitChest, MetacoreTime splitTime) { }

	public static int CalculateMergedActivationLootQuantity(IActivationFeatures mergedFeatures, IActivationFeatures featuresA, StorageState stateA, CycleInfo cycleInfoA, IActivationFeatures featuresB, StorageState stateB, CycleInfo cycleInfoB, StorageActionType storageAction) { }

	public static int CalculateMergedChestLootQuantity(IChestFeatures mergedChestFeatures, IChestFeatures featuresA, IChestState stateA, IChestFeatures featuresB, IChestState stateB, StorageActionType storageAction) { }

	private static int CalculateMergedLootQuantity(int mergedHowManyToRoll, int howManyToRollA, int quantityA, int howManyToRollB, int quantityB, StorageActionType storageAction) { }

	private static void UpdateScissorsResultActivationLootQuantities(IPlayer player, IMergeItem splitActivation, MetacoreTime splitTime, IMergeItem activationA, IMergeItem activationB) { }

	private static void UpdateScissorsResultActivationLootQuantity(IPlayer player, IMergeItem resultActivation, F64 rollsLeftPercentage) { }

	private static void UpdateScissorsResultChestLootQuantities(IPlayer player, IMergeItem splitChest, MetacoreTime splitTime, IMergeItem chestA, IMergeItem chestB) { }

	private static void UpdateScissorsResultChestLootQuantity(IPlayer player, IMergeItem resultChest, F64 rollsLeftPercentage) { }

	public static void UpdateScissorsResultLootQuantities(IPlayer player, IMergeItem splitItem, MetacoreTime splitTime, IMergeItem itemA, IMergeItem itemB) { }

}

