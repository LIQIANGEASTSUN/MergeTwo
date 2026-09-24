namespace GameLogic.Player.Requirements;

public interface IHasRequirement
{

	public PlayerRequirement Requirement
	{
		 get { } //Length: 0
	}

	public PlayerRequirement get_Requirement() { }

}

