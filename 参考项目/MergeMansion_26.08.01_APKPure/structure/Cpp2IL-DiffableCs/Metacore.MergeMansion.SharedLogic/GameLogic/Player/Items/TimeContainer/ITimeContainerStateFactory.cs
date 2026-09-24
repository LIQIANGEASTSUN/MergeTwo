namespace GameLogic.Player.Items.TimeContainer;

public interface ITimeContainerStateFactory
{

	public ITimeContainerState Create(MetacoreDuration remaining) { }

	public static ITimeContainerStateFactory GetFactory() { }

}

