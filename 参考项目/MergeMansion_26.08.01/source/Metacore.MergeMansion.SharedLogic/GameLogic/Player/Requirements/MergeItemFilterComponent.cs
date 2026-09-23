using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializable]
	public class MergeItemFilterComponent
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public List<ItemDef> _itemDefinitions;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public List<MergeChainDef> _mergeChainDefinitions;

		[IgnoreDataMember]
		public IReadOnlyList<ItemDef> ItemDefinitions => null;

		[IgnoreDataMember]
		public IReadOnlyList<MergeChainDef> MergeChainDefinitions => null;

		public MergeItemFilterComponent()
		{
		}

		public MergeItemFilterComponent(string itemDefinitionKeysCsv, string mergeChainDefinitionKeysCsv)
		{
		}

		public static List<ItemDef> ParseItemDefs(string itemIds)
		{
			return null;
		}

		public static List<MergeChainDef> ParseMergeChainDefs(string chainIds)
		{
			return null;
		}

		public static IEnumerable<string> Split(string csv)
		{
			return null;
		}

		public static MergeChainDef ParseMergeChainDef(string key)
		{
			return null;
		}

		public IEnumerable<MergeItem.MergeItemExtra> GetMergeItemExtras(IPlayer player)
		{
			return null;
		}
	}
}
