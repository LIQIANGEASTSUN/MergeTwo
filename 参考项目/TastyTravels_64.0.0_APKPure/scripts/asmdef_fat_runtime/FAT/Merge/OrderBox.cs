using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class OrderBox
	{
		[NonSerialized]
		public int mOrderBoxLifeCountMilli;

		[NonSerialized]
		public int mActivatedOrderBoxId;

		[NonSerialized]
		public Dictionary<int, OrderBoxDetail> mOrderBoxDetailMap;

		[NonSerialized]
		public int mOrderBoxDurationMilli;

		[NonSerialized]
		public MergeWorld mWorld;

		public bool hasActiveOrderBox => false;

		public int orderBoxDurationMilli => 0;

		public int orderBoxLifeCountMilli => 0;

		public OrderBox(MergeWorld world)
		{
		}

		public void Deserialize(fat.gamekitdata.Merge data)
		{
		}

		public void Serialize(fat.gamekitdata.Merge data)
		{
		}

		public void Update(int milli)
		{
		}

		public OrderBoxDetail GetOrderBoxDetailByRandomerId(int id)
		{
			return null;
		}

		public bool TryActivateOrderBox(int itemTid, bool isDeserialize = false)
		{
			return false;
		}

		public void _RefreshOrderBoxDetail(int tid)
		{
		}

		public void _Reset()
		{
		}

		public void _RemoveCurrentOrderBox()
		{
		}

		public bool _TryActivateNextOrderBox()
		{
			return false;
		}
	}
}
