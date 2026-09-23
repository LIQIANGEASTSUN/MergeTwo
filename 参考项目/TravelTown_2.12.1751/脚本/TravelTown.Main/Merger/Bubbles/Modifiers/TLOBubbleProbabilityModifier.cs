using System;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Orders;
using MergeEngine.ECS.Util;

namespace Merger.Bubbles.Modifiers
{
	public class TLOBubbleProbabilityModifier : BubbleDropProbabilityModifierBase
	{
		[InjectComponent]
		[NonSerialized]
		public OrdersComponent _ordersComponent;

		public override bool IsEnabled => false;

		public override string AnalyticsString => null;

		public override void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null)
		{
		}
	}
}
