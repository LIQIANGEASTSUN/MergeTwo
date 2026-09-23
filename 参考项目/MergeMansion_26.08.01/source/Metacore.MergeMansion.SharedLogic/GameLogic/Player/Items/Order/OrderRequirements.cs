using System.Collections.Generic;
using GameLogic.Random;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	[MetaSerializable]
	public class OrderRequirements : IGameConfigData<OrderRequirementsId>, IGameConfigData, IHasGameConfigKey<OrderRequirementsId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public OrderRequirementsId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string SinkFactoryType { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDictionary<int, int> SinkItemsAndAmounts { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public string ActivationType { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaDictionary<int, int> ActivationRewardsAndAmounts { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public OrderRequirements()
		{
		}

		public OrderRequirements(OrderRequirementsId configKey, string sinkFactoryType, List<(int item, int amount)> sinkItems, string activationType, List<(int item, int amount)> activationRewards, int experimentPriority)
		{
		}

		public IOrderState CreateState(IGenerationContext context)
		{
			return null;
		}
	}
}
