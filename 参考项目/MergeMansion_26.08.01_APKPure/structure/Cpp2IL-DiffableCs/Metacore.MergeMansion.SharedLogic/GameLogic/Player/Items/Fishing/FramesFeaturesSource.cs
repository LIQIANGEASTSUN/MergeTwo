namespace GameLogic.Player.Items.Fishing;

public class FramesFeaturesSource : IItemConfigPart<FramesFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string WeightItem; //Field offset: 0x18

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public FramesFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override FramesFeatures ToConfigData(IProducerFactory producerFactory) { }

}

