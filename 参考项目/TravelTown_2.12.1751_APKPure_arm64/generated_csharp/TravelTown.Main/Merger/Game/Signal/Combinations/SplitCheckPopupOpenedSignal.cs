namespace Merger.Game.Signal.Combinations
{
	public class SplitCheckPopupOpenedSignal
	{
		public string BeforeSplitItemId { get; set; }

		public string AfterSplitFirstItemId { get; set; }

		public string AfterSplitSecondItemId { get; set; }

		public SplitCheckPopupOpenedSignal(string beforeSplitItemId, string afterSplitFirstItemId, string afterSplitSecondItemId)
		{
		}
	}
}
