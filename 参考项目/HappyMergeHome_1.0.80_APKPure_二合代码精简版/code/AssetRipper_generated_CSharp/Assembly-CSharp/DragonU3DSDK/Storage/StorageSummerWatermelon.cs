using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageSummerWatermelon : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public bool isStart;

		[JsonProperty]
		[NonSerialized]
		public int maxUnlockLevel;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> unSetRewards;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> unCollectRewards;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> unSetItems;

		[JsonProperty]
		[NonSerialized]
		public long startActivityTime;

		[JsonProperty]
		[NonSerialized]
		public long activityEndTime;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> buyPackageShopIdDictionary;

		[JsonProperty]
		[NonSerialized]
		public int dayProductCount;

		[JsonProperty]
		[NonSerialized]
		public int dayId;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, bool> packageEnableStateDictionary;

		[JsonProperty]
		[NonSerialized]
		public bool isShowEnd;

		[JsonIgnore]
		public bool IsStart
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int MaxUnlockLevel
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
		public StorageList<int> UnSetRewards => null;

		[JsonIgnore]
		public StorageDictionary<int, int> UnCollectRewards => null;

		[JsonIgnore]
		public StorageList<int> UnSetItems => null;

		[JsonIgnore]
		public long StartActivityTime
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
		public long ActivityEndTime
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
		public StorageDictionary<int, int> BuyPackageShopIdDictionary => null;

		[JsonIgnore]
		public int DayProductCount
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
		public int DayId
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
		public StorageDictionary<int, bool> PackageEnableStateDictionary => null;

		[JsonIgnore]
		public bool IsShowEnd
		{
			get
			{
				return false;
			}
			set
			{
			}
		}
	}
}
