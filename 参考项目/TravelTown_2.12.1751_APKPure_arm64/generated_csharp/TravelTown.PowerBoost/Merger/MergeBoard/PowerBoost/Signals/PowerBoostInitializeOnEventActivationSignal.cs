using Merger.Game.Data;

namespace Merger.MergeBoard.PowerBoost.Signals
{
	public class PowerBoostInitializeOnEventActivationSignal
	{
		public string EventId { get; }

		public int EventIndex { get; set; }

		public int CurrentLevel { get; }

		public PowerBoostMultiModesConfig Configuration { get; }

		public PowerBoostInitializeOnEventActivationSignal(string eventId, int eventIndex, int currentLevel, PowerBoostMultiModesConfig configuration)
		{
		}
	}
}
