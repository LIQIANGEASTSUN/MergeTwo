using System;
using System.Collections.Generic;
using EL;
using UnityEngine;
using fat.gamekitdata;

namespace FAT
{
	public class HandbookMan : IGameModule, IUserDataHolder, ISecondUpdate
	{
		public bool HandbookHasRP;

		[NonSerialized]
		public Bitmap64 _handbookUnlockMask;

		[NonSerialized]
		public Bitmap64 _handbookReceivedMask;

		[NonSerialized]
		public Dictionary<int, HandbookItemState> _itemStateMap;

		[NonSerialized]
		public List<int> _cacheNewUnlockItemIdList;

		[NonSerialized]
		public Dictionary<int, bool> _cacheNewUnlockItemPassiveMap;

		public static Vector3 _rewardFromPos;

		public bool IsHandbookOpen()
		{
			return false;
		}

		public void OpenUIHandbook()
		{
		}

		public void UnlockHandbookItem(int itemId, bool refreshNow = false)
		{
		}

		public void UnlockHandbookItemList(IList<int> itemIdList, int activeItemId, bool refreshNow = false)
		{
		}

		public void LockHandbookItem(IList<int> itemIdList = null)
		{
		}

		public bool TryClaimHandbookReward(int itemId, Vector3 flyFromPos, FlyType flyType = FlyType.Handbook)
		{
			return false;
		}

		public void TryClaimBoardHandbookReward(IBoardActivityHandbook activity, int itemId, Vector3 itemFlyFrom, FlyType flyType = FlyType.Handbook)
		{
		}

		public bool _ProcessChainReward(IBoardActivityHandbook activity, int itemId, out List<RewardCommitData> rewards)
		{
			rewards = null;
			return false;
		}

		public int GetNextRewardableGroupId()
		{
			return 0;
		}

		public int GetNextRewardableSeriesId(int groupId)
		{
			return 0;
		}

		public bool CheckHasRewardInChain(int itemId)
		{
			return false;
		}

		public bool CheckAllReceivedInChain(int itemId)
		{
			return false;
		}

		public bool IsItemLock(int itemId)
		{
			return false;
		}

		public bool IsItemPreview(int itemId)
		{
			return false;
		}

		public bool IsItemUnlocked(int itemId)
		{
			return false;
		}

		public bool IsItemUnlockedInList(int itemId)
		{
			return false;
		}

		public bool IsItemCanClaim(int itemId)
		{
			return false;
		}

		public bool IsItemReceived(int itemId)
		{
			return false;
		}

		public bool TryGetItemState(int itemId, out HandbookItemState state)
		{
			state = default(HandbookItemState);
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

		public void SetData(LocalSaveData archive)
		{
		}

		public void FillData(LocalSaveData archive)
		{
		}

		public void SecondUpdate(float dt)
		{
		}

		public void _InitItemStateMap()
		{
		}

		public void _RefreshAllItemState(IList<int> refreshItemIdList = null)
		{
		}

		public void _RefreshItemState(int itemId)
		{
		}

		public void _RefreshAllItemPreviewState(List<int> refreshItemIdList = null)
		{
		}

		public void _CheckItemState(int itemId, out HandbookItemState state)
		{
			state = default(HandbookItemState);
		}

		public void _RefreshItemPreviewState(int itemId)
		{
		}

		public void _TrySetItemUnlock(int itemId, bool isPassiveUnlock, bool refreshNow = false)
		{
		}

		public void _TrySetItemLock(IList<int> itemIdList = null)
		{
		}

		public void _CheckCacheItemUnlockState()
		{
		}

		public void _TrackNewItemUnlock()
		{
		}

		public void _RefreshRedPointState()
		{
		}

		public void _OnNewItemUnlock()
		{
		}

		public bool _TryClaimHandbookReward(int itemId, FlyType flyType = FlyType.Handbook)
		{
			return false;
		}
	}
}
