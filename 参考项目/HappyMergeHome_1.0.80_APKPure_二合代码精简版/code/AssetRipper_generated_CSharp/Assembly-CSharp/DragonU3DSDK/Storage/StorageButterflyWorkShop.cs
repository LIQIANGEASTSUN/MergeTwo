using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageButterflyWorkShop : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public bool isStart;

		[JsonProperty]
		[NonSerialized]
		public StorageDictionary<int, int> collectRewards;

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
		public int dayProductCount;

		[JsonProperty]
		[NonSerialized]
		public int dayId;

		[JsonProperty]
		[NonSerialized]
		public int maxUnlockLevel;

		[JsonProperty]
		[NonSerialized]
		public int level;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> claimedItem;

		[JsonProperty]
		[NonSerialized]
		public int randomLine;

		[JsonProperty]
		[NonSerialized]
		public int stage;

		[JsonProperty]
		[NonSerialized]
		public int stageStore;

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
		public StorageDictionary<int, int> CollectRewards => null;

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
		public int Level
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
		public StorageList<int> ClaimedItem => null;

		[JsonIgnore]
		public int RandomLine
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
		public int Stage
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
		public int StageStore
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
