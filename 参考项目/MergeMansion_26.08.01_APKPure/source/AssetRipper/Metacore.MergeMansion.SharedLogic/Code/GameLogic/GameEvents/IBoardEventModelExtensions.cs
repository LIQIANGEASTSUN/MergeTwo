using GameLogic.Player;

namespace Code.GameLogic.GameEvents
{
	public static class IBoardEventModelExtensions
	{
		public static void ClaimExtensionRewards(this IBoardEventModel eventModel, IPlayer player)
		{
		}

		public static void ResetAuxEnergyIfUsedByEvent(this IBoardEventModel eventModel, IPlayer player)
		{
		}

		public static EnergyType GetEnergyType(this IBoardEventModel eventModel, IPlayer player)
		{
			return default(EnergyType);
		}

		public static bool RequiresItem(this IBoardEventModel eventModel, int item, IPlayer player, bool checkSeasonal)
		{
			return false;
		}
	}
}
