using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializable]
	public interface IMergeMechanic
	{
		bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config);

		IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp);

		IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config);
	}
}
