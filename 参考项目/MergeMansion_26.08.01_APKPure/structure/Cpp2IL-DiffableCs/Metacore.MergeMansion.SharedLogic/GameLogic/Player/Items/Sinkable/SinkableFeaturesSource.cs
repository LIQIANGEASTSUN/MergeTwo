namespace GameLogic.Player.Items.Sinkable;

public class SinkableFeaturesSource : IItemConfigPart<SinkableFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public List<String> SinkInAction; //Field offset: 0x18

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public SinkableFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override SinkableFeatures ToConfigData(IProducerFactory producerFactory) { }

}

