using System.Collections.Generic;
using GameLogic.Config;
using Metaplay.Core.Model;

namespace GameLogic.MergeChains
{
	[MetaSerializable]
	public interface IMergeChainElement
	{
		int Count { get; }

		ItemDef First { get; }

		IEnumerable<ItemDef> AllItemDefs { get; }

		int IndexOf(int itemId);

		bool Contains(int itemId);

		ItemDef ElementAtOrDefault(int index);
	}
}
