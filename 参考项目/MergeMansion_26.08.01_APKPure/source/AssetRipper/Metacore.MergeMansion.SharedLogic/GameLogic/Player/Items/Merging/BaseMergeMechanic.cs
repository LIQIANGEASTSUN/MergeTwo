using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaBlockedMembers(new int[] { 2 })]
	public abstract class BaseMergeMechanic : IMergeMechanic, IStorageActionMergeMechanic
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ItemVisibility ResultVisibility { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool ResetTimers { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public StorageActionType StorageAction { get; set; }

		public BaseMergeMechanic()
		{
		}

		public BaseMergeMechanic(ItemVisibility resultVisibility, StorageActionType storageAction, bool resetTimers)
		{
		}

		public abstract bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config);

		public abstract IItemDefinition GetMergeProduct(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem);

		public IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp)
		{
			return null;
		}

		public abstract IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config);

		public bool Equals(BaseMergeMechanic other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
