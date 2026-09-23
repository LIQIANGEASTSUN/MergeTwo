using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using Merger.MergeBoard.Components;

namespace Merger.MergeBoard.Extensions
{
	public static class InteractionComponentExtensions
	{
		public static ItemMultiple FindReadyItemToConsume(this InteractionComponent interactionComponent, List<string> itemsIds)
		{
			return null;
		}

		public static List<Combination> FindReadyCombinations(this InteractionComponent interactionComponent, List<string> itemsIds)
		{
			return null;
		}

		public static Combination TryFindSuitableCombination(this InteractionComponent interactionComponent, string itemId)
		{
			return null;
		}
	}
}
