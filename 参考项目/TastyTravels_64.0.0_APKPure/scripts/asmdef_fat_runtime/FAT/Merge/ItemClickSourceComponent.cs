using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemClickSourceComponent : ItemSourceComponentBase, IEffectReceiver
	{
		public bool wasBoostItem;

		[NonSerialized]
		public int mActualEnergyMultiplier;

		[NonSerialized]
		public bool mUsedSmartReplacement;

		[NonSerialized]
		public int mCachedOutputItemId;

		[NonSerialized]
		public ItemSourceType mCachedOutputSourceType;

		[NonSerialized]
		public ComMergeTapSource mConfig;

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
		public int mNoCDCountDown;

		[NonSerialized]
		public int mMaxNoCDCountDown;

		[NonSerialized]
		public bool mFirstRevive;

		[NonSerialized]
		public int mBoostItemCount;

		[NonSerialized]
		public MergeTapCost mFirstCost;

		public bool isNoCD => false;

		public int noCDMilliLeft => 0;

		public int maxNoCDMilli => 0;

		public int outputCountToDead => 0;

		public bool willDead => false;

		public bool isDead => false;

		public int energyCost => 0;

		public MergeTapCost firstCost => null;

		public IList<int> costConfig => null;

		public int outputMilli => 0;

		public bool isOutputing => false;

		public bool isBoostItem => false;

		public bool isReviving => false;

		public int totalItemCount => 0;

		public int reviveMilli => 0;

		public int reviveTotalMilli => 0;

		public int itemInRechargeCount => 0;

		public int itemCount => 0;

		public ComMergeTapSource config => null;

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

		public bool CanConsumeItem(Item consumeTarget)
		{
			return false;
		}

		public void SimulateOutput(int count, int round)
		{
		}

		public void StartBoostItem(int count)
		{
		}

		public bool WasBoostItem()
		{
			return false;
		}

		public int ConsumeNextItem(out int oldItemId)
		{
			oldItemId = default(int);
			return 0;
		}

		public void StartNoCD(int seconds)
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

		public int CalculateSpeedOutputCost()
		{
			return 0;
		}

		public void StartInstantOutput(int count)
		{
		}

		public bool SpeedOutput()
		{
			return false;
		}

		public int CalculateSpeedReviveCost()
		{
			return 0;
		}

		public bool CalculateReviveCostBingo(int factor, int max, out int cost_)
		{
			cost_ = default(int);
			return false;
		}

		public bool SpeedRevive()
		{
			return false;
		}

		public override void OnInitOutputSet(Dictionary<int, int> container)
		{
		}

		public override void OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> container)
		{
		}

		public override void OnPostMerge(Item src, Item dst)
		{
		}

		public void TryAddBoostCount(Item src, Item dst)
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

		public void _UpdateNoCD(int milli)
		{
		}

		public void _TickRecharge(int deltaMilli)
		{
		}

		public int _CheckEnergyCost()
		{
			return 0;
		}

		public void ResetEnergyMultiplier()
		{
		}

		public void PreCalculateSmartEnergy()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnInitRandomList(List<ItemOutputRandomList.OutputConstraitFixCount> P0)
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
