namespace Merger.MergeBoard.PowerBoost.Signals
{
	public class MergeBoardPowerBoostSwitchPressedSignal
	{
		public int SelectedCost { get; }

		public bool IsOn { get; }

		public MergeBoardPowerBoostSwitchPressedSignal(int selectedCost, bool isOn)
		{
		}
	}
}
