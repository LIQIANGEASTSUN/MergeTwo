using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(2)]
	public class TimeSkipCollectAction : ITimeSkipCollectAction, ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration DurationToSkip { get; set; }

		[IgnoreDataMember]
		public double DurationToSkipMinutes => 0.0;

		public TimeSkipCollectAction()
		{
		}

		public TimeSkipCollectAction(MetaDuration durationToSkip)
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
