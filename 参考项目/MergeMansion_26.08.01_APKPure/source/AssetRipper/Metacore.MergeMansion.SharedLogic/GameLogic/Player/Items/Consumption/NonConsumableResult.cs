namespace GameLogic.Player.Items.Consumption
{
	public class NonConsumableResult : IConsumptionCheckResult
	{
		public static readonly IConsumptionCheckResult Instance;

		public bool Success => false;

		public string ErrorLocKey => null;
	}
}
