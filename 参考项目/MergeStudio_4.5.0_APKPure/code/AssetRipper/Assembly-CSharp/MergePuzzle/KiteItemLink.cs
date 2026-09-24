using System;

namespace MergePuzzle
{
	[Serializable]
	public class KiteItemLink
	{
		[Serializable]
		public class ArchiveRewardItem
		{
			public int SetID;

			public int Level;
		}

		[NonSerialized]
		public int _chainIndex;

		public int LinkIndex;

		public int SpawnerSetId;

		public int UnlockLevel;

		public int ArchiveLevel;

		public ArchiveRewardItem ArchiveReward;

		[NonSerialized]
		public ItemLinkID? _cachedLinkID;

		public ItemLinkID LinkID => default(ItemLinkID);

		public void Initialize(int chainIndex)
		{
		}
	}
}
