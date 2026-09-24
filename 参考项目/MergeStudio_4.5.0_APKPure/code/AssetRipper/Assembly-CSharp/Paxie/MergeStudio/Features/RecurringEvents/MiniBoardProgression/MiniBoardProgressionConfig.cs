using MergePuzzle.RecurringEvents;
using Paxie.MergeStudio.Features.MiniBoard;

namespace Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression
{
	public class MiniBoardProgressionConfig : MiniBoardConfig<MiniBoardProgressionAddressable>
	{
		public MiniBoardProgressionConfig(KiteMiniBoardProgressionConfigItem kiteMiniBoardProgressionConfigItem, RecurringEventLocalConfigBase local)
		{
		}

		public override bool WaitForForceMainPopupAfterStepUpdateForOffer()
		{
			return false;
		}

		public override bool WaitJustStepUpdateEntityForOffer()
		{
			return false;
		}
	}
}
