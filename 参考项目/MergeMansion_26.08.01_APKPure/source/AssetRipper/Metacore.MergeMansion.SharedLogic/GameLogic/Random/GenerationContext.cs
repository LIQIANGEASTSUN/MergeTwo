using System;
using Code.GameLogic.GameEvents;
using Game.Logic;
using GameLogic.Config;
using GameLogic.Player;
using Metaplay.Core;

namespace GameLogic.Random
{
	public class GenerationContext : IGenerationContext
	{
		public Statistics Statistics { get; }

		public WeightedDistributionStates DistributionStates { get; }

		public SpawnFactoryState SpawnState { get; }

		public RandomPCG Random { get; }

		[Obsolete("use MergeMansionGameConfig instead")]
		public SharedGameConfig GameConfig { get; }

		public IMergeMansionGameConfig MergeMansionGameConfig { get; }

		public GarageCleanupEventModel GarageCleanupEventModel { get; set; }

		public GenerationContext(WeightedDistributionStates distributionStates, SpawnFactoryState spawnState, RandomPCG random, Statistics statistics, IMergeMansionGameConfig gameConfig, GarageCleanupEventModel garageCleanupEventModel = null)
		{
		}

		public GenerationContext(IPlayer player)
		{
		}

		public GenerationContext(PlayerModel playerModel)
		{
		}

		public void InitGarageCleanupEventModel(PlayerModel playerModel)
		{
		}
	}
}
