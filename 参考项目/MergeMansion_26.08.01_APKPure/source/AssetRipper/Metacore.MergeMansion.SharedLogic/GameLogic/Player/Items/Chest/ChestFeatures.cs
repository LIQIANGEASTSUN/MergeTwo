using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using GameLogic.Fallbacks;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Chest
{
	[MetaSerializable]
	public sealed class ChestFeatures : IChestFeatures
	{
		public const string LootRollerPrefix = "loot";

		public static readonly ChestFeatures NoChest;

		[IgnoreDataMember]
		MetacoreDuration IChestFeatures.OpenDuration => default(MetacoreDuration);

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsChest { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration OpenDuration { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int HowManyToRoll { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public IItemProducer LootProducer { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public string HintLocId { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public FallbackPlayerRewardId FallbackChest { get; set; }

		public Option<FallbackPlayerRewardId> FallbackChestIdOption => default(Option<FallbackPlayerRewardId>);

		public ChestFeatures()
		{
		}

		public ChestFeatures(bool chest, MetaDuration duration, List<(int, int)> itemPairs, List<int> forcedItems, int howMany, int itemId, Option<FallbackPlayerRewardId> fallbackChestIdOption)
		{
		}

		public ChestFeatures(bool chest, MetaDuration duration, List<int> staticItems, Option<FallbackPlayerRewardId> fallbackChestIdOption)
		{
		}

		public ChestFeatures(MetaDuration openDuration, int howManyToRoll, IItemProducer lootProducer, string hintLocId, Option<FallbackPlayerRewardId> fallbackChestIdOption)
		{
		}

		public static IItemSpawner GuessProducer(int markerItem, List<(int, int)> itemPairs, IReadOnlyCollection<int> forcedItems)
		{
			return null;
		}

		public bool IsInstantlyOpenedChest()
		{
			return false;
		}

		public Option<IPlayerReward> GetFallbackReward(IPlayer player)
		{
			return default(Option<IPlayerReward>);
		}
	}
}
