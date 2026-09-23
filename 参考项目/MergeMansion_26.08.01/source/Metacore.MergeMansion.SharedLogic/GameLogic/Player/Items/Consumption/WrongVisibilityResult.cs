using GameLogic.Merge;

namespace GameLogic.Player.Items.Consumption
{
	public class WrongVisibilityResult : IConsumptionCheckResult
	{
		public static readonly IConsumptionCheckResult ExpectedVisible;

		public static readonly IConsumptionCheckResult ExpectedPartial;

		public bool Success => false;

		public ItemVisibility ExpectedVisibility { get; }

		public string ErrorLocKey => null;

		public WrongVisibilityResult(ItemVisibility expectedVisibility)
		{
		}
	}
}
