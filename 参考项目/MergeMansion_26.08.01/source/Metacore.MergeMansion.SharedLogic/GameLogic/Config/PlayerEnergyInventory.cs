using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Config
{
	[MetaSerializableDerived(1077)]
	public class PlayerEnergyInventory : TypedPlayerPropertyId<long>
	{
		public static readonly int INFINITE_ENERGY_MULTIPLIER;

		[MetaMember(1, MetaMemberFlags.None)]
		public EnergyType EnergyType { get; set; }

		public override string DisplayName => null;

		public PlayerEnergyInventory()
		{
		}

		public PlayerEnergyInventory(EnergyType energyType)
		{
		}

		public override long GetTypedValueForPlayer(IPlayerModelBase player)
		{
			return 0L;
		}

		public static MetaDictionary<EnergyType, long> CalculateNonexact(PlayerModel playerModel, IEnumerable<EnergyType> energyTypes)
		{
			return null;
		}

		public static void TryAddItemEnergy(MergeItem mergeItem, IReadOnlyDictionary<int, (EnergyType, long)> energyItemsAsAmounts, MetaDictionary<EnergyType, long> result)
		{
		}

		public static void TryAddItemEnergy(int itemId, IReadOnlyDictionary<int, (EnergyType energyType, long amount)> energyItemsAsAmounts, MetaDictionary<EnergyType, long> result)
		{
		}

		public static long GetActiveInfiniteEnergy(EnergyType energyType, PlayerModel playerModel)
		{
			return 0L;
		}

		public static IReadOnlyDictionary<int, (EnergyType, long)> ParseEnergyItemsAsAmounts(IMergeMansionGameConfig gameConfig)
		{
			return null;
		}
	}
}
