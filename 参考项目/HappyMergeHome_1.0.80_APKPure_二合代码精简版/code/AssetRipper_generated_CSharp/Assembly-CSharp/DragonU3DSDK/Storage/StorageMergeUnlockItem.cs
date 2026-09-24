using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageMergeUnlockItem : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public StorageList<int> unlockIds;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> unlockLines;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> galleryAwarded;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> gainItemIds;

		[JsonIgnore]
		public StorageList<int> UnlockIds => null;

		[JsonIgnore]
		public StorageList<int> UnlockLines => null;

		[JsonIgnore]
		public StorageList<int> GalleryAwarded => null;

		[JsonIgnore]
		public StorageDictionary<int, int> GainItemIds => null;
	}
}
