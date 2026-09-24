using System.Collections.Generic;
using GameLogic.MergeChains;
using GameLogic.Player.Items.Chest;
using GameLogic.Player.Items.Collectable;
using GameLogic.Player.Items.Consumption.Logic;
using GameLogic.Player.Items.Order;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Items.Sink;
using GameLogic.Player.Items.Spawning;
using Metaplay.Core;

namespace GameLogic.Player.Items
{
	public static class ItemsConfigExtensions
	{
		public static IItemSpawner Create(this IProducerFactory factory, RollHistoryType rollHistoryType, string producerString)
		{
			return null;
		}

		public static ISpawnCycle ConstructSpawnCycle(string type, MetaDuration delay, MetaDuration firstDelay, MetaDuration delayBetween, int howManyPerGenerated, int amountInCycle, int howManyCycles)
		{
			return null;
		}

		public static LootRoller ConstructLootRoller(IEnumerable<(int, int)> odds, IEnumerable<int> forcedLoot, IEnumerable<int> staticLoot, string spawnId)
		{
			return null;
		}

		public static ICollectAction ConstructCollectAction(string actionType, IList<string> actionArgs)
		{
			return null;
		}

		public static CollectibleBoardEventCollectAction ParseCollectibleBoardEventCollectAction(IList<string> args)
		{
			return null;
		}

		public static AddSpawnAmountAction ParseAddSpawnAmountAction(IList<string> args)
		{
			return null;
		}

		public static ShortLeaderboardEventCollectAction ParseShortLeaderboardEventCollectAction(IList<string> args)
		{
			return null;
		}

		public static ICalculateCollectValue ConstructCalculator(IList<string> parts)
		{
			return null;
		}

		public static IOrderStateFactory ConstructOrderFactory(string type, MetaDictionary<int, int> scores, MetaDictionary<int, int> rewardItemIds, string activationType)
		{
			return null;
		}

		public static ISinkStateFactory ConstructFactory(string type, IEnumerable<string> scoresArgs, List<int> rewardItemIds, int finalScore, string rewardTag)
		{
			return null;
		}

		public static IConsumptionLogic ConstructLogic(string type, IEnumerable<string> arguments)
		{
			return null;
		}

		public static IMergeChainElement ConstructMergeChainElement(this string source)
		{
			return null;
		}
	}
}
