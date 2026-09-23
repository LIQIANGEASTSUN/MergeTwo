using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Spawning
{
	[MetaSerializableDerived(1)]
	public class SpawnCycle : ISpawnCycle
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration SpawnDelay { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration FirstCycleStartDelay { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDuration DelayBetweenCycles { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int HowManyAreGeneratedPerSpawn { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int SpawnAmountInCycle { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int HowManyCycles { get; set; }

		public SpawnCycle()
		{
		}

		public SpawnCycle(long firstCycleStartDelay, int spawnAmountInCycle, int howManyAreGeneratedInCycle, long spawnDelay, long delayBetweenCycles, int howManyCycles)
		{
		}

		public SpawnCycle(MetaDuration firstCycleStartDelay, int spawnAmountInCycle, int howManyAreGeneratedInCycle, MetaDuration spawnDelay, MetaDuration delayBetweenCycles, int howManyCycles)
		{
		}

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

		public bool Equals(SpawnCycle other)
		{
			return false;
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
