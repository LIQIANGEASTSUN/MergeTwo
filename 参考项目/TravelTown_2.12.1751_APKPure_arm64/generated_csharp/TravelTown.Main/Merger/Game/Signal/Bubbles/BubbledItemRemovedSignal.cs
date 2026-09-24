using MergeEngine.Configuration;

namespace Merger.Game.Signal.Bubbles
{
	public class BubbledItemRemovedSignal : BubbleRemoveSignalBase
	{
		public BubbledItemRemovedSignal(IMergeItem mergeItem, int mergeItemLevel)
			: base(null)
		{
		}
	}
}
