using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using Framework;
using IFix.Core;
using UnityEngine;
using UnityEngine.EventSystems;

public class MergeBoard : MonoBehaviour, IOnApplicationPause
{
	public class Grid
	{
		[NonSerialized]
		public int _id;

		public MergeBoardItem board;

		public int oldId;

		public int state;

		public float cd;

		public int xIndex;

		public int yIndex;

		public int index;

		public bool isProduct;

		public bool isAnim;

		public int id
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public bool canTip => false;
	}

	public enum AutoTipType
	{
		None = -1,
		Web = 0,
		Unlock = 1,
		Product = 2,
		Count = 3
	}

	[CompilerGenerated]
	public sealed class _003CDelayPlayAnim_003Ed__152 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public float delayTime;

		public MergeBoard _003C_003E4__this;

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
		public _003CDelayPlayAnim_003Ed__152(int _003C_003E1__state)
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

	[CompilerGenerated]
	public sealed class _003CDelayWorkGuideLogic_003Ed__56 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeBoard _003C_003E4__this;

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
		public _003CDelayWorkGuideLogic_003Ed__56(int _003C_003E1__state)
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

	[CompilerGenerated]
	public sealed class _003CPlayTimeSpeedAnimation_003Ed__94 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeBoard _003C_003E4__this;

		public int index;

		[NonSerialized]
		public int _003Ci_003E5__2;

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
		public _003CPlayTimeSpeedAnimation_003Ed__94(int _003C_003E1__state)
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

	[CompilerGenerated]
	public sealed class _003CPlayTimeTween_003Ed__95 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeBoard _003C_003E4__this;

		public List<int> list;

		public int index;

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
		public _003CPlayTimeTween_003Ed__95(int _003C_003E1__state)
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

	public int _boardID;

	public static SimpleGameObjectPool itemPool;

	public static bool itemPoolInited;

	[NonSerialized]
	public Vector3 originalScale;

	[NonSerialized]
	public RectTransform mFullShield;

	[NonSerialized]
	public Transform mDragLayer;

	[NonSerialized]
	public Rect boardRect;

	[NonSerialized]
	public Vector2 gridSize;

	[NonSerialized]
	public Grid[] grids;

	[NonSerialized]
	public int boardWidth;

	[NonSerialized]
	public int boardHeight;

	public List<Grid> mergeTipList;

	[NonSerialized]
	public FocusLogic _focusLogic;

	[NonSerialized]
	public Coroutine _dealyAnim;

	[NonSerialized]
	public Coroutine _dealyGuide;

	[NonSerialized]
	public HashSet<GameObject> _doAnimationList;

	[NonSerialized]
	public int[][] rectBorder;

	[NonSerialized]
	public int gridSizeSub;

	[NonSerialized]
	public List<int> anmationList;

	[NonSerialized]
	public List<int> targetAnmationList;

	[NonSerialized]
	public List<Grid> canEatFoods;

	[NonSerialized]
	public Vector3 _pointerDownPosition;

	[NonSerialized]
	public bool _dragLock;

	[NonSerialized]
	public Vector3 _dragPosition;

	[NonSerialized]
	public bool _isMerge;

	[NonSerialized]
	public Tweener _dragTweener;

	[NonSerialized]
	public int _selectIndex;

	[NonSerialized]
	public int _focusIndex;

	[NonSerialized]
	public int _playSoundIndex;

	[NonSerialized]
	public bool _isOneClickProcessing;

	[NonSerialized]
	public List<RectTransform> eventObjectList;

	[NonSerialized]
	public int _lastIndex;

	[NonSerialized]
	public BaseEventData _baseEventData;

	[NonSerialized]
	public GameObject _curPointerObject;

	[NonSerialized]
	public GameObject _curDragObject;

	[NonSerialized]
	public float foucsTime;

	[NonSerialized]
	public bool _isDraging;

