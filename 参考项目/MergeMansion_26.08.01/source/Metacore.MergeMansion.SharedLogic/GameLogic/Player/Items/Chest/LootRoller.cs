using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Random;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Chest
{
	[MetaSerializable]
	public class LootRoller
	{
		[MetaSerializable]
		public class LootSequence
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public int Start { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public int End { get; set; }

			[MetaMember(3, MetaMemberFlags.None)]
			[MetaOnMemberDeserializationFailure("FixItemRef")]
			public ItemDef Loot { get; set; }

			public bool Equals(LootSequence other)
			{
				return false;
			}

			public override bool Equals(object obj)
			{
				return false;
			}

			public override int GetHashCode()
			{
				return 0;
			}

			public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
			{
				return null;
			}
		}

		public const string LootRollerPrefix = "loot";

		[MetaMember(1, MetaMemberFlags.None)]
		public List<LootSequence> RandomLootRollList { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int TotalWeight { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string SpawnId { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> ForcedLoot { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		public List<ItemDef> StaticLoot { get; set; }

		public LootRoller()
		{
		}

		public LootRoller(List<(int itemId, int weight)> randomItemWeights, IEnumerable<int> forcedItems, int itemId)
		{
		}

		public LootRoller(IEnumerable<(int itemId, int weight)> randomItemWeights, IEnumerable<int> forcedItems, IEnumerable<int> staticItems, string spawnId)
		{
		}

		public LootRoller(IReadOnlyCollection<int> staticItems)
		{
		}

		public bool IsStaticLoot()
		{
			return false;
		}

		public IEnumerable<IItemDefinition> GetStaticLoot(IPlayer player)
		{
			return null;
		}

		public IItemDefinition RollLoot(IGenerationContext generationContext, IPlayer player)
		{
			return null;
		}

		public bool Equals(LootRoller other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
