namespace GameLogic.Player.Items.Chest;

public class ChestFeaturesSource : IItemConfigPart<ChestFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public MetaDuration OpenDuration; //Field offset: 0x18
	public int HowManyToRoll; //Field offset: 0x20
	public string HintLocId; //Field offset: 0x28
	public string ProducerType; //Field offset: 0x30
	public string RandomMarker; //Field offset: 0x38
	public InitialSequenceType InitialSequenceType; //Field offset: 0x40
	public string InitialSequence; //Field offset: 0x48
	public List<String> Item; //Field offset: 0x50
	public List<Int32> Weight; //Field offset: 0x58
	public FallbackPlayerRewardId FallbackChestId; //Field offset: 0x60

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public ChestFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override ChestFeatures ToConfigData(IProducerFactory producerFactory) { }

	private void ValidateHowManyToRoll() { }

}

