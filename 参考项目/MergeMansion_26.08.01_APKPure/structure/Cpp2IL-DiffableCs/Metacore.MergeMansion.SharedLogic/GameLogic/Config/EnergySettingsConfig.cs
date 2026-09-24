namespace GameLogic.Config;

[MetaSerializable]
public class EnergySettingsConfig : IGameConfigData<EnergyType>, IGameConfigData, IHasGameConfigKey<EnergyType>, IValidatable
{
	[CompilerGenerated]
	private EnergyType <EnergyType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private long <MaxRechargeAmount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<MetaDuration> <DefaultUnitRestoreDuration>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	public override EnergyType ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private Nullable<MetaDuration> DefaultUnitRestoreDuration
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private EnergyType EnergyType
	{
		[CompilerGenerated]
		private get { } //Length: 8
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

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private long MaxRechargeAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EnergySettingsConfig() { }

	public EnergySettingsConfig(EnergyType energyType, long maxRechargeAmount, Nullable<MetaDuration> defaultUnitRestoreDuration, int experimentPriority) { }

	public override EnergyType get_ConfigKey() { }

	[CompilerGenerated]
	public Nullable<MetaDuration> get_DefaultUnitRestoreDuration() { }

	[CompilerGenerated]
	private EnergyType get_EnergyType() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public long get_MaxRechargeAmount() { }

	[CompilerGenerated]
	private void set_DefaultUnitRestoreDuration(Nullable<MetaDuration> value) { }

	[CompilerGenerated]
	private void set_EnergyType(EnergyType value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_MaxRechargeAmount(long value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

