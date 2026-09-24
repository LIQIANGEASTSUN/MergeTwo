namespace GameLogic.Player.Items.Activation;

public class ActivationFeaturesSource : IItemConfigPart<ActivationFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public string ProducerType; //Field offset: 0x18
	public string RandomMarker; //Field offset: 0x20
	public InitialSequenceType InitialSequenceType; //Field offset: 0x28
	public string InitialSequence; //Field offset: 0x30
	public List<String> Item; //Field offset: 0x38
	public List<Int32> Weight; //Field offset: 0x40
	public ActivationPlacementStyle PlacementStyle; //Field offset: 0x48
	public MetaDuration ActivationDelay; //Field offset: 0x50
	public MetaDuration FirstCycleStartDelay; //Field offset: 0x58
	public List<MetaDuration> DelayBetweenCycles; //Field offset: 0x60
	public List<MetaDuration> InitialDelayBetweenCycles; //Field offset: 0x68
	public List<F64> TimerSkipMultiplier; //Field offset: 0x70
	public List<F64> InitialTimerSkipMultiplier; //Field offset: 0x78
	public List<Int32> HowManyAreGeneratedInCycle; //Field offset: 0x80
	public List<Int32> InitialHowManyAreGeneratedInCycle; //Field offset: 0x88
	public List<Int32> ActivationAmountInCycle; //Field offset: 0x90
	public List<Int32> InitialActivationAmountInCycle; //Field offset: 0x98
	public int HowManyCycles; //Field offset: 0xA0
	public int StorageMax; //Field offset: 0xA4
	public string DecayProducerType; //Field offset: 0xA8
	public string DecayRandomMarker; //Field offset: 0xB0
	public InitialSequenceType DecayInitialSequenceType; //Field offset: 0xB8
	public string DecayInitialSequence; //Field offset: 0xC0
	public List<String> DecayItem; //Field offset: 0xC8
	public List<Int32> DecayWeight; //Field offset: 0xD0
	public Nullable<MetaDuration> DecayDelay; //Field offset: 0xD8
	public ItemVisibility ProductVisibility; //Field offset: 0xE8
	public bool StartsFull; //Field offset: 0xEC
	public Nullable<Int32> ActivationCost; //Field offset: 0xF0
	public bool ShowTapTextOnDiscovery; //Field offset: 0xF8
	public bool AllowCooldownRemover; //Field offset: 0xF9
	public bool AllowEnergyMode; //Field offset: 0xFA
	[CompilerGenerated]
	private List<String> <ActivationRequirementType>k__BackingField; //Field offset: 0x100
	[CompilerGenerated]
	private List<String> <ActivationRequirementId>k__BackingField; //Field offset: 0x108
	[CompilerGenerated]
	private List<String> <ActivationRequirementAmount>k__BackingField; //Field offset: 0x110
	[CompilerGenerated]
	private List<String> <ActivationRequirementAux0>k__BackingField; //Field offset: 0x118

	public List<String> ActivationRequirementAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> ActivationRequirementAux0
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> ActivationRequirementId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public List<String> ActivationRequirementType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 16
	}

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public ActivationFeaturesSource() { }

	[CompilerGenerated]
	public List<String> get_ActivationRequirementAmount() { }

	[CompilerGenerated]
	public List<String> get_ActivationRequirementAux0() { }

	[CompilerGenerated]
	public List<String> get_ActivationRequirementId() { }

	[CompilerGenerated]
	public List<String> get_ActivationRequirementType() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	public void set_ActivationRequirementAmount(List<String> value) { }

	[CompilerGenerated]
	public void set_ActivationRequirementAux0(List<String> value) { }

	[CompilerGenerated]
	public void set_ActivationRequirementId(List<String> value) { }

	[CompilerGenerated]
	public void set_ActivationRequirementType(List<String> value) { }

	public override ActivationFeatures ToConfigData(IProducerFactory producerFactory) { }

}

