using GameLogic.Merge;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializable]
	public class MergeFeatures : IMergeFeatures
	{
		public static readonly MergeFeatures NoMerge;

		[MetaMember(1, MetaMemberFlags.None)]
		public IMergeMechanic Mechanic { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IItemProducer AdditionalSpawnProducer { get; set; }

		public bool Mergeable => false;

		public bool RequiresXpState => false;

		public MergeFeatures()
		{
		}

		public MergeFeatures(IItemProducer producer)
		{
		}

		public MergeFeatures(MergeCollection collection)
		{
		}

		public MergeFeatures(IMergeMechanic mergeMechanic)
		{
		}

		public MergeFeatures(IMergeMechanic mergeMechanic, IItemProducer additionalSpawnProducer)
		{
		}

		public static MergeFeatures AlwaysInto(int type)
		{
			return null;
		}

		public bool Equals(MergeFeatures other)
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
