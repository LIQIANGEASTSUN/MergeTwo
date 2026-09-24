namespace GameLogic.Player.Items.Consumption
{
	public class ItemIsMaxLevelResult : IConsumptionCheckResult
	{
		public static readonly IConsumptionCheckResult Instance;

		public bool Success => false;

		public string ErrorLocKey => null;
	}
}
