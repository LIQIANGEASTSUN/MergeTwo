using System.Collections.Generic;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class DigEventTreasureItem
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public string TreasureName;

		[MetaMember(2, MetaMemberFlags.None)]
		public List<(int x, int y)> Shape;

		[MetaMember(3, MetaMemberFlags.None)]
		public F32 Weight;

		[MetaMember(4, MetaMemberFlags.None)]
		public bool IsShiny;

		[MetaMember(5, MetaMemberFlags.None)]
		public string AssetId;

		public DigEventTreasureItem()
		{
		}

		public DigEventTreasureItem(string treasureName, List<(int x, int y)> shape, F32 weight, string assetId, bool isShiny = false)
		{
		}
	}
}
