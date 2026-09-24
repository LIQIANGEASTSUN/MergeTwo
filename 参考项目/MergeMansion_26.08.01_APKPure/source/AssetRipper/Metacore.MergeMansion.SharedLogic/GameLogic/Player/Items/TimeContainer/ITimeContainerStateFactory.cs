using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public interface ITimeContainerStateFactory
	{
		ITimeContainerState Create(MetacoreDuration remaining);

		static ITimeContainerStateFactory GetFactory()
		{
			return null;
		}
	}
}
