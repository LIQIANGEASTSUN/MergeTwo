using System;
using ContextualizedECS.Context;
using Merger.MergeBoard.Logic;
using Zenject;

namespace Merger.MergeBoard.Handlers
{
	public class ItemDiscoveryProcessor : IBoardControllerPostTickProcessor
	{
		[Inject]
		[NonSerialized]
		public IItemsCollectionHandler _itemsCollectionHandler;

		public void Process(TickArgs result)
		{
		}
	}
}
