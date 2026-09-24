using MergePuzzle.RecurringEvents;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public abstract class MiniBoardConfig<T> : RecurringEventConfig<MiniBoardAddressableBase> where T : MiniBoardAddressableBase
	{
		public override bool WaitForForceMainPopupAfterStepUpdateForOffer()
		{
			return false;
		}

		public override bool WaitJustStepUpdateEntityForOffer()
		{
			return false;
		}

		public MiniBoardConfig()
		{
		}
	}
}
