using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(5)]
	public class InfiniteEnergyCollectAction : IInfiniteEnergyCollectAction, ICollectAction
	{
		[IgnoreDataMember]
		public double DurationMinutes => 0.0;

		[IgnoreDataMember]
		public EnergyType EnergyType => default(EnergyType);

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration Duration { get; set; }

		public InfiniteEnergyCollectAction()
		{
		}

		public InfiniteEnergyCollectAction(MetaDuration duration)
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
