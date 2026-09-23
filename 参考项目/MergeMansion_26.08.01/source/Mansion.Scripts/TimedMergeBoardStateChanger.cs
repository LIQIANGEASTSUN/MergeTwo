using System;
using Analytics;
using Game.Logic;
using GameLogic.Config.Types;
using GameLogic.Player;
using Merge;
using Metaplay.Core;

public static class TimedMergeBoardStateChanger
{
	public static void StartNewTimedMergeBoardIfPossible(MergeBoardId mergeBoardId, PlayerModel playerModel, IAnalyticsCollector collector)
	{
	}

	[Obsolete("Use the overload with MetacoreTime instead.")]
	public static bool CheckIfThereIsStillTimeLeft(MetaTime currentTime, ProgressState progressState)
	{
		return false;
	}

	public static bool CheckIfThereIsStillTimeLeft(MetacoreTime currentTime, ProgressState progressState)
	{
		return false;
	}

	public static void TryToChangeToRewardCollection(PlayerModel playerModel, IAnalyticsCollector collector)
	{
	}

	public static void TryToEndTimedMergeBoardIfPossible(PlayerModel playerModel, IAnalyticsCollector collector)
	{
	}
}
