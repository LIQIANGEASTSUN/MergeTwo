namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class GarageCleanupEventBoardRowModel
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public List<GarageCleanupEventBoardSlotModel> Slots; //Field offset: 0x10

	public GarageCleanupEventBoardRowModel() { }

	public GarageCleanupEventBoardRowModel(PlayerModel player, GarageCleanupBoardRowInfo rowInfo) { }

}

