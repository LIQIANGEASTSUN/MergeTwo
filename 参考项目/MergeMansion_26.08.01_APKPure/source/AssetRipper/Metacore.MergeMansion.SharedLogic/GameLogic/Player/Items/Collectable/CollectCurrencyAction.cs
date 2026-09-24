using System.Collections.Generic;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(1)]
	public class CollectCurrencyAction : ICollectCurrencyAction, ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ICalculateCollectValue ValueCalculator { get; set; }

		public CollectCurrencyAction()
		{
		}

		public CollectCurrencyAction(ICalculateCollectValue valueCalculator)
		{
		}

		public bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp)
		{
			return false;
		}

		public void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp)
		{
		}

		public void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp)
		{
		}

		public void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory)
		{
		}
	}
}
