namespace GameLogic.Player.Items.Persistent;

public class PersistentFeaturesSource : IItemConfigPart<PersistentFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public bool HasPersistentFeatures; //Field offset: 0x18
	public bool HasItemStates; //Field offset: 0x19
	public int DecayCycles; //Field offset: 0x1C
	public int ItemStates; //Field offset: 0x20
	public string ResetToItem; //Field offset: 0x28

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public PersistentFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override PersistentFeatures ToConfigData(IProducerFactory producerFactory) { }

}

