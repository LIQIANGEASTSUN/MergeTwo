using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Requirements;
using Merge;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.OverrideSpawnChance
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 4 })]
	public class OverrideSpawnChance
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement TriggerRequirement { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement EndRequirement { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MergeBoardId TargetBoardId { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<QuantityPercentagePair> ChancesToSpawn { get; set; }

		public OverrideSpawnChance()
		{
		}

		public OverrideSpawnChance(PlayerRequirement triggerRequirement, PlayerRequirement endRequirement, MergeBoardId targetBoardId, List<QuantityPercentagePair> chancesToSpawn)
		{
		}

		public F32 CalculateChancePercentage(IPlayer player, int itemId)
		{
			return default(F32);
		}

		public bool Matches(IPlayer player)
		{
			return false;
		}

		public bool Roll(IPlayer player, int itemId)
		{
			return false;
		}

		public int GetSpawnedItemsToday(IPlayer player, int itemId)
		{
			return 0;
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
