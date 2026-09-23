using System;
using Code.GameLogic.GameEvents;
using Game.Logic;
using GameLogic.Config;
using GameLogic.Player;
using Metaplay.Core;

namespace GameLogic.Random
{
	public interface IGenerationContext
	{
		Statistics Statistics { get; }

		WeightedDistributionStates DistributionStates { get; }

		SpawnFactoryState SpawnState { get; }

		RandomPCG Random { get; }

		[Obsolete("use MergeMansionGameConfig instead")]
		SharedGameConfig GameConfig { get; }

		IMergeMansionGameConfig MergeMansionGameConfig { get; }

		GarageCleanupEventModel GarageCleanupEventModel { get; }
	}
}
