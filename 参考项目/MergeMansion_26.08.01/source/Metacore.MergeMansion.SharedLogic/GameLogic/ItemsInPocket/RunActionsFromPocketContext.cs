using GameLogic.Player.Director.Config;

namespace GameLogic.ItemsInPocket
{
	public class RunActionsFromPocketContext : IDirectorActionContext
	{
		public bool LogEnabled { get; }

		public RunActionsFromPocketContext(bool logEnabled)
		{
		}
	}
}
