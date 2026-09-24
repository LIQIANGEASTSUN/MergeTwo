namespace Game.Logic;

[MetaSerializable]
public class SpawnFactoryState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<String, Int32> currentSpawnIndex; //Field offset: 0x10

	public SpawnFactoryState() { }

	public int GetIndexOf(string id) { }

	public void IncreaseIndexOf(string id) { }

	public void RemoveItemsWithPrefix(string prefix) { }

}

