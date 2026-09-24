namespace GameLogic.Player.Items.Chest;

[Extension]
public static class ChestStateExtensions
{

	[Extension]
	[Obsolete("use the version with MetacoreTime")]
	public static bool IsReadyForOpen(IChestState chestState, MetaTime metatime) { }

}

