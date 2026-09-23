using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializableDerived(3)]
	public class MergeCollectionMergeMechanics : BaseMergeMechanic
	{
		[MetaMember(4, MetaMemberFlags.None)]
		public MergeCollection MergeCollection { get; set; }

		public MergeCollectionMergeMechanics()
		{
		}

		public MergeCollectionMergeMechanics(MergeCollection mergeCollection, ItemVisibility resultVisibility = ItemVisibility.Visible)
		{
		}

		public MergeCollectionMergeMechanics(MergeCollection mergeCollection, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility = ItemVisibility.Visible)
		{
		}

		public override bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public override IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config)
		{
			return null;
		}

		public override IItemDefinition GetMergeProduct(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem)
		{
			return null;
		}
	}
}
