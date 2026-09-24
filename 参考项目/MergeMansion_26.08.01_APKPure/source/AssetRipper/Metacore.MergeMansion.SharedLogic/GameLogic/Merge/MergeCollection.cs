using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Merge
{
	[MetaSerializable]
	public class MergeCollection
	{
		[MetaSerializable]
		public class ItemPair
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public int First { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public int Second { get; set; }

			public ItemPair()
			{
			}

			public ItemPair(int first, int second)
			{
			}

			public static implicit operator ItemPair((int, int) pair)
			{
				return null;
			}

			public bool Equals(ItemPair other)
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

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDictionary<ItemPair, IItemProducer> Collection { get; set; }

		public MergeCollection()
		{
		}

		public MergeCollection(IEnumerable<(int, int, IItemProducer)> list)
		{
		}

		public MergeCollection(params (int, int, IItemProducer)[] list)
		{
		}

		public bool ContainsPair((int it1, int it2) pair)
		{
			return false;
		}

		public IItemProducer GetPairResult((int it1, int it2) pair)
		{
			return null;
		}

		public bool Equals(MergeCollection other)
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
