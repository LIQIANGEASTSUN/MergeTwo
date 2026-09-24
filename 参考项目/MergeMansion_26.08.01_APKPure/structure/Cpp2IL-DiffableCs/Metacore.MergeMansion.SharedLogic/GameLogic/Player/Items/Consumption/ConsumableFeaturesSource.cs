namespace GameLogic.Player.Items.Consumption;

public class ConsumableFeaturesSource : IItemConfigPart<ConsumableFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string LogicType; //Field offset: 0x18
	public List<String> LogicArgs; //Field offset: 0x20
	public bool AllowNearMatching; //Field offset: 0x28
	public bool DragSafeAreaEnabled; //Field offset: 0x29
	public int ItemStackCap; //Field offset: 0x2C
	public bool CanSpawnBubbles; //Field offset: 0x30

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public ConsumableFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override ConsumableFeatures ToConfigData(IProducerFactory producerFactory) { }

}

