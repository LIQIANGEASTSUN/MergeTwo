using MergeEngine.Configuration;
using MergeEngine.Model;

namespace Merger.Game.Signal.Bubbles
{
	public class BubbledItemRemoveIconClickedSignal : BubbleRemoveSignalBase
	{
		public bool HasCompensation { get; }

		public int CompensationAmount { get; }

		public PlayerResourceEnum CompensationResourceType { get; }

		public BubbledItemRemoveIconClickedSignal(IMergeItem mergeItem, int mergeItemLevel)
			: base(null)
		{
		}
	}
}
