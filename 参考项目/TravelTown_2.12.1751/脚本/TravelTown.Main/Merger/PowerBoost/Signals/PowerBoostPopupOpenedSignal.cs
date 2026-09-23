using MergeEngine.Configuration.Definitions;

namespace Merger.PowerBoost.Signals
{
	public class PowerBoostPopupOpenedSignal
	{
		public string Reason { get; }

		public int BoostInPopup { get; }

		public Reward RewardInPopup { get; }

		public long? StartDate { get; }

		public long? EndDate { get; }

		public PowerBoostPopupOpenedSignal(string reason, int boostInPopup, Reward payloadReward = null, long? startDate = null, long? endDate = null)
		{
		}
	}
}
