using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public class MetaplayTimeContainerStateFactory : ITimeContainerStateFactory
	{
		public static readonly ITimeContainerStateFactory Instance;

		public ITimeContainerState Create(MetacoreDuration remaining)
		{
			return null;
		}
	}
}
