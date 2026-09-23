using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public interface ITimeContainerState
	{
		MetacoreDuration Remaining { get; }
	}
}
