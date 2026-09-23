using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public interface IWritableTimeContainerState : ITimeContainerState
	{
		void SetRemaining(MetacoreDuration remaining);
	}
}
