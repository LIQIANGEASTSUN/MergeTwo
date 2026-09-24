using System;
using Newtonsoft.Json;

namespace DragonU3DSDK.Storage
{
	[Serializable]
	public class StorageNewbieRoom : StorageBase
	{
		[JsonProperty]
		[NonSerialized]
		public int roomId;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> nodesData;

		[JsonProperty]
		[NonSerialized]
		public long startTime;

		[JsonProperty]
		[NonSerialized]
		public long endTime;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> boxData;

		[JsonProperty]
		[NonSerialized]
		public int knifeCount;

		[JsonProperty]
		[NonSerialized]
		public StorageList<int> unSetItems;

		[JsonProperty]
		[NonSerialized]
		public int openBox;

		[JsonProperty]
		[NonSerialized]
		public bool isShowStart;

		[JsonProperty]
		[NonSerialized]
		public int taskIndex;

		[JsonProperty]
		[NonSerialized]
		public int exp;

		[JsonIgnore]
		public int RoomId
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
		public StorageList<int> NodesData => null;

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
		public long EndTime
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
		public StorageList<int> BoxData => null;

		[JsonIgnore]
		public int KnifeCount
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
		public StorageList<int> UnSetItems => null;

		[JsonIgnore]
		public int OpenBox
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
		public bool IsShowStart
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
		public int TaskIndex
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
		public int Exp
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
