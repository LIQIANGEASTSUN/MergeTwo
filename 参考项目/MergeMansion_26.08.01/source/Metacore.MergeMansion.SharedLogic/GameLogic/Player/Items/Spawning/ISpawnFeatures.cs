using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using GameLogic.Random;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Spawning
{
	public interface ISpawnFeatures
	{
		IItemSpawner Spawn { get; }

		IPlacement Placement { get; }

		ISpawnCycle SpawnCycle { get; }

		int StorageMax { get; }

		IItemProducer DecayProducer { get; }

		ItemVisibility SpawnVisibility { get; }

		bool Spawnable { get; }

		bool DecaysWhenCyclesAreDone { get; }

		F64 TimeSkipPriceGems(IGenerationContext context);

		IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext generationContext, IMergeItem relatedMergeItem, IBoard mergeBoard, IPlayer player);

		IItemDefinition GetSpawnItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null);
	}
}
