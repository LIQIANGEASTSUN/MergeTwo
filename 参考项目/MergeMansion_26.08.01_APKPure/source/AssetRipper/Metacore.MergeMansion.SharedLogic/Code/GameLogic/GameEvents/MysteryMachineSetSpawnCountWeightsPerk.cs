using System.Collections.Generic;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(3)]
	public class MysteryMachineSetSpawnCountWeightsPerk : IMysteryMachinePerk
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<int> SpawnCountWeights { get; set; }

		public MysteryMachineSetSpawnCountWeightsPerk()
		{
		}

		public MysteryMachineSetSpawnCountWeightsPerk(List<int> spawnCountWeights)
		{
		}
	}
}
