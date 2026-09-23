using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Order
{
	public class OrderFeaturesSource : IItemConfigPart<OrderFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ConfigKey => null;

		public string ItemType => null;

		public string ItemKey { get; set; }

		public string RequirementType { get; set; }

		public string RequirementRandomMarker { get; set; }

		public string OrderPool { get; set; }

		public bool HideProgressBar { get; set; }

		public string ClaimTextLocId { get; set; }

		public string DecayLogic { get; set; }

		public string DecayProducerType { get; set; }

		public string DecayRandomMarker { get; set; }

		public List<string> DecayItem { get; set; }

		public List<int> DecayWeight { get; set; }

		public ActivationPlacementStyle RewardsPlacement { get; set; }

		public OrderFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
