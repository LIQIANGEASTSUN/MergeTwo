using System.Collections.Generic;
using Code.GameLogic.ProgressionTracks;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Collectable;
using Metaplay.Core.Model;

namespace Code.GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(15)]
	public class ProgressionTrackCollectAction : IProgressionTrackCollectAction, IProgressCollectAction, ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ProgressionTrackId TrackId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Progress { get; set; }

		public ProgressionTrackCollectAction()
		{
		}

		public ProgressionTrackCollectAction(ProgressionTrackId trackId, int progress)
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
