namespace GameLogic.Utility.Math;

public static class MergeMath
{

	public static long BaseItemsNeeded(long targetLevel, int copiesNeededForMerge = 2) { }

	public static F32 Clamp(F32 value, F32 min, F32 max) { }

	public static int Clamp(int value, int min, int max) { }

	public static F64 InverseLerp(F64 a, F64 b, F64 value) { }

	public static F32 InverseLerp(F32 a, F32 b, F32 value) { }

	public static F64 Lerp(F64 a, F64 b, F64 value) { }

	public static long MaxPotentialLevelReached(long baseItemCount, int copiesNeededForMerge = 2) { }

	public static double MaxPotentialLevelReachedPrecise(long baseItemCount, int copiesNeededForMerge = 2) { }

	public static long MaxSlotsNeeded(long targetLevel, int copiesNeededForMerge = 2) { }

	public static long NumberOfItemsYielded(long secondsToYieldOne, long seconds) { }

	public static long SecondsToGetItemToLevel(long secondsToGetOne, long targetLevel, int copiesNeededForMerge = 2) { }

}

