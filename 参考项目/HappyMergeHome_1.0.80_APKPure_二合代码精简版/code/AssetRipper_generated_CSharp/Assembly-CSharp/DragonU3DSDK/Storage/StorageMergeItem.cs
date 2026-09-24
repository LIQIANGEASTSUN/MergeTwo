using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageMergeItem : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public int id;

		[JsonProperty]
		[NonSerialized]
		public int state;

		[JsonProperty]
		[NonSerialized]
		public int unlockState;

		[JsonProperty]
		[NonSerialized]
		public ulong productTime;

		[JsonProperty]
		[NonSerialized]
		public ulong timProductTime;

		[JsonProperty]
		[NonSerialized]
		public int productCount;

		[JsonProperty]
		[NonSerialized]
		public int timeProductCount;

		[JsonProperty]
		[NonSerialized]
		public ulong openTime;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> productItems;

		[JsonProperty]
		[NonSerialized]
		public int storeMax;

		[JsonProperty]
		[NonSerialized]
		public int timeStoreMax;

		[JsonProperty]
		[NonSerialized]
		public ulong inCdTime;

		[JsonProperty]
		[NonSerialized]
		public int bubbleType;

		[JsonProperty]
		[NonSerialized]
		public int bubbleDiscount;

		[JsonProperty]
		[NonSerialized]
		public ulong activeTime;

		[JsonProperty]
		[NonSerialized]
		public bool isPause;

		[JsonProperty]
		[NonSerialized]
		public int pauseCDTime;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> dropIntervalDic;

		[JsonProperty]
		[NonSerialized]
		public int playRvNum;

		[JsonProperty]
		[NonSerialized]
		public int productWheel;

		[JsonProperty]
		[NonSerialized]
		public int boosterFactor;

		[JsonProperty]
		[NonSerialized]
		public ulong bsRefreshTime;

		[JsonProperty]
		[NonSerialized]
		public int bsIndex;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> eatBuildingDic;

		[JsonProperty]
		[NonSerialized]
		public string userInfo;

		[JsonProperty]
		[NonSerialized]
		public int uniqueId;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> replaceItems;

		[JsonProperty]
		[NonSerialized]
		public int mineIndex;

		[JsonProperty]
		[NonSerialized]
		public int iceCubeExistTime;

		[JsonIgnore]
		public int Id
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
		public int State
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
		public int UnlockState
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
		public ulong ProductTime
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
		public ulong TimProductTime
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
		public int ProductCount
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
		public int TimeProductCount
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
		public ulong OpenTime
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
		public StorageList<int> ProductItems => null;

		[JsonIgnore]
		public int StoreMax
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
		public int TimeStoreMax
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
		public ulong InCdTime
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
		public int BubbleType
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
		public int BubbleDiscount
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
		public ulong ActiveTime
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
		public bool IsPause
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
		public int PauseCDTime
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
		public StorageDictionary<int, int> DropIntervalDic => null;

		[JsonIgnore]
		public int PlayRvNum
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
		public int ProductWheel
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
		public int BoosterFactor
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
		public ulong BsRefreshTime
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
		public int BsIndex
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
		public StorageDictionary<int, int> EatBuildingDic => null;

		[JsonIgnore]
		public string UserInfo
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public int UniqueId
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
		public StorageList<int> ReplaceItems => null;

		[JsonIgnore]
		public int MineIndex
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
		public int IceCubeExistTime
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
