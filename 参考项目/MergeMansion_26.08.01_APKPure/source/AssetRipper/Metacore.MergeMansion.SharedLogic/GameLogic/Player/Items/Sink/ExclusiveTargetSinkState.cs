using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Board;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializableDerived(4)]
	public class ExclusiveTargetSinkState : ISinkState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, int> progress;

		[MetaOnMemberDeserializationFailure("FixItemRefMetaDict")]
		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, ItemDef> rewardItems;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDictionary<int, int> targets;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public int targetItem;

		public ExclusiveTargetSinkState()
		{
		}

		public ExclusiveTargetSinkState(List<ExclusiveTargetSinkBranch> branches)
		{
		}

		public bool DoesTakeIn(IPlayer player, int itemId)
		{
			return false;
		}

		public void GetAllowedItemIds(ref List<int> outList)
		{
		}

		public (int, int) GetProgress()
		{
			return default((int, int));
		}

		public IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board)
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

		public bool IncreaseProgress(IPlayer player, int inputItem)
		{
			return false;
		}

		public bool IsCompleted()
		{
			return false;
		}

		public static MetaDictionary<int, ItemDef> FixItemRefMetaDict(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
