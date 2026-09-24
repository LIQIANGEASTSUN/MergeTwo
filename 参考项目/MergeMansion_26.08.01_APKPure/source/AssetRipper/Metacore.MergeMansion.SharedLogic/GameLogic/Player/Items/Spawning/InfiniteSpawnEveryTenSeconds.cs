using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Spawning
{
	[MetaSerializableDerived(2)]
	public class InfiniteSpawnEveryTenSeconds : ISpawnCycle
	{
		public static readonly MetaDuration spawnDelay;

		public static readonly MetaDuration firstCycleStartDelay;

		public static readonly MetaDuration delayBetweenCycles;

		public static readonly int howManyAreGeneratedPerSpawn;

		public static readonly int spawnAmountInCycle;

		public static readonly int howManyCycles;

		public MetaTime? CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, MetaTime calculationStartTimestamp, MetaDuration timeAlreadySpend, SpawnState spawnState, F32 boostFactor, MetaTime currentTime)
		{
			return null;
		}

		public void UpdateSpawnCycleData(SpawnState spawnState)
		{
		}

		public int GetSpawnAmountInCycle()
		{
			return 0;
		}

		public int GetItemAmountInSpawn()
		{
			return 0;
		}

		public MetaDuration GetSpawnDelay()
		{
			return default(MetaDuration);
		}

		public MetaDuration GetFirstCycleDelay()
		{
			return default(MetaDuration);
		}

		public MetaDuration GetCycleDelay()
		{
			return default(MetaDuration);
		}

		public int HowManyAreGeneratedToStorage()
		{
			return 0;
		}

		public int InitialCycles()
		{
			return 0;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
