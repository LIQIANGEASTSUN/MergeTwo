using Code.GameLogic.GameEvents;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30024)]
	public class MergeMysteryMachineContainerItems : PlayerAction
	{
		public MysteryMachineEventId EventId { get; set; }

		public MetaDuration MinDurationSinceOriginalSpawn { get; set; }

		public MergeMysteryMachineContainerItems()
		{
		}

		public MergeMysteryMachineContainerItems(MysteryMachineEventId eventId, MetaDuration minDurationSinceOriginalSpawn)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
