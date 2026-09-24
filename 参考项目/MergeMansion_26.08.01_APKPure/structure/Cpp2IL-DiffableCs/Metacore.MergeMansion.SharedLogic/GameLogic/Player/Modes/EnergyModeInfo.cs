namespace GameLogic.Player.Modes;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {2, 6, 7})]
[MetaSerializable]
public class EnergyModeInfo : IGameConfigData<PlayerModeId>, IGameConfigData, IHasGameConfigKey<PlayerModeId>, IValidatable, IComparable<EnergyModeInfo>
{
	[CompilerGenerated]
	private PlayerModeId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <EnergyConsumptionMultiplier>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <CapacityConsumptionMultiplier>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private F32 <LevelUpChance>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private CurrencySink <CurrencySink>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private int <LevelUpCount>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <NameLocId>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<PlayerRequirement> <EnableRequirements>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private bool <DisableEnergyFallbacks>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x44

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int CapacityConsumptionMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override PlayerModeId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private CurrencySink CurrencySink
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private bool DisableEnergyFallbacks
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	public private List<PlayerRequirement> EnableRequirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int EnergyConsumptionMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private F32 LevelUpChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private int LevelUpCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private string NameLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EnergyModeInfo(PlayerModeId configKey, int energyConsumptionMultiplier, int capacityConsumptionMultiplier, F32 levelUpChance, int levelUpCount, string nameLocId, List<PlayerRequirement> enableRequirements, bool disableEnergyFallbacks, int experimentPriority) { }

	public EnergyModeInfo() { }

	public override int CompareTo(EnergyModeInfo other) { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public int get_CapacityConsumptionMultiplier() { }

	[CompilerGenerated]
	public override PlayerModeId get_ConfigKey() { }

	[CompilerGenerated]
	public CurrencySink get_CurrencySink() { }

	[CompilerGenerated]
	public bool get_DisableEnergyFallbacks() { }

	[CompilerGenerated]
	public List<PlayerRequirement> get_EnableRequirements() { }

	[CompilerGenerated]
	public int get_EnergyConsumptionMultiplier() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public F32 get_LevelUpChance() { }

	[CompilerGenerated]
	public int get_LevelUpCount() { }

	[CompilerGenerated]
	public string get_NameLocId() { }

	public int GetFallbacks(IPlayer player, IBoard board, EnergyModeInfo[] resultBuffer) { }

	public bool MatchesEnableRequirements(IPlayer player) { }

	[CompilerGenerated]
	private void set_CapacityConsumptionMultiplier(int value) { }

	[CompilerGenerated]
	private void set_ConfigKey(PlayerModeId value) { }

	[CompilerGenerated]
	private void set_CurrencySink(CurrencySink value) { }

	[CompilerGenerated]
	private void set_DisableEnergyFallbacks(bool value) { }

	[CompilerGenerated]
	private void set_EnableRequirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_EnergyConsumptionMultiplier(int value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_LevelUpChance(F32 value) { }

	[CompilerGenerated]
	private void set_LevelUpCount(int value) { }

	[CompilerGenerated]
	private void set_NameLocId(string value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

