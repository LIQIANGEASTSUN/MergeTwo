using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Order
{
	public class OrderRequirementsSource : IConfigItemSource<OrderRequirements, OrderRequirementsId>, IGameConfigSourceItem<OrderRequirementsId, OrderRequirements>, IHasGameConfigKey<OrderRequirementsId>
	{
		public int ExperimentPriority { get; set; }

		public OrderRequirementsId ConfigKey { get; set; }

		public string FactoryType { get; set; }

		public string Scores { get; set; }

		public string ActivationType { get; set; }

		public string ActivationRewards { get; set; }

		public OrderRequirements ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public static List<(int, int)> ParseList(string list)
		{
			return null;
		}
	}
}
