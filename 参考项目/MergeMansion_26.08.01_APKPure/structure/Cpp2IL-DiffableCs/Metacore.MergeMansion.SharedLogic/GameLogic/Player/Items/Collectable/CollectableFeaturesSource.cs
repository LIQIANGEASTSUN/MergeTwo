namespace GameLogic.Player.Items.Collectable;

public class CollectableFeaturesSource : IItemConfigPart<CollectableFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string ActionType; //Field offset: 0x18
	public List<String> ActionArg; //Field offset: 0x20
	public bool ConfirmCollectBelowMergeChainLevel; //Field offset: 0x28
	public bool CollectOnSpawn; //Field offset: 0x29

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public CollectableFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override CollectableFeatures ToConfigData(IProducerFactory producerFactory) { }

}

