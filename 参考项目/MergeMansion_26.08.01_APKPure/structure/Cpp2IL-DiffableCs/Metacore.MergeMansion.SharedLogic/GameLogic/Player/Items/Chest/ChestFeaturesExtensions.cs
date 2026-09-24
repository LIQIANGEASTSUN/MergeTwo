namespace GameLogic.Player.Items.Chest;

[Extension]
public static class ChestFeaturesExtensions
{

	[Extension]
	public static IChestState Combine(IChestFeatures chestFeatures, IChestFeatures sourceFeatures, IChestState sourceState, IChestFeatures targetFeatures, IChestState targetState, StorageActionType storageAction, IPlayer player, MetaTime timestamp, IGenerationContext generationContext) { }

	[Extension]
	public static IChestState FromExisting(IChestFeatures chestFeatures) { }

}

