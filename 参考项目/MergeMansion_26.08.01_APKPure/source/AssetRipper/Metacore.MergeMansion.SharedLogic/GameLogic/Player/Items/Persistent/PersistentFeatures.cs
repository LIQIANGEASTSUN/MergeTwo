using GameLogic.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Persistent
{
	[MetaSerializable]
	public sealed class PersistentFeatures : IPersistentFeatures
	{
		public static readonly PersistentFeatures NoPersistence;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool HasPersistentFeatures { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public bool HasItemStates { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int DecayCycles { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int ItemStates { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef ResetToItem { get; set; }

		public PersistentFeatures()
		{
		}

		public PersistentFeatures(bool hasPersistentFeatures, bool hasItemStates, int decayCycles, int itemStates, ItemDef resetToItem)
		{
		}

		public bool Equals(PersistentFeatures other)
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
