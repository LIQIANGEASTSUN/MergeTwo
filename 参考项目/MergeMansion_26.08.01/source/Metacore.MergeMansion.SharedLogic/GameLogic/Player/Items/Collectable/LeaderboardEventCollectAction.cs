using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(8)]
	public class LeaderboardEventCollectAction : ILeaderboardEventCollectAction, IProgressCollectAction, ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaRef<LeaderboardEventInfo> LeaderboardEventRef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Progress { get; set; }

		public LeaderboardEventInfo LeaderboardEvent => null;

		public LeaderboardEventCollectAction()
		{
		}

		public LeaderboardEventCollectAction(LeaderboardEventId leaderboardEventId, int progress)
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
