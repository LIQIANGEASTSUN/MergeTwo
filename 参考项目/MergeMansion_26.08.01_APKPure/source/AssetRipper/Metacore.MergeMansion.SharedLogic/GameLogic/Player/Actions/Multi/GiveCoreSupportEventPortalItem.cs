using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30097)]
	public class GiveCoreSupportEventPortalItem : PlayerAction
	{
		public CoreSupportEventId EventId { get; set; }

		public GiveCoreSupportEventPortalItem()
		{
		}

		public GiveCoreSupportEventPortalItem(CoreSupportEventId eventId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
