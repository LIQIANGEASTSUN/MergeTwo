namespace GameLogic.Player.Items.Spawning;

public class SpawnFeaturesSource : IItemConfigPart<SpawnFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string ProducerType; //Field offset: 0x18
	public string RandomMarker; //Field offset: 0x20
	public InitialSequenceType InitialSequenceType; //Field offset: 0x28
	public string InitialSequence; //Field offset: 0x30
	public List<String> Item; //Field offset: 0x38
	public List<Int32> Weight; //Field offset: 0x40
	public SpawnStyle SpawnStyle; //Field offset: 0x48
	public string SpawnCycleType; //Field offset: 0x50
	public MetaDuration SpawnDelay; //Field offset: 0x58
	public MetaDuration FirstCycleStartDelay; //Field offset: 0x60
	public MetaDuration DelayBetweenCycles; //Field offset: 0x68
	public int HowManyAreGeneratedPerSpawn; //Field offset: 0x70
	public int SpawnAmountInCycle; //Field offset: 0x74
	public int HowManyCycles; //Field offset: 0x78
	public int StorageMax; //Field offset: 0x7C
	public string DecayProducerType; //Field offset: 0x80
	public string DecayRandomMarker; //Field offset: 0x88
	public InitialSequenceType DecayInitialSequenceType; //Field offset: 0x90
	public string DecayInitialSequence; //Field offset: 0x98
	public List<String> DecayItem; //Field offset: 0xA0
	public List<Int32> DecayWeight; //Field offset: 0xA8
	public ItemVisibility ProductVisibility; //Field offset: 0xB0

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public SpawnFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override SpawnFeatures ToConfigData(IProducerFactory producerFactory) { }

}

