using System;
using System.Collections.Generic;
using FAT.Merge;
using fat.gamekitdata;

namespace FAT
{
	public class BagMan : IGameModule, IUserDataHolder
	{
		public enum BagType
		{
			None = 0,
			Item = 1,
			Producer = 2,
			Tool = 3
		}

		public class BagGirdData
		{
			public BagType BelongBagType;

			public int BelongBagId;

			public int GirdIndex;

			public int ItemTId;

			public bool IsUnlock;

			public int BuyCostNum;

			public int BelongItemId;

			public int RelateItemId;

			public override string ToString()
			{
				return null;
			}

			public string _003C_003EiFixBaseProxy_ToString()
			{
				return null;
			}
		}

		[NonSerialized]
		public Inventory _mergeInventory;

		[NonSerialized]
		public int _curItemBagUnlockId;

		[NonSerialized]
		public Dictionary<BagType, List<BagGirdData>> _allBagGirdData;

		public int CurItemBagUnlockId => 0;

		public bool CanPutItemInBag => false;

		public int ItemBagEmptyGirdNum { get; set; }

		public void TryOpenUIBag()
		{
		}

		public bool CheckBagUnlock(params BagType[] typeList)
		{
			return false;
		}

		public bool _CheckBagIsUnlock(BagType type)
		{
			return false;
		}

		public List<BagGirdData> GetBagGirdDataList(int bagId)
		{
			return null;
		}

		public void OnMergeLevelChange()
		{
		}

		public void OnItemEnterBag()
		{
		}

		public void OnItemLeaveBag()
		{
		}

		public void OnGalleryUnlock()
		{
		}

		public bool CanBuyNewItemBagGird()
		{
			return false;
		}

		public void PurchaseItemBagGird(int price, Action successCb)
		{
		}

		public BagGirdData CheckCanPutProducerBag(Item item)
		{
			return null;
		}

		public int GetProduceIdByLevel(int level)
		{
			return 0;
		}

		public bool FindItemAndJumpToUIBag(int itemId)
		{
			return false;
		}

		public void Reset()
		{
		}

		public void LoadConfig()
		{
		}

		public void Startup()
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public void _CheckItemBagCapacity()
		{
		}

		public int _CalcProducerBagCapacityByConfigAndLevel(int curLevel)
		{
			return 0;
		}

		public void _CheckProducerBagCapacity()
		{
		}

		public void _CheckProducerBagRedPoint()
		{
		}

		public void _InitBagGirdGirdData()
		{
		}

		public void _InitItemGirdData()
		{
		}

		public void _InitProducerGirdData()
		{
		}

		public void AlignProducerBagWithConfig(MergeWorld world)
		{
		}

		public void _InitToolGirdData()
		{
		}

		public bool _CheckIsUnlockInGallery(int itemId)
		{
			return false;
		}

		public void _UpdateBagGirdData(params BagType[] typeList)
		{
		}

		public void _UpdateItemGirdData()
		{
		}

		public void _UpdateProducerGirdData()
		{
		}

		public void _UpdateToolGirdData()
		{
		}

		public bool _TryMoveToolItemsToRewardBox()
		{
			return false;
		}

		public bool _IsToolBoxOrToolItem(int itemTid)
		{
			return false;
		}
	}
}
