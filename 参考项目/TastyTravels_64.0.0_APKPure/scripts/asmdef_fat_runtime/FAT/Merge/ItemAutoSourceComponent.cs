using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemAutoSourceComponent : ItemSourceComponentBase, IEffectReceiver
	{
		[NonSerialized]
		public ComMergeAutoSource mConfig;

		[NonSerialized]
		public bool mJustCreate;

		[NonSerialized]
		public int mItemCount;

		[NonSerialized]
		public int mOutputCounter;

		[NonSerialized]
		public int mTotalOutput;

		public int outputMilli => 0;

		public int itemCount => 0;

		public bool isOutputing => false;

		public long outputWholeMilli => 0L;

		public int outputCountToDead => 0;

		public ComMergeAutoSource config => null;

		public bool isDead => false;

		public bool mAllowCharging => false;

		bool IEffectReceiver.WillReceiveEffect(SpeedEffect effect)
		{
			return false;
		}

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

		public int ConsumeNextItem()
		{
			return 0;
		}

		public int CalculateSpeedOutputCost()
		{
			return 0;
		}

		public bool SpeedOutput()
		{
			return false;
		}

		public bool IsNextItemReady()
		{
			return false;
		}

		public Toast GetToastTypeForItem(int itemTid)
		{
			return default(Toast);
		}

		public void StartInstantOutput(int count)
		{
		}

		public override void OnPostMerge(Item src, Item dst)
		{
		}

		public override void OnPostSpawn(ItemSpawnContext sp)
		{
		}

		public override void OnPostAttach()
		{
		}

		public override void OnInitOutputSet(Dictionary<int, int> container)
		{
		}

		public override void OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> container)
		{
		}

		public override void OnUpdateInactive(int dt)
		{
		}

		public override void OnUpdate(int dt)
		{
		}

		public void _UpdateRecharge(int dt, bool allowSpawn)
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

		public void _003C_003EiFixBaseProxy_OnPostSpawn(ItemSpawnContext P0)
		{
		}

		public new void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> P0)
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
