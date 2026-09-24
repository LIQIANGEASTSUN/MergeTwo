namespace GameLogic.Player.Items.Consumption;

public class ItemIsLockedResult : IConsumptionCheckResult
{
	public static readonly IConsumptionCheckResult Instance; //Field offset: 0x0

	public override string ErrorLocKey
	{
		 get { } //Length: 64
	}

	public override bool Success
	{
		 get { } //Length: 8
	}

	private static ItemIsLockedResult() { }

	public ItemIsLockedResult() { }

	public override string get_ErrorLocKey() { }

	public override bool get_Success() { }

}

