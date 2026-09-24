using System;
using System.Collections.Generic;
using Metaplay.Core;

namespace GameLogic.Random
{
	public static class RandomExtensions
	{
		[Obsolete("This function is BROKEN! Use PickWeightedOrDefault instead. Kept only for FlashSales AB test.")]
		public static T PickWeighted<T>(this RandomPCG randomGenerator, ICollection<(T Element, int Weight)> source, T defaultValue = default(T))
		{
			return default(T);
		}

		public static T PickWeightedOrDefault<T>(this RandomPCG randomGenerator, IReadOnlyList<(T Element, int Weight)> source, T defaultValue = default(T))
		{
			return default(T);
		}

		public static T PickWeightedOrDefault<T>(this RandomPCG randomGenerator, IReadOnlyDictionary<T, int> source, T defaultValue = default(T))
		{
			return default(T);
		}
	}
}
