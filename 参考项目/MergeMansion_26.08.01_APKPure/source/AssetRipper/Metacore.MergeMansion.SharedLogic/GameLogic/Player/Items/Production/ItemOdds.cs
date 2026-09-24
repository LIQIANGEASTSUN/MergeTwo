using System.Runtime.Serialization;
using GameLogic.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Production
{
	[MetaSerializable]
	public class ItemOdds : IItemOdds
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef Type { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Weight { get; set; }

		[IgnoreDataMember]
		public int ConfigKey => 0;

		IItemDefinition IItemOdds.GetItem(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IItemDefinition GetItem(IMergeMansionGameConfig config)
		{
			return null;
		}

		public ItemOdds()
		{
		}

		public ItemOdds(int type, int weight)
		{
		}

		public ItemOdds(IItemDefinition itemDefinition, int weight)
		{
		}

		public bool Equals(ItemOdds other)
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
}
