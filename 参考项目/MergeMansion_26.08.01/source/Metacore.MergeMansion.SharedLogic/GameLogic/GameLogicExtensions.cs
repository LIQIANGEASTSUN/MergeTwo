using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Player;

namespace GameLogic
{
	public static class GameLogicExtensions
	{
		public const int CoinsPerDiamond = 50;

		public static PlayerLevelData CurrentLevelData(this PlayerModel player)
		{
			return null;
		}

		public static PlayerLevelData NextLevelData(this PlayerModel player)
		{
			return null;
		}

		public static int MaxLevel(this PlayerModel player)
		{
			return 0;
		}

		public static PlayerLevelData LevelData(this PlayerModel player, int level)
		{
			return null;
		}

		public static int GetAmountOrOne(this IPlayerReward reward)
		{
			return 0;
		}

		public static Option<int> GetAmount(this IPlayerReward playerReward)
		{
			return default(Option<int>);
		}

		public static Option<int> GetAmountInternal(this IPlayerReward playerReward)
		{
			return default(Option<int>);
		}

		public static PlayerReward MostExpensive(this ICollection<PlayerReward> rewards, SharedGameConfig gameConfig)
		{
			return null;
		}

		public static int GemCost(this IPlayerReward playerReward, IMergeMansionGameConfig gameConfig)
		{
			return 0;
		}

		public static int GemCost(this IItemDefinition itemDefinition)
		{
			return 0;
		}

		public static int CoinsCost(this ItemDefinition itemDefinition)
		{
			return 0;
		}

		public static int CoinsToGems(this IMergeMansionGameConfig gameConfig, int coinsQuantity)
		{
			return 0;
		}

		public static int EnergyToGems(this IMergeMansionGameConfig gameConfig, int energyQuantity)
		{
			return 0;
		}

		public static MetaTime? MetaTimeMinIgnoreNone(MetaTime? a, MetaTime? b)
		{
			return null;
		}

		public static MetaTime? MetaTimeMaxPreferNone(MetaTime? a, MetaTime? b)
		{
			return null;
		}

		public static MetaTime AverageWith(this MetaTime origin, MetaTime other)
		{
			return default(MetaTime);
		}

		public static OfferPlacementId LegacyEventShopPlacement(this MergeBoardId mergeBoard)
		{
			return null;
		}

		public static List<IPlayerReward> CombineSimilarRewards(IPlayer player, IEnumerable<IPlayerReward> rewards)
		{
			return null;
		}

		public static bool RewardsCombined(IPlayer player, IPlayerReward newReward, IPlayerReward oldReward, out IPlayerReward result)
		{
			result = null;
			return false;
		}

		public static IList<T> InRandomOrder<T>(this IEnumerable<T> source, RandomPCG randomGenerator)
		{
			return null;
		}

		public static void RunActions(this PlayerModel player, IEnumerable<IDirectorAction> actions, IDirectorActionContext context = null)
		{
		}

		public static bool IsSuccess(this MetaActionResult result)
		{
			return false;
		}

		public static bool Between(int value, int? minValue, int? maxValue)
		{
			return false;
		}

		public static F64 F64Divide(this TimeSpan dividend, TimeSpan divisor)
		{
			return default(F64);
		}

		public static F32 Sum(this List<F32> numbers)
		{
			return default(F32);
		}
	}
}
