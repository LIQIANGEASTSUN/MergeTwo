using GameLogic.Player.MergeTasks;

namespace UI.Board
{
	public interface ITaskTab
	{
		void ProcessShowButtonTap(ITaskCardView taskView);

		void InitTasks();
	}
}
