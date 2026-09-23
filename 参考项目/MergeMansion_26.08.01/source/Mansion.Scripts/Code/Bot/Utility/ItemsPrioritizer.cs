using System.Collections.Generic;
using Code.Bot.Config;
using Code.Bot.Model;
using GameLogic.Player.Board;
using GameLogic.Player.Items;

namespace Code.Bot.Utility
{
	public class ItemsPrioritizer
	{
		public static IEnumerable<(Coordinate, MergeItem)> Prioritize(BotTaskDefinition taskDef, RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> items)
		{
			return null;
		}

		public static IEnumerable<MergeItem> Prioritize(BotTaskDefinition taskDef, RuntimeModel runtimeModel, IEnumerable<MergeItem> items)
		{
			return null;
		}
	}
}
