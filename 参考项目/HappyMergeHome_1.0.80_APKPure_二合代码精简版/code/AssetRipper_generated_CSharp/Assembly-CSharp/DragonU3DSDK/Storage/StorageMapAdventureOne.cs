using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageMapAdventureOne : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public long startTime;

		[JsonProperty]
		[NonSerialized]
		public long finishTime;

		[JsonProperty]
		[NonSerialized]
		public StorageMapAdventureOneMerge merge;

		[JsonProperty]
		[NonSerialized]
		public StorageMapAdventureOneExplore explore;

		[JsonProperty]
		[NonSerialized]
		public StorageList<StorageMapAdventureOneAchieve> achieve;

		[JsonProperty]
		[NonSerialized]
		public bool isGetEndReward;

		[JsonProperty]
		[NonSerialized]
		public int energyNum;

		[JsonProperty]
		[NonSerialized]
		public bool isStart;

		[JsonProperty]
		[NonSerialized]
		public bool isGetTaskEndReward;

		[JsonIgnore]
		public long StartTime
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
		public long FinishTime
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
		public StorageMapAdventureOneMerge Merge => null;

		[JsonIgnore]
		public StorageMapAdventureOneExplore Explore => null;

		[JsonIgnore]
		public StorageList<StorageMapAdventureOneAchieve> Achieve => null;

		[JsonIgnore]
		public bool IsGetEndReward
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
		public int EnergyNum
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
		public bool IsGetTaskEndReward
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
