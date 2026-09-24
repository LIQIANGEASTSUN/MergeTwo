using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializableDerived(3)]
	public class TransformCollectAction : ITransformCollectAction, ICollectAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef TransformsInto { get; set; }

		IItemDefinition ITransformCollectAction.TransformsInto(IPlayer player)
		{
			return null;
		}

		public TransformCollectAction()
		{
		}

		public TransformCollectAction(ItemDef transformsInto)
		{
		}

		public TransformCollectAction(int itemId)
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

		public MergeItem CreateTransformsIntoItem(IMergeMansionGameConfig config, IMergeItem collectedItem, MetacoreTime timestamp, IPlayer player)
		{
			return null;
		}

		public static void ReportAnalyticsIfRequired(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory)
		{
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
