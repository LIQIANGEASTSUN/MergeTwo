namespace GameLogic.Player.Items.Decay;

public class DecayFeaturesSource : IItemConfigPart<DecayFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public bool DoesDecay; //Field offset: 0x18
	public MetaDuration Lifetime; //Field offset: 0x20
	public string ProducerType; //Field offset: 0x28
	public string RandomMarker; //Field offset: 0x30
	public InitialSequenceType InitialSequenceType; //Field offset: 0x38
	public string InitialSequence; //Field offset: 0x40
	public List<String> Item; //Field offset: 0x48
	public List<Int32> Weight; //Field offset: 0x50
	public DecayMergeMode DecayMergeMode; //Field offset: 0x58
	public DecayInheritMode DecayInheritMode; //Field offset: 0x5C
	public bool DoesBoosterAccelerateDecay; //Field offset: 0x60
	public bool ShowDecayTimer; //Field offset: 0x61
	public bool ShowDecayVfx; //Field offset: 0x62
	[CompilerGenerated]
	private MetaDuration <RemainingDurationForDecayVfx>k__BackingField; //Field offset: 0x68

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public private MetaDuration RemainingDurationForDecayVfx
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public DecayFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	public MetaDuration get_RemainingDurationForDecayVfx() { }

	[CompilerGenerated]
	private void set_RemainingDurationForDecayVfx(MetaDuration value) { }

	public override DecayFeatures ToConfigData(IProducerFactory producerFactory) { }

}

