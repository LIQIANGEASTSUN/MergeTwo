namespace GameLogic.Player.Items.Charges;

public class ChargesFeaturesSource : IItemConfigPart<ChargesFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public int InitialCharges; //Field offset: 0x18
	public ChargeMergeBehavior MergeBehavior; //Field offset: 0x1C

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public ChargesFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override ChargesFeatures ToConfigData(IProducerFactory producerFactory) { }

}

