using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL;
using FAT.Merge;
using fat.gamekitdata;

namespace FAT
{
	public class MineBoardMan : IGameModule, IUserDataHolder, IUpdate
	{
		[CompilerGenerated]
		public sealed class _003C_CoLoading_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MineBoardMan _003C_003E4__this;

			public MineBoardActivity act;

			public Action<SimpleAsyncTask, MineBoardActivity> afterFadeIn;

			public Action afterFadeOut;

			[NonSerialized]
			public SimpleAsyncTask _003CwaitFadeOutEnd_003E5__2;

			[NonSerialized]
			public SimpleAsyncTask _003CwaitLoadingJobFinish_003E5__3;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003C_CoLoading_003Ed__20(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[NonSerialized]
		public MineBoardActivity _curActivity;

		public static bool _isEnterFromMain;

		[NonSerialized]
		public bool _isLoading;

		[NonSerialized]
		public int _curDepthIndex;

		[NonSerialized]
		public List<int> _allItemIdList;

		[NonSerialized]
		public bool _isReadyToMove;

		[NonSerialized]
		public int _readyFrameCount;

		[NonSerialized]
		public bool _isBoardMoving;

		[NonSerialized]
		public Action _moveUpAction;

		public bool IsUnlock => false;

		public bool IsValid => false;

		public MergeWorld World { get; set; }

		public MergeWorldTracer WorldTracer { get; set; }

		public int CurDepthIndex => 0;

		public void DebugResetMineBoard()
		{
		}

		public void EnterMineBoard(Action afterFadeOut = null)
		{
		}

		public void _MergeToActivity(SimpleAsyncTask task, MineBoardActivity act)
		{
		}

		public void ExitMineBoard(MineBoardActivity act)
		{
		}

		public void _ActivityToMerge(SimpleAsyncTask task, MineBoardActivity act)
		{
		}

		[IteratorStateMachine(typeof(_003C_CoLoading_003Ed__20))]
		public IEnumerator _CoLoading(Action<SimpleAsyncTask, MineBoardActivity> afterFadeIn = null, Action afterFadeOut = null, MineBoardActivity act = null)
		{
			return null;
		}

		public bool IsItemUnlock(int itemId)
		{
			return false;
		}

		public int GetCurDepthIndex()
		{
			return 0;
		}

		public int GetCurDepth()
		{
			return 0;
		}

		public List<int> GetAllItemIdList()
		{
			return null;
		}

		public int GetCurUnlockItemMaxLevel()
		{
			return 0;
		}

		public bool CheckIsMineBoardItem(int itemId)
		{
			return false;
		}

		public void OnNewItemUnlock()
		{
		}

		public void OnNewItemShow(Item itemData)
		{
		}

		public void TryAddToken(int id, int num, ReasonString reason)
		{
		}

		public bool TryUseToken(int id, int num, ReasonString reason)
		{
			return false;
		}

		public int GetBoardId()
		{
			return 0;
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public void TryStart(ActivityLike activity, bool isNew)
		{
		}

		public void TryEnd(ActivityLike activity)
		{
		}

		public void _SetCurActivity(MineBoardActivity activity)
		{
		}

		public void _InitMineBoardData(bool isNew)
		{
		}

		public void _ClearMineBoardData()
		{
		}

		public void _InitWorld(int boardId, bool isFirstOpen)
		{
		}

		public bool FillBoardRowConfStr(int detailId, IList<string> container, int startRow, int needRowCount)
		{
			return false;
		}

		public void _RefreshAllItemIdList()
		{
		}

		public void _OnBoardItemChange()
		{
		}

		void IUpdate.Update(float dt)
		{
		}

		public void StartMoveUpBoard()
		{
		}

		public void _MoveUpBoard(Board board, int upRowCount, int detailParam, int startCreateRow)
		{
		}

		public bool CollectAllBoardReward(List<RewardCommitData> rewards)
		{
			return false;
		}

		public void _TryCollectReward(Item item, Dictionary<int, int> itemIdMap, Dictionary<int, int> rewardMap)
		{
		}

		public void TrackMineMilestone(ActivityLike act, int index, int milestoneNum, int diff, bool isFinal, string reward)
		{
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
	}
}
