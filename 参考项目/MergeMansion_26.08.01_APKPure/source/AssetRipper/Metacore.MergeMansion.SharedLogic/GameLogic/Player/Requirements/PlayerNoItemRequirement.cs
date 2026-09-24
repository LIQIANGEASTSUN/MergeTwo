using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(48)]
	public class PlayerNoItemRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> ItemDefs { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<int> ItemTypes { get; set; }

		public PlayerNoItemRequirement()
		{
		}

		public PlayerNoItemRequirement(ItemDefinition definition)
		{
		}

		public PlayerNoItemRequirement(IEnumerable<int> itemIds)
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

		public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
