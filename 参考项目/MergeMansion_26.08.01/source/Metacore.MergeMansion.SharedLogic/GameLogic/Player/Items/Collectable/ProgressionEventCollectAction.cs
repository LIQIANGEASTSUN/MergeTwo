using System.Collections.Generic;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(6)]
	[MetaBlockedMembers(new int[] { 1 })]
	public class ProgressionEventCollectAction : IProgressionEventCollectAction, IProgressCollectAction, ICollectAction
	{
		[MetaMember(2, MetaMemberFlags.None)]
		public int Progress { get; set; }

		public ProgressionEventCollectAction()
		{
		}

		public ProgressionEventCollectAction(int progress)
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

		public void Collect(ICollectionContext collectionContext, bool fromInventory, IItemDefinition collectedItem)
		{
		}
	}
}
