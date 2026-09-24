using System;
using Metaplay.Core;

namespace GameLogic.Player.Items.Chest
{
	public static class ChestStateExtensions
	{
		[Obsolete("use the version with MetacoreTime")]
		public static bool IsReadyForOpen(this IChestState chestState, MetaTime metatime)
		{
			return false;
		}
	}
}
