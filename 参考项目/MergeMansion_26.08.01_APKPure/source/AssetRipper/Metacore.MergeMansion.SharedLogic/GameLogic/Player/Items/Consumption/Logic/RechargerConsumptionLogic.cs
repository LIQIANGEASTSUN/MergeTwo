using System.Collections.Generic;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Consumption.Logic
{
	[MetaSerializableDerived(3)]
	public class RechargerConsumptionLogic : IConsumptionLogic
	{
		public IConsumptionCheckResult CanBeUsedTo(IPlayer player, IMergeItem mergeItem, IBoard mergeBoard, MetacoreTime currentTime)
		{
			return null;
		}

		public bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player)
		{
			return false;
		}

		public IMergeItem ApplyOverride(MergeItem referenceItem, MergeItem sourceItem, MergeItem targetItem, IPlayer player, MetacoreTime timestamp, out bool isMergeConsumingSourceItem)
		{
			isMergeConsumingSourceItem = default(bool);
			return null;
		}

		public void Apply(IPlayer player, IMergeItem sourceItem, MergeItem targetItem, MergeBoard mergeBoard, Coordinate coord, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs)
		{
		}
	}
}
