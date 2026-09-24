namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class GarageCleanupEventBoardSlotModel
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public bool IsFilled; //Field offset: 0x10

	public GarageCleanupEventBoardSlotModel() { }

}

