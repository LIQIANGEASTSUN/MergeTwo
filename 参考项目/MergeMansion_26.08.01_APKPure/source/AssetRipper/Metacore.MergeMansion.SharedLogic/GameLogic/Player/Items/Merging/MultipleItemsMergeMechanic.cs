using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializableDerived(5)]
	[MetaReservedMembers(100, 199)]
	public class MultipleItemsMergeMechanic : BaseMergeMechanic
	{
		[MetaMember(100, MetaMemberFlags.None)]
		public List<int> AllowedItems { get; set; }

		[MetaMember(101, MetaMemberFlags.None)]
		public IItemProducer ResultProducer { get; set; }

		public MultipleItemsMergeMechanic()
		{
		}

		public MultipleItemsMergeMechanic(List<int> allowedItems, IItemProducer resultProducer, ItemVisibility resultVisibility = ItemVisibility.Visible)
		{
		}

		public MultipleItemsMergeMechanic(List<int> allowedItems, IItemProducer resultProducer, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility = ItemVisibility.Visible)
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
