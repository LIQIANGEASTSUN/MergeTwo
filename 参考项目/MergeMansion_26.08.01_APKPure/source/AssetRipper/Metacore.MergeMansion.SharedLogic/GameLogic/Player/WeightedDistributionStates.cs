using System;
using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using GameLogic.Random.ControlledRandom;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	public class WeightedDistributionStates
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<string, Weight[]> wdStates;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<string, uint> wdChecksums;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<string, int> wdSequenceIndexes;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<string, ulong> wdRandomSequenceSeeds;

		public const string MergePrefix = "me_";

		public const string BubblePrefix = "bu_";

		public const string SpawnPrefix = "as_";

		public const string DecayPrefix = "ad_";

		public const string ActivationPrefix = "ms_";

		public const string ChestPrefix = "ch_";

		public const string SinkPrefix = "sk_";

		public const string OrderPrefix = "or_";

		public ulong GetRandomSequenceSeed(RollHistoryType rollType, int markerItem)
		{
			return 0uL;
		}

		public void SetRandomSequenceSeed(RollHistoryType rollType, int markerItem, ulong seed)
		{
		}

		public void ResetCurrentSequenceIndex(RollHistoryType rollType, int markerItem)
		{
		}

		public int GetCurrentSequenceIndexAndGoNext(RollHistoryType rollType, int markerItem, int totalCount)
		{
			return 0;
		}

		public int GetSequenceIndex(RollHistoryType rollType, int markerItem, int totalCount)
		{
			return 0;
		}

		public void AdvanceSequenceIndex(RollHistoryType rollType, int markerItem, int totalCount)
		{
		}

		public int Roll(RollHistoryType rollType, int markerItem, List<(int, int)> initialOddsList, RandomPCG rng)
		{
			return 0;
		}

		public string ToKey(RollHistoryType rollType, int markerItem)
		{
			return null;
		}

		public int RollAutoSpawn(int itemId, List<(int, int)> initialOddsList, RandomPCG rng)
		{
			return 0;
		}

		public int RollManualSpawn(int itemId, List<(int, int)> initialOddsList, RandomPCG rng)
		{
			return 0;
		}

		public int RollActivationDecay(int itemId, List<(int, int)> initialOddsList, RandomPCG rng)
		{
			return 0;
		}

		public static int Roll(string key, List<(int, int)> initialOddsList, RandomPCG rng, IDictionary<string, Weight[]> wdStates, IDictionary<string, uint> wdChecksums)
		{
			return 0;
		}

		public static WeightedDistribution GenerateWeightedDistributionFromOddsList(List<(int, int)> oddsList)
		{
			return null;
		}

		public static uint CalculateOddListHash(List<(int, int)> oddsList)
		{
			return 0u;
		}
	}
}
