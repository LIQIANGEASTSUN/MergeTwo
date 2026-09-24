namespace GameLogic.Player.Items.TimeContainer;

public class MetaplayTimeContainerStateFactory : ITimeContainerStateFactory
{
	public static readonly ITimeContainerStateFactory Instance; //Field offset: 0x0

	private static MetaplayTimeContainerStateFactory() { }

	public MetaplayTimeContainerStateFactory() { }

	public override ITimeContainerState Create(MetacoreDuration remaining) { }

}

