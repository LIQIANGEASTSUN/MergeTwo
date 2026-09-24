using System;
using System.Collections.Generic;
using EL;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemTrigAutoSourceComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComTrigAutoSource mConfig;

		[NonSerialized]
		public int _curTriggerCount;

		[NonSerialized]
		public int _totalTriggerCount;

		public ComTrigAutoSource Config => null;

		public int CurTriggerCount => 0;

		public int TotalTriggerCount => 0;

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public override void OnPostAttach()
		{
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public bool HasTriggerCount()
		{
			return false;
		}

		public bool CheckWillDead()
		{
			return false;
		}

		public int GetDieIntoItemId()
		{
			return 0;
		}

		public bool TryUseTriggerCount(out int triggerInfoId)
		{
			triggerInfoId = default(int);
			return false;
		}

		public bool GetRandomOutputList(int triggerInfoId, PoolMapping.Ref<List<int>> container)
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}
	}
}
