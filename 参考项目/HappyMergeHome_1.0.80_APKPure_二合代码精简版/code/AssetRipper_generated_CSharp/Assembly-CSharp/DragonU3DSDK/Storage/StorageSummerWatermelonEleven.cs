using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageSummerWatermelonEleven : StorageBase
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

		[JsonProperty]
		[NonSerialized]
		public bool isOpenBigBoard;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, bool> claimedFirstRwards;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> mergeItems;

		[JsonProperty]
		[NonSerialized]
		public long giftBuyTime;

		[JsonProperty]
		[NonSerialized]
		public int giftBuyNum;

		[JsonProperty]
		[NonSerialized]
		public int oneByOneIndex;

		[JsonProperty]
		[NonSerialized]
		public bool isABTest;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> noRecycleItems;

		[JsonProperty]
		[NonSerialized]
		public int biMaxMergeItemLevel;

		[JsonProperty]
		[NonSerialized]
		public StorageSummerWatermelonTenBattlePass battlePass;

		[JsonProperty]
		[NonSerialized]
		public int moveStep;

		[JsonProperty]
		[NonSerialized]
		public StorageSummerWatermelonNewGfit newGift;

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

		[JsonIgnore]
		public bool IsOpenBigBoard
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
		public StorageDictionary<int, bool> ClaimedFirstRwards => null;

		[JsonIgnore]
		public StorageList<int> MergeItems => null;

		[JsonIgnore]
		public long GiftBuyTime
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
		public int GiftBuyNum
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
		public int OneByOneIndex
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
		public bool IsABTest
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
		public StorageList<int> NoRecycleItems => null;

		[JsonIgnore]
		public int BiMaxMergeItemLevel
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
		public StorageSummerWatermelonTenBattlePass BattlePass => null;

		[JsonIgnore]
		public int MoveStep
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
		public StorageSummerWatermelonNewGfit NewGift => null;
	}
}
