using System;
using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30031)]
	public class DequeueMysteryMachineSpawnItem : PlayerAction
	{
		[NonSerialized]
		public MysteryMachineEventId EventId;

		public DequeueMysteryMachineSpawnItem()
		{
		}

		public DequeueMysteryMachineSpawnItem(MysteryMachineEventId eventId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
