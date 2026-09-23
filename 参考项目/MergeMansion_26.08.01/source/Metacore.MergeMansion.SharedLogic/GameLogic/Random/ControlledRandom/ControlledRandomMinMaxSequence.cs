using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Random.ControlledRandom
{
	[MetaSerializable]
	public class ControlledRandomMinMaxSequence
	{
		public class ElementInfo<T>
		{
			public T Element;

			public int Weight;

			public int MinBetweenTwoSame;

			public int MaxBetweenTwoSame;
		}

		public const int SwapAttemptPerWeight = 4;

		[MetaMember(1, MetaMemberFlags.None)]
		public ulong Seed { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Index { get; set; }

		public static int CalculateSumOfWeights<T>(List<ElementInfo<T>> list)
		{
			return 0;
		}

		public ControlledRandomMinMaxSequence()
		{
		}

		public ControlledRandomMinMaxSequence(ulong seed)
		{
		}

		public static bool IsValidMinBetweenTwoSame(List<int> randomMinBetweenTwoSame, List<F32> weights, out int i, out int value)
		{
			i = default(int);
			value = default(int);
			return false;
		}

		public static bool IsValidMaxBetweenTwoSame(List<int> randomMaxBetweenTwoSame, List<F32> weights, out int i, out int value)
		{
			i = default(int);
			value = default(int);
			return false;
		}

		public static bool IsValidNoDuplicates<T>(List<T> elements, List<F32> weights, out int i)
		{
			i = default(int);
			return false;
		}

		public List<T> BuildSequence<T>(ControlledRandomMinMaxSequenceContext<T> context, int minFullSequenceLength = 1)
		{
			return null;
		}

		public static List<T> BuildSequence<T>(ControlledRandomMinMaxSequenceContext<T> context, ulong seed, int minFullSequenceLength = 1)
		{
			return null;
		}

		public int GenerateSequenceLength(int minLength, int maxLength)
		{
			return 0;
		}

		public List<T> BuildSequenceSimplified<T>(List<T> elements, int sequenceLength, int minFullSequenceLength = 1)
		{
			return null;
		}

		public List<T> DrawNext<T>(ControlledRandomMinMaxSequenceContext<T> context, int amountToDraw)
		{
			return null;
		}

		public List<T> DrawNextSimplified<T>(List<T> elements, int sequenceLength, int amountToDraw)
		{
			return null;
		}

		public static int ChooseBestElement(int[] weights, F32[] averages, int[] currentWeightByElement, List<int> possibleElements, int index)
		{
			return 0;
		}

		public static List<int> ChoosePossibleElements(List<int> survivingIds, List<int> currentSequence, int[] lastOccurrence, int[] currentWeightByElement, int[] minBetweenTwoSame, int[] maxBetweenTwoSame, List<int> possibleElements, List<int> requiredElementsBecauseOfMax)
		{
			return null;
		}

		public static List<int> GenerateFallbackSequence(RandomPCG random, List<int> survivingIds, int[] weights)
		{
			return null;
		}

		public static bool IsValidSequenceAt(List<int> sequence, int[] minBetweenTwoSame, int[] maxBetweenTwoSame, int index, int elementIn, int elementOut)
		{
			return false;
		}

		public static void Swap(List<int> sequence, int index0, int index1)
		{
		}

		public static void TrySwaps(RandomPCG random, int[] minBetweenTwoSame, int[] maxBetweenTwoSame, List<int> sequence, List<int> indexes)
		{
		}

		public static void UpdateLastOccurrenceAfterSwaps(int survivingIdCount, int[] lastOccurrence, List<int> sequence)
		{
		}
	}
}
