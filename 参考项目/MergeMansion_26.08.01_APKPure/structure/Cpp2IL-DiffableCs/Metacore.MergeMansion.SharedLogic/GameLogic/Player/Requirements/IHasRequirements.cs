namespace GameLogic.Player.Requirements;

public interface IHasRequirements
{

	public IEnumerable<PlayerRequirement> Requirements
	{
		 get { } //Length: 0
	}

	public IEnumerable<PlayerRequirement> get_Requirements() { }

}