	[NonSerialized]
	public List<RaycastResult> _tempRaycastResults;

	[NonSerialized]
	public Dictionary<AutoTipType, List<Grid>> autoTipMap;

	[NonSerialized]
	public Dictionary<int, List<Grid>> autoTipGrids;

	public List<Grid> TempAutoTipsItems;

	[NonSerialized]
	public List<Func<int, bool>> _procedureHint;

	[NonSerialized]
	public List<Func<int, bool>> _procedureHandle;

	public RectTransform mContent { get; set; }

	public Vector2 GridSize => default(Vector2);

	public Grid[] Grids => null;

	public int SelectIndex => 0;

	public int activeIndex { get; set; }

	public static void InitPool()
	{
	}

	public void SetBoardID(int boardID)
	{
	}

	public virtual void InitBoardId()
	{
	}

	public void Awake()
	{
	}

	public void LockBoard()
	{
	}

	public void UnLockBoard()
	{
	}

	public void OnDestroy()
	{
	}

	public void RefreshGridsStatus()
	{
	}

	public void RefreshGridsImage()
	{
	}

	public Grid GetGridByIndex(int index)
	{
		return null;
	}

	public Vector3 GetGridPosition(int index)
	{
		return default(Vector3);
	}

	public Transform GetGridTransform(int index)
	{
		return null;
	}

	public Grid GetGridById(int id)
	{
		return null;
	}

	public List<Grid> GetGridsById(int id)
	{
		return null;
	}

	public bool CanFeedFood(int feedId, int foodId)
	{
		return false;
	}

	public Grid FindOneProductItem(ref int index)
	{
		return null;
	}

	public int GetGridIndex(Grid grid)
	{
		return 0;
	}

	public Grid GetOneBoxItem(ref int index)
	{
		return null;
	}

	public Grid GetOneBoxItemActive(ref int index)
	{
		return null;
	}

	public Grid GetOneBoxItemInActive(ref int index)
	{
		return null;
	}

	public int PosToIndex(Vector3 pos)
	{
		return 0;
	}

	public int FindSameIndex(Vector3 pos, int index)
	{
		return 0;
	}

	public Vector3 IndexToPos(int index)
	{
		return default(Vector3);
	}

	public Vector3 IndexToPosition(int index)
	{
		return default(Vector3);
	}

	public void RefreshGrid(int index, int id, int state, bool autoTips = true, RefreshItemSource source = RefreshItemSource.notDeal, int oldIndex = -1, int oldId = -1)
	{
	}

	public void SetAnimationsObjLastSibling()
	{
	}

	public void StartChoseMergeItemGuide()
	{
	}

	[IteratorStateMachine(typeof(_003CDelayWorkGuideLogic_003Ed__56))]
	public IEnumerator DelayWorkGuideLogic()
	{
		return null;
	}

	public void RefreshGridState(int index)
	{
	}

	public void InitGrids(int number)
	{
	}

	public void RefreshInitGrids()
	{
	}

	public void RefreshBaseOrder(BaseEvent e)
	{
	}

	public void OnRefresh(BaseEvent e)
	{
	}

	[IDTag(1)]
	public void OnNewItem(BaseEvent e)
	{
	}

	[IDTag(1)]
	public void OnUseItem(BaseEvent e)
	{
	}

	[IDTag(0)]
	public virtual void OnUseItem(int index, int id)
	{
	}

	[IDTag(0)]
	public virtual void OnNewItem(int index, int oldIndex, int id, int oldId, RefreshItemSource source)
	{
	}

	public void SelectFocus(int index, bool isMergeAnim = false, bool isPlayAnim = true, bool isFinishGuide = false)
	{
	}

	public bool OperateItem(int index, RefreshItemSource source = RefreshItemSource.product)
	{
		return false;
	}

	public bool IsEndSpecialItem(int id, int count)
	{
		return false;
	}

