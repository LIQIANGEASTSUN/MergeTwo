namespace GameLogic.Player.Items.Activation;

public class ActivationReEngagementSettingsSource : IItemConfigPart<ActivationReEngagementSettings>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public Nullable<MetaDuration> ReEngagementStarts; //Field offset: 0x18
	public Nullable<MetaDuration> ReEngagementEvery; //Field offset: 0x28
	public Nullable<Int32> ReEngagementMax; //Field offset: 0x38
	public Nullable<MetaDuration> AddsDelayBetweenCycles; //Field offset: 0x40
	public Nullable<F64> AddsTimerSkipMultiplier; //Field offset: 0x50
	public Nullable<Int32> AddsActivationAmountInCycle; //Field offset: 0x60
	public Nullable<Int32> AddsHowManyAreGeneratedInCycle; //Field offset: 0x68

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public ActivationReEngagementSettingsSource() { }

	public override string get_ConfigKey() { }

	public override ActivationReEngagementSettings ToConfigData(IProducerFactory producerFactory) { }

}

