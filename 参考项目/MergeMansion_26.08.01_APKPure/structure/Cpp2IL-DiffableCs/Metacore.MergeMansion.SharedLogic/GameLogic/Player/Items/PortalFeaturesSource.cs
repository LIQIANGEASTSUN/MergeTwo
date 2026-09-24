namespace GameLogic.Player.Items;

public class PortalFeaturesSource : IItemConfigPart<PortalFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public PortalType Type; //Field offset: 0x18
	public MergeBoardId TargetBoard; //Field offset: 0x20

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public PortalFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override PortalFeatures ToConfigData(IProducerFactory producerFactor) { }

}

