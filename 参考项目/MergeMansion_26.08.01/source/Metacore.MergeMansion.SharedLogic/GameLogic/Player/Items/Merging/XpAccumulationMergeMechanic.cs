using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializableDerived(4)]
	[MetaBlockedMembers(new int[] { 2 })]
	public class XpAccumulationMergeMechanic : IMergeMechanic
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ItemVisibility ResultVisibility { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool ResetTimers { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public IItemProducer ResultProducer { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int ExperienceRequired { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<MetaRef<MergeReward>> MergeRewardsRefs { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public StorageActionType StorageAction { get; set; }

		public IEnumerable<MergeReward> MergeRewards => null;

		public XpAccumulationMergeMechanic()
		{
		}

		public XpAccumulationMergeMechanic(IItemProducer resultProducer, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility, int experienceRequired, IEnumerable<MetaRef<MergeReward>> mergeRewards)
		{
		}

		public bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp)
		{
			return null;
		}

		public IMergeItem MergeImpl(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp)
		{
			return null;
		}

		public (IMergeItem, IMergeItem, bool) FigureMergeDirection(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config)
		{
			return default((IMergeItem, IMergeItem, bool));
		}

		public IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config)
		{
			return null;
		}
	}
}
