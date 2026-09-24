using System;
using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30030)]
	public class EnqueueMysteryMachineSpawnItems : PlayerAction
	{
		[NonSerialized]
		public MysteryMachineEventId EventId;

		public EnqueueMysteryMachineSpawnItems()
		{
		}

		public EnqueueMysteryMachineSpawnItems(MysteryMachineEventId eventId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
