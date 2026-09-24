namespace GameLogic.Config;

public class EnergySettingsConfigSource : IConfigItemSource<EnergySettingsConfig, EnergyType>, IGameConfigSourceItem<EnergyType, EnergySettingsConfig>, IHasGameConfigKey<EnergyType>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private EnergyType <ConfigKey>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private long <MaxRechargeAmount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<MetaDuration> <DefaultUnitRestoreDuration>k__BackingField; //Field offset: 0x20

	public private override EnergyType ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private Nullable<MetaDuration> DefaultUnitRestoreDuration
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public private long MaxRechargeAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EnergySettingsConfigSource() { }

	[CompilerGenerated]
	public override EnergyType get_ConfigKey() { }

	[CompilerGenerated]
	public Nullable<MetaDuration> get_DefaultUnitRestoreDuration() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public long get_MaxRechargeAmount() { }

	[CompilerGenerated]
	private void set_ConfigKey(EnergyType value) { }

	[CompilerGenerated]
	private void set_DefaultUnitRestoreDuration(Nullable<MetaDuration> value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_MaxRechargeAmount(long value) { }

	public override EnergySettingsConfig ToConfigData(GameConfigBuildLog buildLog) { }

}

