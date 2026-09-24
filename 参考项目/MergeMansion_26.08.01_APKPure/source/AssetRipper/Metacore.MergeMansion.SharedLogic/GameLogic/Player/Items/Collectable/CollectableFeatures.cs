using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Collectable
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 3 })]
	public sealed class CollectableFeatures : ICollectableFeatures
	{
		public static readonly CollectableFeatures NoCollectable;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool Collectable { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public ICollectAction CollectAction { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool ConfirmCollectBelowMergeChainLevel { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public bool CollectOnSpawn { get; set; }

		public CollectableFeatures()
		{
		}

		public CollectableFeatures(ICollectAction collectAction, bool confirmCollectBelowMergeChainLevel, bool collectOnSpawn)
		{
		}

		public CollectableFeatures(bool collectable, ICollectAction collectAction, bool confirmCollectBelowMergeChainLevel, bool collectOnSpawn)
		{
		}

		public bool Equals(CollectableFeatures other)
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
	}
}
