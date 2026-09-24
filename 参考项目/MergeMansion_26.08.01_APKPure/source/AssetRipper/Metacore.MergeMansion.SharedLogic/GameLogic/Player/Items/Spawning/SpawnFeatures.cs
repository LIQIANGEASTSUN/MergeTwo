using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using GameLogic.Random;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Spawning
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 8 })]
	public sealed class SpawnFeatures : ISpawnFeatures
	{
		public static readonly SpawnFeatures NoSpawn;

		[MetaMember(1, MetaMemberFlags.None)]
		public IItemSpawner Spawn { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IPlacement Placement { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public ISpawnCycle SpawnCycle { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int StorageMax { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public IItemProducer DecayProducer { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public ItemVisibility SpawnVisibility { get; set; }

		public bool Spawnable => false;

		public bool DecaysWhenCyclesAreDone => false;

		public SpawnFeatures()
		{
		}

		public SpawnFeatures(IItemSpawner spawn, IPlacement placement, ISpawnCycle cycle, int howManyCanStore, IItemProducer decayProducer, ItemVisibility itemVisibility = ItemVisibility.Visible)
		{
		}

		public static IItemSpawner CreateProducer(int production)
		{
			return null;
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		public IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext generationContext, IMergeItem relatedMergeItem, IBoard mergeBoard, IPlayer player)
		{
			return null;
		}

		public IItemDefinition GetSpawnItem(IGenerationContext generationContext, ProducerContext producerContext, IEnumerable<IItemDefinition> allowedItems = null)
		{
			return null;
		}
	}
}
