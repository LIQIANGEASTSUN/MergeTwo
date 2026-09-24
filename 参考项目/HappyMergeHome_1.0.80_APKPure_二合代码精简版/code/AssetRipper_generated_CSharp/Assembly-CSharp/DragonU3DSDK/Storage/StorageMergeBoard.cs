using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageMergeBoard : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public int width;

		[JsonProperty]
		[NonSerialized]
		public int height;

		[JsonProperty]
		[NonSerialized]
		public StorageList<StorageMergeItem> items;

		[JsonProperty]
		[NonSerialized]
		public StorageList<StorageMergeItem> bags;

		[JsonProperty]
		[NonSerialized]
		public int bagCapacity;

		[JsonProperty]
		[NonSerialized]
		public StorageList<StorageMergeItem> rewards;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> mergeCounts;

		[JsonProperty]
		[NonSerialized]
		public int mergeCount;

		[JsonProperty]
		[NonSerialized]
		public int finishTaskCount;

		[JsonProperty]
		[NonSerialized]
		public int decoCount;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> lineProducts;

		[JsonProperty]
		[NonSerialized]
		public StorageList<StorageMergeItem> vipBags;

		[JsonProperty]
		[NonSerialized]
		public int todayBubbleCount;

		[JsonProperty]
		[NonSerialized]
		public ulong lastProductBubbleTime;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> todayBubbleInfo;

		[JsonProperty]
		[NonSerialized]
		public StorageList<StorageMergeItem> buildingBags;

		[JsonProperty]
		[NonSerialized]
		public int buildingBagCapacity;

		[JsonProperty]
		[NonSerialized]
		public long unlimtProductEndTime;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> icecList;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> iceTimeList;

		[JsonProperty]
		[NonSerialized]
		public int iceIndex;

		[JsonProperty]
		[NonSerialized]
		public ulong lastProductIceCubeTime;

		[JsonProperty]
		[NonSerialized]
		public int iceSlot;

		[JsonIgnore]
		public int Width
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int Height
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public StorageList<StorageMergeItem> Items => null;

		[JsonIgnore]
		public StorageList<StorageMergeItem> Bags => null;

		[JsonIgnore]
		public int BagCapacity
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public StorageList<StorageMergeItem> Rewards => null;

		[JsonIgnore]
		public StorageDictionary<int, int> MergeCounts => null;

		[JsonIgnore]
		public int MergeCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int FinishTaskCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int DecoCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public StorageDictionary<int, int> LineProducts => null;

		[JsonIgnore]
		public StorageList<StorageMergeItem> VipBags => null;

		[JsonIgnore]
		public int TodayBubbleCount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public ulong LastProductBubbleTime
		{
			get
			{
				return 0uL;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public StorageDictionary<int, int> TodayBubbleInfo => null;

		[JsonIgnore]
		public StorageList<StorageMergeItem> BuildingBags => null;

		[JsonIgnore]
		public int BuildingBagCapacity
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public long UnlimtProductEndTime
		{
			get
			{
				return 0L;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public StorageList<int> IcecList => null;

		[JsonIgnore]
		public StorageList<int> IceTimeList => null;

		[JsonIgnore]
		public int IceIndex
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public ulong LastProductIceCubeTime
		{
			get
			{
				return 0uL;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int IceSlot
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}
	}
}
