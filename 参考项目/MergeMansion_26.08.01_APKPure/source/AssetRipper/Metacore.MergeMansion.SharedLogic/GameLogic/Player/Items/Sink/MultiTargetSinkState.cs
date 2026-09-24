using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(3)]
	public class MultiTargetSinkState : ISinkState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, int> progress;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, int> targets;

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		[NonSerialized]
		public ItemDef rewardItemDef;

		public MultiTargetSinkState()
		{
		}

		public MultiTargetSinkState(MetaDictionary<int, int> scoreTargets, int rewardId)
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

		public static ISinkState NewState(MetaDictionary<int, int> scoreTargets, int rewardId)
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
