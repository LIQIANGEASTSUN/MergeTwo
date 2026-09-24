namespace GameLogic.Random.ControlledRandom;

[MetaSerializable]
public class ControlledRandomMinMaxSequence
{
	internal class ElementInfo
	{
		public T Element; //Field offset: 0x0
		public int Weight; //Field offset: 0x0
		public int MinBetweenTwoSame; //Field offset: 0x0
		public int MaxBetweenTwoSame; //Field offset: 0x0

		public ElementInfo`1() { }

	}

	private const int SwapAttemptPerWeight = 4; //Field offset: 0x0
	[CompilerGenerated]
	private ulong <Seed>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Index>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int Index
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private ulong Seed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ControlledRandomMinMaxSequence(ulong seed) { }

	private ControlledRandomMinMaxSequence() { }

	public static List<T> BuildSequence(ControlledRandomMinMaxSequenceContext<T> context, ulong seed, int minFullSequenceLength = 1) { }

	public List<T> BuildSequence(ControlledRandomMinMaxSequenceContext<T> context, int minFullSequenceLength = 1) { }

	public List<T> BuildSequenceSimplified(List<T> elements, int sequenceLength, int minFullSequenceLength = 1) { }

	public static int CalculateSumOfWeights(List<ElementInfo`1<T>> list) { }

	private static int ChooseBestElement(Int32[] weights, F32[] averages, Int32[] currentWeightByElement, List<Int32> possibleElements, int index) { }

	private static List<Int32> ChoosePossibleElements(List<Int32> survivingIds, List<Int32> currentSequence, Int32[] lastOccurrence, Int32[] currentWeightByElement, Int32[] minBetweenTwoSame, Int32[] maxBetweenTwoSame, List<Int32> possibleElements, List<Int32> requiredElementsBecauseOfMax) { }

	public List<T> DrawNext(ControlledRandomMinMaxSequenceContext<T> context, int amountToDraw) { }

	public List<T> DrawNextSimplified(List<T> elements, int sequenceLength, int amountToDraw) { }

	private static List<Int32> GenerateFallbackSequence(RandomPCG random, List<Int32> survivingIds, Int32[] weights) { }

	public int GenerateSequenceLength(int minLength, int maxLength) { }

	[CompilerGenerated]
	public int get_Index() { }

	[CompilerGenerated]
	public ulong get_Seed() { }

	public static bool IsValidMaxBetweenTwoSame(List<Int32> randomMaxBetweenTwoSame, List<F32> weights, out int i, out int value) { }

	public static bool IsValidMinBetweenTwoSame(List<Int32> randomMinBetweenTwoSame, List<F32> weights, out int i, out int value) { }

	public static bool IsValidNoDuplicates(List<T> elements, List<F32> weights, out int i) { }

	private static bool IsValidSequenceAt(List<Int32> sequence, Int32[] minBetweenTwoSame, Int32[] maxBetweenTwoSame, int index, int elementIn, int elementOut) { }

	[CompilerGenerated]
	public void set_Index(int value) { }

	[CompilerGenerated]
	private void set_Seed(ulong value) { }

	private static void Swap(List<Int32> sequence, int index0, int index1) { }

	private static void TrySwaps(RandomPCG random, Int32[] minBetweenTwoSame, Int32[] maxBetweenTwoSame, List<Int32> sequence, List<Int32> indexes) { }

	private static void UpdateLastOccurrenceAfterSwaps(int survivingIdCount, Int32[] lastOccurrence, List<Int32> sequence) { }

}

