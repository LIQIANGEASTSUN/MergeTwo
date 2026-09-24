using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemChestComponent : ItemSourceComponentBase, IEffectReceiver
	{
		[NonSerialized]
		public int mUsedCount;

		[NonSerialized]
		public bool mOpened;

		[NonSerialized]
		public ComMergeChest mChestConfig;

		public bool isWaiting => false;

		public int energyCost => 0;

		public int openWaitLeftMilli => 0;

		public int openWaitMilli => 0;

		public bool isNeedWait => false;

		public int countLeft => 0;

		public bool canUse => false;

		public bool isOpenAndUsed => false;

		public ComMergeChest config => null;

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

		public override void OnPostAttach()
		{
		}

		public override void OnPostMerge(Item src, Item dst)
		{
		}

		public override void OnInitOrderedOutput(List<int> container)
		{
		}

		public override void OnInitOutputSet(Dictionary<int, int> container)
		{
		}

		public bool StartWait()
		{
			return false;
		}

		public bool SetOpen()
		{
			return false;
		}

		public int ConsumeNextItem()
		{
			return 0;
		}

		public int CalculateSpeedOpenCost()
		{
			return 0;
		}

		public bool SpeedOpen()
		{
			return false;
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

		public void _003C_003EiFixBaseProxy_OnPostMerge(Item P0, Item P1)
		{
		}

		public void _003C_003EiFixBaseProxy_OnInitOrderedOutput(List<int> P0)
		{
		}
	}
}
