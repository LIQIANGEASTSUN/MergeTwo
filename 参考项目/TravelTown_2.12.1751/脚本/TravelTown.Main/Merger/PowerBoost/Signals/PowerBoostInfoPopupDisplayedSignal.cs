using MergeEngine.Configuration;

namespace Merger.PowerBoost.Signals
{
	public class PowerBoostInfoPopupDisplayedSignal
	{
		public IMergeItem Item { get; }

		public string TooltipType { get; }

		public PowerBoostInfoPopupDisplayedSignal(IMergeItem item, string tooltipType = null)
		{
		}
	}
}
