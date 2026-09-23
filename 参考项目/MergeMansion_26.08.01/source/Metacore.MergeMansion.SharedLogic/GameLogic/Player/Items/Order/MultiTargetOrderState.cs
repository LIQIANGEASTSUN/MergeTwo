using System.Collections.Generic;
using GameLogic.Player.Items.Sink;
using GameLogic.Random;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	[MetaSerializableDerived(21)]
	public class MultiTargetOrderState : OrderState
	{
		public MultiTargetOrderState()
		{
		}

		public MultiTargetOrderState(MetaDictionary<int, int> takeIn, List<int> rewardItems, List<int> rewardAmounts, string activationType, IGenerationContext context)
		{
		}

		public override SinkType GetSinkType()
		{
			return default(SinkType);
		}

		public override bool IsCompleted()
		{
			return false;
		}

		public override (int, int) GetProgress()
		{
			return default((int, int));
		}

		public static IOrderState NewState(MetaDictionary<int, int> scores, List<int> rewardItems, List<int> rewardAmounts, string activationType, IGenerationContext context)
		{
			return null;
		}
	}
}
