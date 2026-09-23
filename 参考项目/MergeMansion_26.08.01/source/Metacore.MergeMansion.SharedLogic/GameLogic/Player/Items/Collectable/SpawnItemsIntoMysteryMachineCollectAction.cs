using System.Collections.Generic;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(13)]
	public class SpawnItemsIntoMysteryMachineCollectAction : ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemCount { get; set; }

		public SpawnItemsIntoMysteryMachineCollectAction()
		{
		}

		public SpawnItemsIntoMysteryMachineCollectAction(int itemCount)
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

		public void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp, bool fromInventory)
		{
		}
	}
}
