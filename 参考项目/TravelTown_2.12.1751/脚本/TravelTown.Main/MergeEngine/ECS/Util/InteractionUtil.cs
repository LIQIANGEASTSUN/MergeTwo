using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;

namespace MergeEngine.ECS.Util
{
	public static class InteractionUtil
	{
		public static string[] GetMissingItemsNames(InteractionComponent interactionComponent, BoardItemCountComponent boardItemCountComponent)
		{
			return null;
		}

		public static ItemMultiple[] GetConsumedItems(InteractionComponent interactionComponent, BoardItemCountComponent boardItemCountComponent)
		{
			return null;
		}

		public static int GetItemInteractionCount(InteractionComponent interactionComponent)
		{
			return 0;
		}

		public static int GetEmptyPositionCount(InteractionComponent interactionComponent, BoardSystem boardSystem)
		{
			return 0;
		}

		public static bool IsAnyMode(this InteractionCapability capability)
		{
			return false;
		}

		public static bool IsComboProducer(this InteractionCapability capability)
		{
			return false;
		}

		public static bool IsAnyMode(this ProduceCapability capability)
		{
			return false;
		}

		public static bool IsComboProducer(this ProduceCapability capability)
		{
			return false;
		}

		public static bool IsComboProducer(List<Combination> combinations)
		{
			return false;
		}

		public static bool IsAnyMode(List<Combination> combinations)
		{
			return false;
		}

		public static bool CanAffordResourceInteractionCost(InteractionComponent interactionComponent, ResourcesSystem resourcesSystem)
		{
			return false;
		}
	}
}
