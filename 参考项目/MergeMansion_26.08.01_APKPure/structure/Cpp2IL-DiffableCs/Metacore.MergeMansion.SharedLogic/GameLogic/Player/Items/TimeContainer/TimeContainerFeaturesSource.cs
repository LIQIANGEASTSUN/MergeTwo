namespace GameLogic.Player.Items.TimeContainer;

public class TimeContainerFeaturesSource : IItemConfigPart<TimeContainerFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public MetaDuration InitialTime; //Field offset: 0x18
	public TimeContainerMergeBehavior MergeBehavior; //Field offset: 0x20

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public TimeContainerFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override TimeContainerFeatures ToConfigData(IProducerFactory producerFactory) { }

}

