using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using FAT.Merge;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class ActivityBingo : ActivityLike, IBoardEntry, IMergeItemIndicatorHandler, IActivityOrderHandler
	{
		public class EntryWrapper : ListActivity.IEntrySetup
		{
			[NonSerialized]
			public readonly ListActivity.Entry e;

			[NonSerialized]
			public readonly ActivityBingo bingo;

			public ListActivity.Entry Entry => null;

			public EntryWrapper(ListActivity.Entry e_, ActivityBingo bingo_)
			{
			}

			public override void Clear(ListActivity.Entry e_)
			{
			}

			public void RefreshFlag()
			{
			}
		}

		public int BingoGroupID;

		public int BingoGroupPhase;

		public int BingoGroupPhaseTotal;

		public int BingoTotal;

		public int BingoBoardTotal;

		public bool IsMain;

		public readonly List<BingoItem> BingoItems;

		public bool HasPop;

		public int BoardRowNum;

		public int BoardColNum;

		public Dictionary<int, int> BingoItemMap;

		public int ConfBingoID;

		public int ConfBoardID;

		public ActivityVisual MainVisual;

		public PopupActivity MainPopup;

		public UIResAlt MainRes;

		public ActivityVisual BingoVisual;

		public UIResAlt BingoRes;

		public ActivityVisual ItemVisual;

		public UIResAlt ItemRes;

		public ActivityVisual EndVisual;

		public UIResAlt EndRes;

		public PopupActivity EndPopup;

		public override ActivityVisual Visual => null;

		public string BadgeAsset => null;

		public event Action Invalidate
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public void CollectDetectorExcludeItemMap(List<IDictionary<int, int>> container)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void Open()
		{
		}

		public override void SetupFresh()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public ActivityBingo(ActivityLite lite)
		{
		}

		public override void WhenEnd()
		{
		}

		public ItemIndType CheckIndicator(int itemId, out string asset)
		{
			asset = null;
			return default(ItemIndType);
		}

		public int GetBingoCount()
		{
			return 0;
		}

		public int GetBingoTotalNum()
		{
			return 0;
		}

		public int GetBingoBoardIndex()
		{
			return 0;
		}

		public bool CheckGroupStart()
		{
			return false;
		}

		public Dictionary<int, List<int>> GetOptionalBingoGroup()
		{
			return null;
		}

		public void ChooseGroup(int groupId)
		{
		}

		public List<BingoItem> GetBingoItemList()
		{
			return null;
		}

		[IDTag(0)]
		public void RefreshBingoItemMap()
		{
		}

		[IDTag(1)]
		public void RefreshBingoItemMap(BingoItem item)
		{
		}

		public void PreviewCompleteBingo(BingoItem item, out List<(int, int)> reward)
		{
			reward = null;
		}

		public ItemBingoState CompleteBingo(BingoItem item, out List<RewardCommitData> rewardCommitDatas, out bool enterNextBoard, out bool enterNextRound)
		{
			rewardCommitDatas = null;
			enterNextBoard = default(bool);
			enterNextRound = default(bool);
			return default(ItemBingoState);
		}

		public bool TryTakeOutItem(int ID)
		{
			return false;
		}

		public bool CheckBingoComplete()
		{
			return false;
		}

		public int FindFirstSubmitItem()
		{
			return 0;
		}

		public bool TryEnterNextBoard()
		{
			return false;
		}

		public bool TryEnterNextRound()
		{
			return false;
		}

		public void InitConf()
		{
		}

		public void RefreshTheme()
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}
	}
}
