using System;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Game.Logic
{
	[MetaSerializable]
	public class SpawnFactoryState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<string, int> currentSpawnIndex;

		public int GetIndexOf(string id)
		{
			return 0;
		}

		public void RemoveItemsWithPrefix(string prefix)
		{
		}

		public void IncreaseIndexOf(string id)
		{
		}
	}
}
