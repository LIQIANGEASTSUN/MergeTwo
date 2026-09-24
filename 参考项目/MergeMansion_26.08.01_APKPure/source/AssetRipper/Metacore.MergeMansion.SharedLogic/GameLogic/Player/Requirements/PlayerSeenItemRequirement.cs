using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(7)]
	public class PlayerSeenItemRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef ItemDef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Requirement { get; set; }

		public IItemDefinition GetItem(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> GetItems(IMergeMansionGameConfig config)
		{
			return null;
		}

		public PlayerSeenItemRequirement()
		{
		}

		public PlayerSeenItemRequirement(int itemId)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer playerModel)
		{
			return false;
		}

		public override void ForceComplete(IPlayer playerModel)
		{
		}

		public override string ToString()
		{
			return null;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
