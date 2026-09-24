using GameLogic.Config;

namespace GameLogic.Player.Items.Production
{
	public interface IItemOdds
	{
		int Weight { get; }

		int ConfigKey { get; }

		IItemDefinition GetItem(IMergeMansionGameConfig config);
	}
}
