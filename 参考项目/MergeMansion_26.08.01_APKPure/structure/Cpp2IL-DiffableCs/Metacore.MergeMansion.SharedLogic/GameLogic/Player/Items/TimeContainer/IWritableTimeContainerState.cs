namespace GameLogic.Player.Items.TimeContainer;

public interface IWritableTimeContainerState : ITimeContainerState
{

	public void SetRemaining(MetacoreDuration remaining) { }

}

