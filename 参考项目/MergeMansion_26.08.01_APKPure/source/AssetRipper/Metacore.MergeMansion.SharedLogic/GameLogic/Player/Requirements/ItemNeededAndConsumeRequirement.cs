using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(16)]
	public class ItemNeededAndConsumeRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<int> ItemTypes { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> ItemDefs { get; set; }

		public ItemDef ItemDef => null;

		[IgnoreDataMember]
		public IReadOnlyCollection<int> Items => null;

		public IItemDefinition GetItem(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> GetItemDefinitions(IMergeMansionGameConfig config)
		{
			return null;
		}

		public ItemNeededAndConsumeRequirement()
		{
		}

		public ItemNeededAndConsumeRequirement(int itemType)
		{
		}

		public ItemNeededAndConsumeRequirement(IEnumerable<int> itemTypes)
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

		public static bool AddItem(IPlayer player, IItemDefinition item)
		{
			return false;
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
