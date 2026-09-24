//Type is in global namespace

public static class TimedMergeBoardStateChanger
{

	[Obsolete("Use the overload with MetacoreTime instead.")]
	public static bool CheckIfThereIsStillTimeLeft(MetaTime currentTime, ProgressState progressState) { }

	public static bool CheckIfThereIsStillTimeLeft(MetacoreTime currentTime, ProgressState progressState) { }

	public static void StartNewTimedMergeBoardIfPossible(MergeBoardId mergeBoardId, PlayerModel playerModel, IAnalyticsCollector collector) { }

	public static void TryToChangeToRewardCollection(PlayerModel playerModel, IAnalyticsCollector collector) { }

	public static void TryToEndTimedMergeBoardIfPossible(PlayerModel playerModel, IAnalyticsCollector collector) { }

}

