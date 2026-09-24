using System.Collections.Generic;
using GameLogic.Player;

public static class MergeItemMigrations
{
	public const string TreeMailTitle = "It’s Back!";

	public const string TreeMailTitleExcerpt = "Back it comes!";

	public const string TreeMailBody = "Given that the use of the Planted Bush has now changed, here’s the highest level Planted Bush that you have ever created";

	public const string TreeMailBodyExcerpt = "Your Planted Bush!";

	public const string TimeSkip05MailTitle = "Your Level 5 Time Skip Booster(s)";

	public const string TimeSkip05TitleExcerpt = "Time Skip Booster changes";

	public const string TimeSkip05MailBody = "We have decided to reduce the max level for the Time Skip Boosters because there aren’t really any opportunities to use an 16hr Time Skip in the game. We have replaced any Level 5 Time Skip Boosters you may have with two Level 4 Time Skip Boosters. This will allow for much more flexibility when playing.";

	public const string TimeSkip05MailBodyExcerpt = "Level 4 is now max level";

	public static bool MigrateStoryMergeItems(this PlayerModel playerModel)
	{
		return false;
	}

	public static void MigrateStoryEvent(PlayerModel playerModel, HotspotId eventHotspotId, Dictionary<int, int> replacementMapping, List<int> removeItems)
	{
	}

	public static bool ReturnTree(this PlayerModel player)
	{
		return false;
	}

	public static bool RediscoverStoryItems(this PlayerModel player)
	{
		return false;
	}

	public static bool RediscoverStoryItems(this PlayerModel player, HotspotId hotspotId)
	{
		return false;
	}

	public static bool RediscoverBoardItems(this PlayerModel player)
	{
		return false;
	}

	public static bool MigrateTimeSkipBoosterMaxLevelReduced(this PlayerModel player)
	{
		return false;
	}
}
