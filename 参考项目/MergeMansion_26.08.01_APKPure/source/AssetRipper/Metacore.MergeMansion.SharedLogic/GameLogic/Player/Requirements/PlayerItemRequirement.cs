using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;
using Newtonsoft.Json;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(1)]
	public class PlayerItemRequirement : PlayerRequirement
	{
		[MetaMember(3, MetaMemberFlags.None)]
		public List<int> ItemTypes { get; set; }

		[MetaOnMemberDeserializationFailure("FixRefs")]
		[MetaMember(1, MetaMemberFlags.None)]
		public List<ItemDef> ItemRefs { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Requirement { get; set; }

		public IReadOnlyCollection<int> Items => null;

		[JsonProperty("item")]
		public int? ItemKey => null;

		public IEnumerable<IItemDefinition> ItemDefinitions(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> ItemDefinitions(IPlayer player)
		{
			return null;
		}

		public IItemDefinition Item(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IItemDefinition Item(IPlayer player)
		{
			return null;
		}

		public static List<ItemDef> FixRefs(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public PlayerItemRequirement()
		{
		}

		public PlayerItemRequirement(int itemId, int requirement)
		{
		}

		public PlayerItemRequirement(IItemDefinition definition, int amount)
		{
		}

		public PlayerItemRequirement(IEnumerable<int> itemIds, int requirement)
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

		public bool RequiresAnyItem(IEnumerable<IItemDefinition> itemsToCheck, IPlayer player)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
