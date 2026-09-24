namespace GameLogic.Player.Items.Consumption
{
	public class ItemIsLockedResult : IConsumptionCheckResult
	{
		public static readonly IConsumptionCheckResult Instance;

		public bool Success => false;

		public string ErrorLocKey => null;
	}
}
