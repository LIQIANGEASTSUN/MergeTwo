using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30131)]
	public class AddHotspotMergeBoard : PlayerAction
	{
		public HotspotId HotspotId { get; set; }

		public AddHotspotMergeBoard()
		{
		}

		public AddHotspotMergeBoard(HotspotId hotspotId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
