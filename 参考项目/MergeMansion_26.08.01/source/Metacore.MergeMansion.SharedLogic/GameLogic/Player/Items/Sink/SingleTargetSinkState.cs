using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(2)]
	public class SingleTargetSinkState : ISinkState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public int progress;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public int target;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, int> takeInScores;

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		[NonSerialized]
		public ItemDef rewardItemDef;

		public SingleTargetSinkState()
		{
		}

		public SingleTargetSinkState(MetaDictionary<int, int> takeIn, int scoreTarget, int rewardId)
		{
		}

		public SinkType GetSinkType()
		{
			return default(SinkType);
		}

		public void GetProgressEntries(ref List<SinkProgressEntry> outList)
		{
		}

		public bool DoesTakeIn(IPlayer player, int itemId)
		{
			return false;
		}

		public (int, int) GetProgress()
		{
			return default((int, int));
		}

		public bool IncreaseProgress(IPlayer player, int inputItem)
		{
			return false;
		}

		public bool IsCompleted()
		{
			return false;
		}

		public static ISinkState NewState(MetaDictionary<int, int> scores, int scoreTarget, int rewardId)
		{
			return null;
		}

		public IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board)
		{
			return null;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
