namespace GameLogic.Player.Items.Consumption;

public interface IConsumptionCheckResult
{

	public string ErrorLocKey
	{
		 get { } //Length: 0
	}

	public bool Success
	{
		 get { } //Length: 0
	}

	public string get_ErrorLocKey() { }

	public bool get_Success() { }

}

