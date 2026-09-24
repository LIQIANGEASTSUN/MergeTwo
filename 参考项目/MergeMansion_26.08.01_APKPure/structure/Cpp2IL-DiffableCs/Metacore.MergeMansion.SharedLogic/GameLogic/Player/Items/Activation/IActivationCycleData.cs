namespace GameLogic.Player.Items.Activation;

[MetaSerializable]
public interface IActivationCycleData
{

	public int CycleCount
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<Int32> GetActivationAmountInCycle
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<MetaDuration> GetDelaysBetweenCycles
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<Int32> GetHowManyAreGeneratedInCycle
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<F64> GetTimerSkipMultiplier
	{
		 get { } //Length: 0
	}

	public int get_CycleCount() { }

	public IReadOnlyList<Int32> get_GetActivationAmountInCycle() { }

	public IReadOnlyList<MetaDuration> get_GetDelaysBetweenCycles() { }

	public IReadOnlyList<Int32> get_GetHowManyAreGeneratedInCycle() { }

	public IReadOnlyList<F64> get_GetTimerSkipMultiplier() { }

	public void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey) { }

}

