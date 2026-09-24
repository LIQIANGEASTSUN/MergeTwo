using Code.GameLogic.GameEvents;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10998)]
	public class TryMergeBoardProcessFishingRodTapForCoordinate : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate Coordinate { get; set; }

		public LuckyType LuckyType { get; set; }

		public TryMergeBoardProcessFishingRodTapForCoordinate()
		{
		}

		public TryMergeBoardProcessFishingRodTapForCoordinate(MergeBoardId boardId, Coordinate coordinate, LuckyType luckyType)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public void AddSoloMilestoneTokens(PlayerModel player, MergeBoard boardToProcess, MergeItem currentItem)
		{
		}
	}
}
