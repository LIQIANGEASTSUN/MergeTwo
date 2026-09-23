using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializableDerived(2)]
	public class SameItemsMergeMechanic : BaseMergeMechanic
	{
		[MetaMember(4, MetaMemberFlags.None)]
		public IItemProducer ResultProducer { get; set; }

		public SameItemsMergeMechanic()
		{
		}

		public SameItemsMergeMechanic(IItemProducer resultProducer, ItemVisibility resultVisibility = ItemVisibility.Visible)
		{
		}

		public SameItemsMergeMechanic(IItemProducer resultProducer, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility = ItemVisibility.Visible)
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