	public void ProductOneItem(int oldIndex, int newIndex, int id, bool isDeath, RefreshItemSource source = RefreshItemSource.product, int state = 1, bool isFreeTimeProduct = false, int existTime = 0)
	{
	}

	public void SendProductBi(int id, int newId, int leftCount, int cd, bool isAuto, string state)
	{
	}

	public bool TryOpenBoxes(int index)
	{
		return false;
	}

	public bool OpenBox(int index)
	{
		return false;
	}

	public void Merge(int index, int id, int oldId, int productCount, RefreshItemSource source, int extraProduct = 0, bool mergeIceCube = false)
	{
	}

	public int GetBoxProductCount(int index1, int index2)
	{
		return 0;
	}

	public int GetMergeItemLeftProductCount(int index1, int index2)
	{
		return 0;
	}

	public void OnDisable()
	{
	}

	public virtual void OnEnable()
	{
	}

	public void StopAllTweenAnim()
	{
	}

	public void AddEventObject(RectTransform rect)
	{
	}

	public GameObject GetEventObject(Vector2 screenPoint)
	{
		return null;
	}

	public bool IsBox()
	{
		return false;
	}

	public bool IsGridUnlock()
	{
		return false;
	}

	public void RefreshAllProduct()
	{
	}

	public void RefreshOneProduct(int index)
	{
	}

	public void RefreshEnergyTorrendState(BaseEvent e)
	{
	}

	public void RefreshUnlimitedProductState(BaseEvent e)
	{
	}

	public void TimeProductItem(int index, TableMergeItem itemConfig)
	{
	}

	public void FreeTimeProductItem(int index)
	{
	}

	public void DoAnimation(int index, int oldIndex, RefreshItemSource source, Action tweenEndCall = null)
	{
	}

	public void OnSellItem(BaseEvent e)
	{
	}

	public virtual TableMergeItem MergeToProductActivity(int index, TableMergeItem newConfig, TableMergeItem oldConfig)
	{
		return null;
	}

	public bool MergeToProdcutExp(int index, int id, int oldId)
	{
		return false;
	}

	public bool MergeToProdcutBubble(int index, int id, int oldId)
	{
		return false;
	}

