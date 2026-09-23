using Code.GameLogic.GameEvents;

namespace Code.GameLogic.Player.Statistics
{
	public sealed class CollectibleBoardEventMilestoneChangedDataTransferObject : AIdPointsChangedDataTransferObject<CollectibleBoardEventId>
	{
		public CollectibleBoardEventMilestoneChangedDataTransferObject(CollectibleBoardEventId id, int increment)
			: base((CollectibleBoardEventId)default(_00210), 0)
		{
		}
	}
}
