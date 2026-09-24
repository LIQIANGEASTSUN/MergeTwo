using GameLogic.Config;

namespace GameLogic.Utility
{
	public static class PlayerPocketUtilities
	{
		public const int PortalPocketPriority = 99;

		public static bool CanMoveToBoard(IMergeMansionGameConfig gameConfig, int itemId)
		{
			return false;
		}

		public static int GetPriority(IMergeMansionGameConfig gameConfig, int itemId)
		{
			return 0;
		}

		public static bool IsNecessaryValidCoordinateToRunFromPocket(IMergeMansionGameConfig gameConfig, int itemId)
		{
			return false;
		}
	}
}
