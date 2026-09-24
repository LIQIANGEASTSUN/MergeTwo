using System;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityFrozenItem : ActivityLike
	{
		[NonSerialized]
		public FrozenItemMergeBonusHandler mergeBonusHandler;

		[NonSerialized]
		public FrozenItemSpawnBonusHandler spawnBonusHandler;

		public bool MustSpawnFrozenItem;

		public override bool Valid => false;

		public FrozenItem Conf { get; set; }

		public int GroupId { get; set; }

		public int EnergyConsumed { get; set; }

		public int FrozenItemBrokenCount { get; set; }

		public FrozenItemDetail GetCurGroupConfig()
		{
			return null;
		}

		public ActivityFrozenItem(ActivityLite lite_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void Open()
		{
		}

		public override void WhenEnd()
		{
		}

		public void _RefreshMergeBonusHandler()
		{
		}

		public void _ClearMergeBonusHandler()
		{
		}

		public void _RefreshSpawnBonusHandler()
		{
		}

		public void _ClearSpawnBonusHandler()
		{
		}

		public void OnEnergySpent(int energy)
		{
		}

		public void OnFrozenItemMerged()
		{
		}

		public bool ReachedTotalFrozenItemLimit(FrozenItemDetail d)
		{
			return false;
		}

		public void DebugSetEnergyConsumed(int energyConsumed)
		{
		}

		public void DebugSetFrozenItemBrokenCount(int count)
		{
		}

		public void DebugMustSpawnFrozenItem()
		{
		}

		public bool _003C_003EiFixBaseProxy_get_Valid()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
