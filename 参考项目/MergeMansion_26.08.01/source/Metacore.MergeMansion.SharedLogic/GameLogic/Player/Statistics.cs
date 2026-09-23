using System;
using System.Runtime.Serialization;
using Code.GameLogic.Player.Statistics;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[]
	{
		2, 3, 4, 5, 6, 7, 8, 11, 12, 13,
		14, 17, 9, 10
	})]
	public sealed class Statistics : IStatisticsModel
	{
		[MetaMember(16, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<string, string> testGroupDictionary;

		[IgnoreDataMember]
		[NonSerialized]
		public int _bubblesBurstCount;

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaTime FirstGameStartTimestamp { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public long Level1ExperienceCollected { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public MetaDictionary<MergeBoardId, int> mergeCounts { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public MetaDuration TotalPlaytimeApprox { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public MetaDictionary<int, int> ItemMergeCount { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public MetaDictionary<Currencies, long> ResourceSpentCount { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public MetaDictionary<Currencies, long> ResourceGainedCount { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public int BubblesBurstCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[MetaMember(24, MetaMemberFlags.None)]
		public MetaDictionary<int, int> ProducerUseCount { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public MetaDictionary<int, int> ItemsClaimedFromShopCount { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public MetaDictionary<int, int> ChestsOpenedCount { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		public MetaDictionary<int, int> TaskCompletedCount { get; set; }

		public Statistics()
		{
		}

		public Statistics(MetaTime currentTime)
		{
		}

		public T GetTestGroup<T>(T defaultValue = default(T)) where T : Enum
		{
			return default(T);
		}

		public void SetTestGroup<T>(T val) where T : Enum
		{
		}

		public void IncreaseCollectedLevel1ExperienceAmount()
		{
		}

		public long GetLevel1ExperienceCollectedAmount()
		{
			return 0L;
		}

		public MetaDictionary<MergeBoardId, int> GetMergeCounts()
		{
			return null;
		}

		public void AddStatProgressAll()
		{
		}

		public void IncrementBubblesBurstCount(int amount)
		{
		}

		public void IncrementDictCounter<TKey, TValue>(MetaDictionary<TKey, TValue> dict, TKey key, TValue amount, Func<TValue, TValue, TValue> addOp)
		{
		}

		public void IncrementIntCounter<TKey>(MetaDictionary<TKey, int> dict, TKey key, int amount)
		{
		}

		public void IncrementLongCounter<TKey>(MetaDictionary<TKey, long> dict, TKey key, long amount)
		{
		}
	}
}
