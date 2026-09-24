using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageMapAdventureOneMerge : StorageBase
	{
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
		public StorageList<int> noRecycleItems;

		[JsonProperty]
		[NonSerialized]
		public int biMaxMergeItemLevel;

		[JsonProperty]
		[NonSerialized]
		public int moveStep;

		[JsonProperty]
		[NonSerialized]
		public bool isClearBoard;

		[JsonProperty]
		[NonSerialized]
		public long refreshNextTime;

		[JsonProperty]
		[NonSerialized]
		public StorageSummerWatermelonFifteenBattlePass battlePass;

		[JsonProperty]
		[NonSerialized]
		public StorageSummerWatermelonNewGfit newGift;

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
		public bool IsClearBoard
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
		public long RefreshNextTime
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
		public StorageSummerWatermelonFifteenBattlePass BattlePass => null;

		[JsonIgnore]
		public StorageSummerWatermelonNewGfit NewGift => null;
	}
}
