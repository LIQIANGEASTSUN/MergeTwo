using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(9)]
	public class CollectEventCurrencyAction : ICollectEventCurrencyAction, ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EventCurrencyId EventCurrencyId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		public CollectEventCurrencyAction()
		{
		}

		public CollectEventCurrencyAction(EventCurrencyId eventCurrencyId, int amount)
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
