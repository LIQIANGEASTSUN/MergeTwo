namespace GameLogic.Player.Items.Activation;

[MetaSerializableDerived(1)]
public class ActivationReEngagementSettings : IActivationReEngagementSettings
{
	[CompilerGenerated]
	private MetaDuration <ReEngagementStarts>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <ReEngagementEvery>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ReEngagementMax>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private MetaDuration <AddsDelayBetweenCycles>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private F64 <AddsTimerSkipMultiplier>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <AddsActivationAmountInCycle>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private int <AddsHowManyAreGeneratedInCycle>k__BackingField; //Field offset: 0x3C

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override int AddsActivationAmountInCycle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override MetaDuration AddsDelayBetweenCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private override int AddsHowManyAreGeneratedInCycle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override F64 AddsTimerSkipMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override MetaDuration ReEngagementEvery
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override int ReEngagementMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MetaDuration ReEngagementStarts
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ActivationReEngagementSettings() { }

	public ActivationReEngagementSettings(MetaDuration reEngagementStarts, MetaDuration reEngagementEvery, int reEngagementMax, MetaDuration addsDelayBetweenCycles, F64 addsTimerSkipMultiplier, int addsActivationAmountInCycle, int addsHowManyAreGeneratedInCycle) { }

	[CompilerGenerated]
	public override int get_AddsActivationAmountInCycle() { }

	[CompilerGenerated]
	public override MetaDuration get_AddsDelayBetweenCycles() { }

	[CompilerGenerated]
	public override int get_AddsHowManyAreGeneratedInCycle() { }

	[CompilerGenerated]
	public override F64 get_AddsTimerSkipMultiplier() { }

	[CompilerGenerated]
	public override MetaDuration get_ReEngagementEvery() { }

	[CompilerGenerated]
	public override int get_ReEngagementMax() { }

	[CompilerGenerated]
	public override MetaDuration get_ReEngagementStarts() { }

	[CompilerGenerated]
	private void set_AddsActivationAmountInCycle(int value) { }

	[CompilerGenerated]
	private void set_AddsDelayBetweenCycles(MetaDuration value) { }

	[CompilerGenerated]
	private void set_AddsHowManyAreGeneratedInCycle(int value) { }

	[CompilerGenerated]
	private void set_AddsTimerSkipMultiplier(F64 value) { }

	[CompilerGenerated]
	private void set_ReEngagementEvery(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ReEngagementMax(int value) { }

	[CompilerGenerated]
	private void set_ReEngagementStarts(MetaDuration value) { }

	public override void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey) { }

}

