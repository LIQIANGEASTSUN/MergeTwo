using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30013)]
	public class TryMergeCardStack : PlayerAction
	{
		public HotspotId HotspotId { get; set; }

		public int FromIndex { get; set; }

		public int ToIndex { get; set; }

		public TryMergeCardStack()
		{
		}

		public TryMergeCardStack(HotspotId hotspotId, int from, int to)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
