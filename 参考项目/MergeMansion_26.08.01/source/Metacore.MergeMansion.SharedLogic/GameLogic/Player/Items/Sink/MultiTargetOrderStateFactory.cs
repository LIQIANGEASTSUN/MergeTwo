using System.Collections.Generic;
using GameLogic.Player.Items.Order;
using GameLogic.Random;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(2)]
	public class MultiTargetOrderStateFactory : IOrderStateFactory
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDictionary<int, int> Scores { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<int> RewardItems { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<int> RewardAmounts { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public string ActivationType { get; set; }

		public MultiTargetOrderStateFactory()
		{
		}

		public MultiTargetOrderStateFactory(MetaDictionary<int, int> scores, MetaDictionary<int, int> rewards, string activationType)
		{
		}

		public IOrderState Create(IGenerationContext context)
		{
			return null;
		}
	}
}
