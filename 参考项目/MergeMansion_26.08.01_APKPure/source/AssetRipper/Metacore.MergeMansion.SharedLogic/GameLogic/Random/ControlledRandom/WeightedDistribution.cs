using System;
using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Random.ControlledRandom
{
	public class WeightedDistribution
	{
		[NonSerialized]
		public Weight[] weights;

		public static readonly F32 minWeight;

		public static readonly F32 maxWeight;

		public WeightedDistribution(List<F32> initializerList)
		{
		}

		public WeightedDistribution(Weight[] existingWeights)
		{
		}

		public Weight[] GetWeights()
		{
			return null;
		}

		public void Initialize(RandomPCG rng)
		{
		}

		public int PickRandom(RandomPCG rng)
		{
			return 0;
		}

		public static void HeapTopUpdated(IList<Weight> weights, Weight.CompareByNextTime compare)
		{
		}
	}
}
