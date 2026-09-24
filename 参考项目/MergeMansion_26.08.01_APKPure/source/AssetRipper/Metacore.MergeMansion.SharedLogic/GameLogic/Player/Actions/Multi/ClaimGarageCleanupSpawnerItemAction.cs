using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(1304)]
	public class ClaimGarageCleanupSpawnerItemAction : PlayerAction
	{
		public GarageCleanupEventId EventId { get; set; }

		public ClaimGarageCleanupSpawnerItemAction()
		{
		}

		public ClaimGarageCleanupSpawnerItemAction(GarageCleanupEventId eventId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
