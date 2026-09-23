using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Bubble;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10920)]
	public class TryToPurchaseBubble : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate BubblePosition { get; set; }

		[IgnoreDataMember]
		public ICollection<MergeBoardAct> ProducedActs { get; set; }

		public TryToPurchaseBubble()
		{
		}

		public TryToPurchaseBubble(MergeBoardId boardId, Coordinate bubblePosition, ICollection<MergeBoardAct> producedActs)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public static void GrantBubbleBonus(IBubbleBonus bubbleBonus, PlayerModel player, MergeBoardId mergeBoardId, int itemInBubble)
		{
		}

		public static void GrantBubbleProgressionEventProgressBonus(BubbleProgressionEventProgressBonus progressionEventProgressBonus, PlayerModel player)
		{
		}

		public static void GrantBubbleAuxEnergyBonus(BubbleAuxEnergyBonus auxEnergyBonus, PlayerModel player, MergeBoardId mergeBoardId, int itemInBubble)
		{
		}
	}
}
