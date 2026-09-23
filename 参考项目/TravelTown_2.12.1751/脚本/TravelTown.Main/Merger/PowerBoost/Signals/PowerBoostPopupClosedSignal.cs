namespace Merger.PowerBoost.Signals
{
	public class PowerBoostPopupClosedSignal
	{
		public string Reason { get; }

		public int BoostInPopup { get; }

		public PowerBoostPopupClosedSignal(string reason, int boostInPopup)
		{
		}
	}
}
