using System.Collections.Generic;
using GameLogic.Config.Types;
using Metaplay.Core;

public static class TimeBasedRandom
{
	public static int Roll(MetacoreTime timestamp, int exclusiveMax)
	{
		return 0;
	}

	public static T RollWeighted<T>(MetacoreTime timestamp, Dictionary<T, int> weightedSource, T defaultValue = default(T))
	{
		return default(T);
	}

	public static RandomPCG GetRandom(MetacoreTime timestamp)
	{
		return null;
	}

	public static RandomPCG GetRandomWithSeed(ulong incomingSeed)
	{
		return null;
	}
}
