using System.Collections.Generic;
using Game.Cloud.Config;
using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Config
{
	[MetaSerializableDerived(2)]
	public class ItemDef : ConfigDefinition<int, IItemDefinition>
	{
		public ItemDef()
		{
		}

		public ItemDef(int key)
		{
		}

		public override IItemDefinition GetDef(IMergeMansionGameConfig config)
		{
			return null;
		}

		public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static MetaDictionary<int, ItemDef> FixRefMetaDict(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
