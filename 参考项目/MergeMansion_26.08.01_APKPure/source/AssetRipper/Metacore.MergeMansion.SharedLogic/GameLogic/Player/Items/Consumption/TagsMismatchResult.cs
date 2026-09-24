using System.Collections.Generic;

namespace GameLogic.Player.Items.Consumption
{
	public class TagsMismatchResult : IConsumptionCheckResult
	{
		public bool Success => false;

		public List<string> ExpectedTags { get; }

		public string ErrorLocKey => null;

		public string TagKey => null;

		public TagsMismatchResult(List<string> expectedTags)
		{
		}
	}
}
