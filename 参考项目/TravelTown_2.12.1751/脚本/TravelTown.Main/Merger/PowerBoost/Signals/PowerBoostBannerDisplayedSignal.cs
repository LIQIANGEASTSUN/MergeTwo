namespace Merger.PowerBoost.Signals
{
	public class PowerBoostBannerDisplayedSignal
	{
		public bool IsOn { get; }

		public string EventId { get; }

		public int BoostMode { get; }

		public long? StartDate { get; }

		public long? EndDate { get; }

		public PowerBoostBannerDisplayedSignal(bool isOn, int powerBoostMode, string eventId = null, long? startDate = null, long? endDate = null)
		{
		}
	}
}
