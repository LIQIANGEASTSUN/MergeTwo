using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Spawning
{
	[MetaSerializable]
	public interface ISpawnCycle
	{
		MetaTime? CalculateNextEstimatedStorageFillTime(IPlayer player, IItemDefinition itemDefinition, MetaTime calculationStartTimestamp, MetaDuration timeAlreadySpend, SpawnState spawnState, F32 boostFactor, MetaTime currentTime);

		void UpdateSpawnCycleData(SpawnState spawnState);

		int GetSpawnAmountInCycle();

		int GetItemAmountInSpawn();

		MetaDuration GetSpawnDelay();

		MetaDuration GetFirstCycleDelay();

		MetaDuration GetCycleDelay();

		int HowManyAreGeneratedToStorage();

		int InitialCycles();
	}
}
