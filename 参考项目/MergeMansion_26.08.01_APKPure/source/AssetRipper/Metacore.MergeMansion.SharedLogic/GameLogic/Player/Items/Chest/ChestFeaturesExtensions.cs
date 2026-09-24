using GameLogic.Player.Items.Merging;
using GameLogic.Random;
using Metaplay.Core;

namespace GameLogic.Player.Items.Chest
{
	public static class ChestFeaturesExtensions
	{
		public static IChestState Combine(this IChestFeatures chestFeatures, IChestFeatures sourceFeatures, IChestState sourceState, IChestFeatures targetFeatures, IChestState targetState, StorageActionType storageAction, IPlayer player, MetaTime timestamp, IGenerationContext generationContext)
		{
			return null;
		}

		public static IChestState FromExisting(this IChestFeatures chestFeatures)
		{
			return null;
		}
	}
}
