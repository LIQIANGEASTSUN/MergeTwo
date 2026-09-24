using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemMixSourceComponent : ItemSourceComponentBase
	{
		[NonSerialized]
		public ComMergeMixSource mConfig;

		[NonSerialized]
		public int mItemTotalOutputToDead;

		[NonSerialized]
		public int mItemCount;

		[NonSerialized]
		public int mItemInRechargeCount;

		[NonSerialized]
		public int mOutputCounter;

		[NonSerialized]
		public int mReviveCounter;

		[NonSerialized]
		public bool mFirstRevive;

		[NonSerialized]
		public List<int> mixList;

		public int outputCountToDead => 0;

		public bool isDead => false;

		public int outputMilli => 0;

		public bool isOutputing => false;

		public bool isReviving => false;

		public int totalItemCount => 0;

		public int reviveMilli => 0;

		public int reviveTotalMilli => 0;

		public int itemInRechargeCount => 0;

		public int itemCount => 0;

		public int totalMixRequire { get; set; }

		public int mixedCount => 0;

		public IList<int> mixedItems => null;

		public ComMergeMixSource config => null;

		public bool mAllowCharging => false;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public bool IsNextItemReady()
		{
			return false;
		}

		public Toast GetToastTypeForItem(int itemTid, int realTid)
		{
			return default(Toast);
		}

		public (bool, int) CheckMixState()
		{
			return default((bool, int));
		}

		public bool CanMixItem(Item target)
		{
			return false;
		}

		public bool TryMixItem(Item target)
		{
			return false;
		}

		public bool TryExtract(int itemId)
		{
			return false;
		}

		public int ConsumeNextItem(int mixId, out int oldItemId)
		{
			oldItemId = default(int);
			return 0;
		}

		public bool SpeedOutput()
		{
			return false;
		}

		public bool SpeedRevive()
		{
			return false;
		}

		public override void OnInitOutputSet(Dictionary<int, int> container)
		{
		}

		public override void OnPostMerge(Item src, Item dst)
		{
		}

		public override void OnPostAttach()
		{
		}

		public override void OnUpdateInactive(int dt)
		{
		}

		public override void OnUpdate(int dt)
		{
		}

		public void _UpdateRecharge(int milli)
		{
		}

		public void _UpdateJumpCD(int milli)
		{
		}

		public void _TickRecharge(int deltaMilli)
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostMerge(Item P0, Item P1)
		{
		}

		public new void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnUpdateInactive(int P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnUpdate(int P0)
		{
		}
	}
}
