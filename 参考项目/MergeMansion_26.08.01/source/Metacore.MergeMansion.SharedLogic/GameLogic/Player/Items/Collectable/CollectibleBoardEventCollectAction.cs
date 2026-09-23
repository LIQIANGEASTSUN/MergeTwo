using System.Collections.Generic;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(7)]
	[MetaBlockedMembers(new int[] { 1 })]
	public class CollectibleBoardEventCollectAction : ICollectibleBoardEventCollectAction, IProgressCollectAction, ICollectAction
	{
		[MetaMember(2, MetaMemberFlags.None)]
		public int Progress { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool LevelUpMergeChain { get; set; }

		public CollectibleBoardEventCollectAction()
		{
		}

		public CollectibleBoardEventCollectAction(int progress, bool levelUpMergeChain)
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
