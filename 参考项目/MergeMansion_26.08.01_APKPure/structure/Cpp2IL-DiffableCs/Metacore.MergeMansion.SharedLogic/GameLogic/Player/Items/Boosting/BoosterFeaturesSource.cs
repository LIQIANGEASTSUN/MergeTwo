namespace GameLogic.Player.Items.Boosting;

public class BoosterFeaturesSource : IItemConfigPart<BoosterFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public BoostAreaStyle Area; //Field offset: 0x18
	public List<String> AffectsOnly; //Field offset: 0x20
	public F32 BoostFactor; //Field offset: 0x28
	public F32 SpawnBoostFactor; //Field offset: 0x2C

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public BoosterFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override BoosterFeatures ToConfigData(IProducerFactory producerFactory) { }

}

