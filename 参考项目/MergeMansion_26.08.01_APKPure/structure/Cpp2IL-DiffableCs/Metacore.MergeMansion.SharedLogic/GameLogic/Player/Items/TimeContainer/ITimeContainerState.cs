namespace GameLogic.Player.Items.TimeContainer;

public interface ITimeContainerState
{

	public MetacoreDuration Remaining
	{
		 get { } //Length: 0
	}

	public MetacoreDuration get_Remaining() { }

}

