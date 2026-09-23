using GameLogic.Config.Types;

namespace GameLogic.Player.Items.TimeContainer
{
	public interface ITimeContainerFeatures
	{
		bool StoresTime { get; }

		MetacoreDuration DefaultInitialTime { get; }

		TimeContainerMergeBehavior MergeBehavior { get; set; }
	}
}
