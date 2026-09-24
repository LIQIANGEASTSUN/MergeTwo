namespace GameLogic.Player;

[MetaSerializable]
public class WeightedDistributionStates
{
	private const string MergePrefix = "me_"; //Field offset: 0x0
	private const string BubblePrefix = "bu_"; //Field offset: 0x0
	private const string SpawnPrefix = "as_"; //Field offset: 0x0
	private const string DecayPrefix = "ad_"; //Field offset: 0x0
	private const string ActivationPrefix = "ms_"; //Field offset: 0x0
	private const string ChestPrefix = "ch_"; //Field offset: 0x0
	private const string SinkPrefix = "sk_"; //Field offset: 0x0
	private const string OrderPrefix = "or_"; //Field offset: 0x0
	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<String, Weight[]> wdStates; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private MetaDictionary<String, UInt32> wdChecksums; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaDictionary<String, Int32> wdSequenceIndexes; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	private MetaDictionary<String, UInt64> wdRandomSequenceSeeds; //Field offset: 0x28

	public WeightedDistributionStates() { }

	public void AdvanceSequenceIndex(RollHistoryType rollType, int markerItem, int totalCount) { }

	private static uint CalculateOddListHash(List<ValueTuple`2<Int32, Int32>> oddsList) { }

	private static WeightedDistribution GenerateWeightedDistributionFromOddsList(List<ValueTuple`2<Int32, Int32>> oddsList) { }

	public int GetCurrentSequenceIndexAndGoNext(RollHistoryType rollType, int markerItem, int totalCount) { }

	public ulong GetRandomSequenceSeed(RollHistoryType rollType, int markerItem) { }

	public int GetSequenceIndex(RollHistoryType rollType, int markerItem, int totalCount) { }

	public void ResetCurrentSequenceIndex(RollHistoryType rollType, int markerItem) { }

	public int Roll(RollHistoryType rollType, int markerItem, List<ValueTuple`2<Int32, Int32>> initialOddsList, RandomPCG rng) { }

	private static int Roll(string key, List<ValueTuple`2<Int32, Int32>> initialOddsList, RandomPCG rng, IDictionary<String, Weight[]> wdStates, IDictionary<String, UInt32> wdChecksums) { }

	public int RollActivationDecay(int itemId, List<ValueTuple`2<Int32, Int32>> initialOddsList, RandomPCG rng) { }

	public int RollAutoSpawn(int itemId, List<ValueTuple`2<Int32, Int32>> initialOddsList, RandomPCG rng) { }

	public int RollManualSpawn(int itemId, List<ValueTuple`2<Int32, Int32>> initialOddsList, RandomPCG rng) { }

	public void SetRandomSequenceSeed(RollHistoryType rollType, int markerItem, ulong seed) { }

	private string ToKey(RollHistoryType rollType, int markerItem) { }

}

