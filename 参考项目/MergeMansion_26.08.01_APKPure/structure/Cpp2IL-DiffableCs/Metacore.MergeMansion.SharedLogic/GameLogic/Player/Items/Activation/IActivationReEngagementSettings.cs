namespace GameLogic.Player.Items.Activation;

[MetaSerializable]
public interface IActivationReEngagementSettings
{

	public int AddsActivationAmountInCycle
	{
		 get { } //Length: 0
	}

	public MetaDuration AddsDelayBetweenCycles
	{
		 get { } //Length: 0
	}

	public int AddsHowManyAreGeneratedInCycle
	{
		 get { } //Length: 0
	}

	public F64 AddsTimerSkipMultiplier
	{
		 get { } //Length: 0
	}

	public MetaDuration ReEngagementEvery
	{
		 get { } //Length: 0
	}

	public int ReEngagementMax
	{
		 get { } //Length: 0
	}

	public MetaDuration ReEngagementStarts
	{
		 get { } //Length: 0
	}

	public int get_AddsActivationAmountInCycle() { }

	public MetaDuration get_AddsDelayBetweenCycles() { }

	public int get_AddsHowManyAreGeneratedInCycle() { }

	public F64 get_AddsTimerSkipMultiplier() { }

	public MetaDuration get_ReEngagementEvery() { }

	public int get_ReEngagementMax() { }

	public MetaDuration get_ReEngagementStarts() { }

	public void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey) { }

}

