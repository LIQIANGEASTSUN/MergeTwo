using GameLogic.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializable]
	public class ExclusiveTargetSinkBranch
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef RewardItemDef { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Target { get; set; }

		public ExclusiveTargetSinkBranch()
		{
		}

		public ExclusiveTargetSinkBranch(int itemId, int target, int rewardItemId)
		{
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
