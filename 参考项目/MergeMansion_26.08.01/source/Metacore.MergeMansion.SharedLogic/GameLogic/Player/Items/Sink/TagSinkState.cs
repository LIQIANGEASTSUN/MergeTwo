using System;
using System.Collections.Generic;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(5)]
	public class TagSinkState : ISinkState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, int> Progress;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public int TargetCount;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public int CurrentCount;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public int CurrentPoints;

		[MetaMember(5, MetaMemberFlags.None)]
		[NonSerialized]
		public string RewardTagName;

		[MetaMember(6, MetaMemberFlags.None)]
		public string Tag;

		[NonSerialized]
		public IItemDefinition CompletionItemCached;

		[NonSerialized]
		public MetaDictionary<int, int> AcceptedItemsCached;

		public int GetCurrentPoints => 0;

		public TagSinkState()
		{
		}

		public TagSinkState(string tag, int targetCount, string rewardTagName)
		{
		}

		public static ISinkState NewState(string tag, int inputCount, string rewardTagName)
		{
			return null;
		}

		public bool DoesTakeIn(IPlayer player, int itemId)
		{
			return false;
		}

		public MetaDictionary<int, int> GetAcceptedItems(IPlayer player)
		{
			return null;
		}

		public bool IncreaseProgress(IPlayer player, int inputItem)
		{
			return false;
		}

		public (int, int) GetProgress()
		{
			return default((int, int));
		}

		public bool IsCompleted()
		{
			return false;
		}

		public IItemDefinition GetCompletionItem(IPlayer player, MergeItem mergeItem, MergeBoard board)
		{
			return null;
		}

		public void GetProgressEntries(ref List<SinkProgressEntry> outList)
		{
		}

		public SinkType GetSinkType()
		{
			return default(SinkType);
		}
	}
}
