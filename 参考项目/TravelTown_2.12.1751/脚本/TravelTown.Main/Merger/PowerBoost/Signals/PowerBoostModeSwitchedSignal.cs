namespace Merger.PowerBoost.Signals
{
	public class PowerBoostModeSwitchedSignal
	{
		public int NewBoost { get; }

		public bool ShouldDeselect { get; }

		public string EventId { get; }

		public PowerBoostModeSwitchedSignal(int newBoost, bool shouldDeselect = true, string eventId = null)
		{
		}
	}
}
