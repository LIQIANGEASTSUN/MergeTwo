using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializableDerived(1)]
	public class NoMergeMechanic : IMergeMechanic
	{
		public bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config)
		{
			return false;
		}

		public IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config)
		{
			return null;
		}
	}
}