	[IteratorStateMachine(typeof(_003CPlayTimeSpeedAnimation_003Ed__94))]
	public IEnumerator PlayTimeSpeedAnimation(int index)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CPlayTimeTween_003Ed__95))]
	public IEnumerator PlayTimeTween(List<int> list, int index)
	{
		return null;
	}

	public List<int> FindNearGrid(int index, int near)
	{
		return null;
	}

	public bool IsInArea(int x, int y)
	{
		return false;
	}

	public void OnApplicationPause(bool pauseStatus)
	{
	}

	public void RestoreInput()
	{
	}

	public bool EatBuildingTipsAnim()
	{
		return false;
	}

	public List<Grid> FindCanEatFoods(Grid eatGrid)
	{
		return null;
	}

	public virtual void AddSiblingTransform(Transform trans)
	{
	}

	public virtual void DelSiblingTransform(Transform trans)
	{
	}

	public virtual void UpdateSibling(bool isAdapt = false)
	{
	}

	public void OnHandle_PointerDown(PointerEventData pointerEventData)
	{
	}

	public void OnHandle_Drag(PointerEventData pointerEventData)
	{
	}

	public void OnHandle_PointerUp(PointerEventData pointerEventData)
	{
	}

	public void InitEventTrigger()
	{
	}

	public void OnPointerDown(BaseEventData baseEventData)
	{
	}

	public void OnPointerUp(BaseEventData baseEventData)
	{
	}

	public void OnDrag(BaseEventData baseEventData)
	{
	}

	public void OnBeginDrag(BaseEventData baseEventData)
	{
	}

	public void OnEndDrag(BaseEventData baseEventData)
	{
	}

	public GameObject GetNextEventObject(PointerEventData pointerEventData)
	{
		return null;
	}

	public bool MergeToProductIceCube(int index, int id, int oldId)
	{
		return false;
	}

	public bool TryProductNextIceCube(int index, int oldId)
	{
		return false;
	}

	public bool IsFailedByCD()
	{
		return false;
	}

	public bool IsFailedByEnergyLimit()
	{
		return false;
	}

	public int GetCurrentTotalDifficulty(int in_line)
	{
		return 0;
	}

	public void RegisterProcedureHint()
	{
	}

	public void AutoTips(bool isRestore = false)
	{
	}

	public void PlayTipsAnimation(int index = -1, float delayTime = 2.5f)
	{
	}

	[IteratorStateMachine(typeof(_003CDelayPlayAnim_003Ed__152))]
	public IEnumerator DelayPlayAnim(float delayTime)
	{
		return null;
	}

	public List<Grid> CalculateAutoTip(bool isAddMergeTips = true, bool filterTask = true, bool keepTwo = true, int targetId = -1)
	{
		return null;
	}

	public bool IsOutOffBoard(int index)
	{
		return false;
	}

	public void BuildAutoTips(bool filterTask, bool keepTwo = true, int targetId = -1)
	{
	}

	public List<Grid> GetAutoGrids(Grid grid)
	{
		return null;
	}

	public void AddAutoMap(Grid grid)
	{
	}

	public void AddAutoGrid(Grid grid)
	{
	}

	public void CancelTip(int index, bool force = false)
	{
	}

	public void PauseTip(int index)
	{
	}

	public void ResetMergeTipsAnim()
	{
	}

	public void MergeAnimator(int index)
	{
	}

	public bool ProcedureHint_SpeedUp(int index)
	{
		return false;
	}

	public bool ProcedureHint_EatBuild(int index)
	{
		return false;
	}

	public bool ProcedureHint_Broom(int index)
	{
		return false;
	}

	public bool ProcedureHint_Split(int index)
	{
		return false;
	}

	public bool ProcedureHint_Omnipotent(int index)
	{
		return false;
	}

	public bool ProcedureHint_MagicWand(int index)
	{
		return false;
	}

	public bool ProcedureHint_SameID(int index)
	{
		return false;
	}

	public bool ProcedureHint_Default(int index)
	{
		return false;
	}

	public bool CommonProcedureHint(int index)
	{
		return false;
	}

	public void SetMergeStatus(int index, bool isMerge)
	{
	}

	public bool IsIndexValid(int index)
	{
		return false;
	}

	public void RegisterProcedureHandle()
	{
	}

	public void ProcedureHandle(int index)
	{
	}

	public bool Procedure_Guide(int index)
	{
		return false;
	}

	public bool Procedure_OneClick(int index)
	{
		return false;
	}

	public bool Procedure_BoardOutside(int index)
	{
		return false;
	}

	public bool Procedure_BoardSameGrid(int index)
	{
		return false;
	}

	public bool Procedure_GridCD(int index)
	{
		return false;
	}

	public bool Procedure_SameGridItem(int index)
	{
		return false;
	}

	public bool Procedure_Omnipotent(int index)
	{
		return false;
	}

	public bool Procedure_MagicWand(int index)
	{
		return false;
	}

	public bool Procedure_Split(int index)
	{
		return false;
	}

	public bool Procedure_LockAndNoBubble(int index)
	{
		return false;
	}

	public bool Procedure_LevelLimit(int index)
	{
		return false;
	}

	public bool Procedure_EatBuild(int index)
	{
		return false;
	}

	public bool Procedure_SpeedUp(int index)
	{
		return false;
	}

	public bool Procedure_Default(int index)
	{
		return false;
	}

	public void MoveHome(int index)
	{
	}

	public void Swap(int srcIndex, int targetIndex)
	{
	}

	public void SwapBoardItemIndex(int srcIndex, int targetIndex)
	{
	}
}
