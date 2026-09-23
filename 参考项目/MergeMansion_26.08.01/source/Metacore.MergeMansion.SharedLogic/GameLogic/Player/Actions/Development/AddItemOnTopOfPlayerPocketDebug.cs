using System;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21265)]
	[DevelopmentOnlyAction]
	public class AddItemOnTopOfPlayerPocketDebug : PlayerAction
	{
		[NonSerialized]
		public int ItemId;

		[NonSerialized]
		public string ItemType;

		public AddItemOnTopOfPlayerPocketDebug()
		{
		}

		public AddItemOnTopOfPlayerPocketDebug(int itemId, string itemType)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
