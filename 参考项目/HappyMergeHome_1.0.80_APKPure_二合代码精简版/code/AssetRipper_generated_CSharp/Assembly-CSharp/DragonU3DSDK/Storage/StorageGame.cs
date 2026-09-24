using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageGame : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, StorageMergeBoard> mergeBoards;

		[JsonProperty]
		[NonSerialized]
		public StorageMergeUnlockItem mergeUnlockItem;

		[JsonProperty]
		[NonSerialized]
		public StorageMysteryGift mysteryGift;

		[JsonIgnore]
		public StorageDictionary<int, StorageMergeBoard> MergeBoards => null;

		[JsonIgnore]
		public StorageMergeUnlockItem MergeUnlockItem => null;

		[JsonIgnore]
		public StorageMysteryGift MysteryGift => null;
	}
}
