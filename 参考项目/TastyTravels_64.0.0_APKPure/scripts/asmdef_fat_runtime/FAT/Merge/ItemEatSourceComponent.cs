using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemEatSourceComponent : ItemSourceComponentBase
	{
		public class EatGroup
		{
			public Dictionary<int, int> itemNeeded;

			public int weight;

			public static EatGroup Parse(string str)
			{
				return null;
			}
		}

		public enum Status
		{
			Empty = 0,
			Eating = 1,
			Output = 2
		}

		[NonSerialized]
		public List<EatGroup> mEatGroups;

		[NonSerialized]
		public List<EatGroup> mFixEatGroups;

		[NonSerialized]
		public EatGroup mEatGroup;

		[NonSerialized]
		public Dictionary<int, int> mItemsWithin;

		[NonSerialized]
		public ComMergeEatSource mConfig;

		[NonSerialized]
		public int mEatingTimeLeft;

		[NonSerialized]
		public int mEatingTotalTime;

		[NonSerialized]
		public int mCountLeft;

		public Status state => default(Status);

		public int energyCost => 0;

		public Dictionary<int, int> eatItemNeeded => null;

		public int eatMilli => 0;

		public int eatLeftMilli => 0;

		public int eatTotalMilli => 0;

		public int countLeft => 0;

		public bool canUse => false;

		public ComMergeEatSource config => null;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnStart()
		{
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public int GetItemCountInStomach(int tid)
		{
			return 0;
		}

		public void GetProgress(out int total, out int current)
		{
			total = default(int);
			current = default(int);
		}

		public void SetFTEEatTime(int eatTime)
		{
		}

		public override void OnPostAttach()
		{
		}

		public override void OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> container)
		{
		}

		public override void OnInitOutputSet(Dictionary<int, int> container)
		{
		}

		public int CalculateSpeedEatCost()
		{
			return 0;
		}

		public bool EatItem(Item food)
		{
			return false;
		}

		public bool SpeedEat()
		{
			return false;
		}

		public override void OnUpdate(int dt)
		{
		}

		public int ConsumeNextItem()
		{
			return 0;
		}

		public bool _CanEatItem(Item item)
		{
			return false;
		}

		public void _SetEatGroup(int idx)
		{
		}

		public bool _StartEat()
		{
			return false;
		}

		public bool _FinishEat()
		{
			return false;
		}

		public bool _EatItem(Item food)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnStart()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public new void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnUpdate(int P0)
		{
		}
	}
}
