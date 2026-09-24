using MergeEngine.Configuration;
using Merger.Bubbles;

namespace MergeEngine.Signal.Items
{
	public class MergeItemBubbleSignalBase : MergeItemSignalBase
	{
		public SmarterBubblesAnalyticsData SmarterBubblesAnalyticsData { get; set; }

		public MergeItemBubbleSignalBase(IMergeItem item)
			: base(null)
		{
		}

		public MergeItemBubbleSignalBase(IMergeItem item, int level)
			: base(null)
		{
		}
	}
}
