using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class ProducerInventorySlotConfig : IGameConfigData<ProducerInventorySlotId>, IGameConfigData, IHasGameConfigKey<ProducerInventorySlotId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ProducerInventorySlotId SlotId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> TeaseRequirements { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> UnlockRequirements { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int SlotIndex { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public ProducerInventorySlotId ConfigKey => null;

		[IgnoreDataMember]
		public PlayerRequirement UnlockRequirement => null;

		public ProducerInventorySlotConfig()
		{
		}

		public ProducerInventorySlotConfig(ProducerInventorySlotId slotId, IEnumerable<PlayerRequirement> teaseRequirements, IEnumerable<PlayerRequirement> unlockRequirements, int experimentPriority)
		{
		}

		public bool IsTeased(IPlayer player)
		{
			return false;
		}

		public bool IsSeen(IPlayer player)
		{
			return false;
		}

		public bool IsUnlocked(IPlayer player)
		{
			return false;
		}

		public bool IsUnlockable(IPlayer player)
		{
			return false;
		}

		public bool IsAutomaticallyUnlocked()
		{
			return false;
		}

		public bool IsInitiallyTeased()
		{
			return false;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
