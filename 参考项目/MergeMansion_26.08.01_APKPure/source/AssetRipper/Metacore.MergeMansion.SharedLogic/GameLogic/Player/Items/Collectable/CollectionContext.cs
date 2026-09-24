using System;
using Code.GameLogic.GameEvents;
using Game.Logic;
using GameLogic.Config;
using GameLogic.Player.Board;
using GameLogic.Random;
using Metaplay.Core;

namespace GameLogic.Player.Items.Collectable
{
	public class CollectionContext : ICollectionContext, IGenerationContext
	{
		public Statistics Statistics => null;

		public WeightedDistributionStates DistributionStates => null;

		public SpawnFactoryState SpawnState => null;

		public RandomPCG Random => null;

		[Obsolete("use MergeMansionGameConfig instead")]
		public SharedGameConfig GameConfig => null;

		public IMergeMansionGameConfig MergeMansionGameConfig => null;

		public GarageCleanupEventModel GarageCleanupEventModel => null;

		public Wallet Wallet => null;

		public IPlayer Player { get; }

		public MergeBoard Board { get; }

		public CurrencySource AnalyticsContext { get; }

		public CollectionContext(IPlayer player, MergeBoard board, CurrencySource analyticsContext)
		{
		}
	}
}
