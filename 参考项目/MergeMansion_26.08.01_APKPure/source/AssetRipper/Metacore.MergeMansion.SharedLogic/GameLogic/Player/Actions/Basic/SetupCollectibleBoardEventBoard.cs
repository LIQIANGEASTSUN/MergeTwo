using System;
using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11200)]
	public class SetupCollectibleBoardEventBoard : PlayerAction
	{
		[NonSerialized]
		public CollectibleBoardEventId activableId;

		public SetupCollectibleBoardEventBoard()
		{
		}

		public SetupCollectibleBoardEventBoard(CollectibleBoardEventId activableId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
