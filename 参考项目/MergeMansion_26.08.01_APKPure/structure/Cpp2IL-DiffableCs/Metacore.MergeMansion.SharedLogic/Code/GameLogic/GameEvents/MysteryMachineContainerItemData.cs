namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public struct MysteryMachineContainerItemData
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public IMysteryMachineItem Item; //Field offset: 0x0
	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaTime OriginalSpawnTime; //Field offset: 0x8

	public MysteryMachineContainerItemData(IMysteryMachineItem item, MetaTime originalSpawnTime) { }

}

