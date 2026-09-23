using System.Collections.Generic;
using GameLogic.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.MergeChains
{
	[MetaSerializableDerived(2)]
	public class ListMergeChainElement : IMergeChainElement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRefList")]
		public List<ItemDef> Items { get; set; }

		public int Count => 0;

		public ItemDef First => null;

		public IEnumerable<ItemDef> AllItemDefs => null;

		public ListMergeChainElement()
		{
		}

		public ListMergeChainElement(IEnumerable<int> types)
		{
		}

		public ListMergeChainElement(IEnumerable<ItemDef> items)
		{
		}

		public int IndexOf(int itemId)
		{
			return 0;
		}

		public bool Contains(int itemId)
		{
			return false;
		}

		public ItemDef ElementAtOrDefault(int index)
		{
			return null;
		}

		public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
