using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class GarageCleanupEventBoardSlotModel
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsFilled;
	}
}
