using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(21191)]
	[DevelopmentOnlyAction]
	public class AddFishingRodDebug : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate Coordinate { get; set; }

		public int ItemId { get; set; }

		public F32 Weight { get; set; }

		public AddFishingRodDebug()
		{
		}

		public AddFishingRodDebug(MergeBoardId mergeBoardId, Coordinate coordinate, IItemDefinition itemDefinition, F32 weight)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public static ItemDefinition LookUpFishingRod(PlayerModel player)
		{
			return null;
		}
	}
}
