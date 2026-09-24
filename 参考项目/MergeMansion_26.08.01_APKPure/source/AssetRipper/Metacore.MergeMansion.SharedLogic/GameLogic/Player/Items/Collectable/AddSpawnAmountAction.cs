using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(10)]
	[MetaBlockedMembers(new int[] { 3 })]
	public class AddSpawnAmountAction : ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef SpawnerItemDef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int CyclesToAdd { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int VisualFlyToItemId { get; set; }

		public AddSpawnAmountAction()
		{
		}

		public AddSpawnAmountAction(ItemDef spawnerItemDef, int cyclesToAdd, int visualFlyToItemId)
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

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
