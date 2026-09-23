using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.Model;

namespace MergeEngine.ECS.Components.Items
{
	public class InteractionComponent : ComponentBase<InteractionCapability>
	{
		public Action<InteractionComponent> OnInteractionConsumed;

		[NonSerialized]
		public bool _interactionConsumed;

		public int CurrentCallbackId;

		public static int _nextCallbackId;

		public bool Interacting { get; set; }

		public bool TryFinishOrder { get; set; }

		public bool InteractionConsumed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool PlayerNotifiedOfCostNotAffordable { get; set; }

		public PositionComponent PreferredItemToConsume { get; set; }

		public IItemsCombiner.OnItemsCombined ItemsConsumedCallback { get; set; }

		public PlayerResourceEnum ResourceToConsume { get; }

		public int ResourceAmountToConsume { get; set; }

		public int DefaultResourceAmountToConsume { get; }

		public bool InteractionCostsResource { get; }

		public bool InteractionCostsItems { get; }

		public ItemMultiple[] ItemsToConsume { get; set; }

		public ItemMultiple[] ConsumedItems { get; set; }

		public int TotalInteractions { get; set; }

		public ItemConsumeMode ConsumeMode { get; }

		public List<Combination> Combinations { get; }

		public Dictionary<int, List<Action>> CostConsumedCallbacks { get; }

		public HashSet<int> InvokedCallbackIds { get; }

		public static int NextCallbackId => 0;

		public bool HasInteractionCost => false;

		public InteractionComponent(InteractionCapability capability, Entity entity)
			: base((InteractionCapability)default(_00210), (Entity)null)
		{
		}

		public void FillItemsToConsume(List<Combination> combinations)
		{
		}

		public void AddCostConsumedCallback(Action callback)
		{
		}

		public void TryInvokeCallback(int interactionCallbackId)
		{
		}
	}
}
