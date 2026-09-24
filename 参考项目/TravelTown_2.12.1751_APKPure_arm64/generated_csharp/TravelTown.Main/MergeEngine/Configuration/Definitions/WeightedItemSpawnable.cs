using System;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class WeightedItemSpawnable : ItemSpawnable
	{
		public int Weight;

		public bool Rare;

		public bool Legendary;
	}
}
