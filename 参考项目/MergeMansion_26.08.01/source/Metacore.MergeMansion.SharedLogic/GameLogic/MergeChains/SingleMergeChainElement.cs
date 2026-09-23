using System.Collections.Generic;
using GameLogic.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.MergeChains
{
	[MetaSerializableDerived(1)]
	public class SingleMergeChainElement : IMergeChainElement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRef")]
		public ItemDef Item { get; set; }

		public int Count => 0;

		public ItemDef First => null;

		public IEnumerable<ItemDef> AllItemDefs => null;

		public SingleMergeChainElement()
		{
		}

		public SingleMergeChainElement(int type)
		{
		}

		public SingleMergeChainElement(ItemDef item)
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

		public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
