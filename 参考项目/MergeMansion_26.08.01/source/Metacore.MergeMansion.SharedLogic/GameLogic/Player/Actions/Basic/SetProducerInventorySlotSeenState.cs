using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11120)]
	public class SetProducerInventorySlotSeenState : PlayerAction
	{
		public int SlotIndex { get; set; }

		public bool Seen { get; set; }

		public SetProducerInventorySlotSeenState()
		{
		}

		public SetProducerInventorySlotSeenState(int slotIndex, bool seen)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
