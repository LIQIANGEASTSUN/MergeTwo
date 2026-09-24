using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DragonPlus;
using DragonU3DSDK.Storage;
using IFix.Core;
using UnityEngine;
using UnityEngine.UI;

public class MergeClickTips : MonoBehaviour
{
	public enum SpeedUpType
	{
		active = 0,
		product = 1,
		timeProduct = 2
	}

	[CompilerGenerated]
	public sealed class _003CSetBubbleDismiss_003Ed__98 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeClickTips _003C_003E4__this;

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
		public _003CSetBubbleDismiss_003Ed__98(int _003C_003E1__state)
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
	public MergeBoardEnum _boardId;

	[NonSerialized]
	public bool _boardIdSetFlag;

	[NonSerialized]
	public LocalizeTextMeshProUGUI contentText;

	[NonSerialized]
	public Button tipsBtn;

	[NonSerialized]
	public LocalizeTextMeshProUGUI coinText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI diamondsText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI saleDiamondsText;

	[NonSerialized]
	public Transform cdGroup;

	[NonSerialized]
	public LocalizeTextMeshProUGUI cdContentText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI cdText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI timeText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI sellBtnText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI titleText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI speedBtnText;

	[NonSerialized]
	public Button sellBtn;

	[NonSerialized]
	public Button destoryBtn;

	[NonSerialized]
	public Button speedBtn;

	[NonSerialized]
	public Button timeBtn;

	[NonSerialized]
	public Button undoBtn;

	[NonSerialized]
	public Button thumbtackBtn;

	[NonSerialized]
	public Button iceBreakBtn;

	[NonSerialized]
	public Button rvBtn;

	[NonSerialized]
	public Button rvBtn2;

	[NonSerialized]
	public LocalizeTextMeshProUGUI rvBtnText;

	[NonSerialized]
	public LocalizeTextMeshProUGUI rvBtnDesText;

	[NonSerialized]
	public int oldSelectIndex;

	[NonSerialized]
	public int selecGridIndex;

	[NonSerialized]
	public int selecGridId;

	[NonSerialized]
	public StorageMergeItem sellItem;

	[NonSerialized]
	public float sellColdTime;

	[NonSerialized]
	public Coroutine bubbleDissmiss;

	[NonSerialized]
	public TableMergeItem curMergeItem;

	[NonSerialized]
	public StorageMergeItem boardItem;

	[NonSerialized]
	public GameObject explainGroup;

	[NonSerialized]
	public LocalizeTextMeshProUGUI explainText;

	[NonSerialized]
	public Transform energyBG;

	[NonSerialized]
	public Transform energyTip;

	[NonSerialized]
	public GameObject _itemGroup1;

	[NonSerialized]
	public GameObject _itemGroup2;

	[NonSerialized]
	public Image _itemGroup1Image;

	[NonSerialized]
	public Image _itemGroup2Image;

	[NonSerialized]
	public LocalizeTextMeshProUGUI _itemGroup1Text;

	[NonSerialized]
	public LocalizeTextMeshProUGUI _itemGroup2Text;

	[NonSerialized]
	public Button _itemGroup1Button;

	[NonSerialized]
	public Button _itemGroup2Button;

	[NonSerialized]
	public GameObject _itemGroup1Finish;

	[NonSerialized]
	public GameObject _itemGroup2Finish;

	[NonSerialized]
	public int _cdCost;

	[NonSerialized]
	public int _orgCdCost;

	[NonSerialized]
	public SpeedUpType _speedUpType;

	public bool canShowRv;

	public bool canShowBubbleRv;

	public MergeBoardEnum BoardId => default(MergeBoardEnum);

	public int SelectIndex => 0;

	public void SetBoardId(MergeBoardEnum boardId)
	{
	}

	public void Awake()
	{
	}

	public void Start()
	{
	}

	public void InitView()
	{
	}

	[IDTag(2)]
	public void OnSelectGrid(BaseEvent e)
	{
	}

	[IDTag(0)]
	public void OnSelectGrid(Vector2Int arg)
	{
	}

	public void RefreshViewInfos()
	{
	}

	public void RefreshAllStatus()
	{
	}

	public void RefreshEatBuildView()
	{
	}

	public void SetSpeedUpPrice(SpeedUpType type, int leftCD)
	{
	}

	public void SetLockStatus(TableMergeItem itemConfig)
	{
	}

	public void SetBubbleStatus(TableMergeItem itemConfig, StorageMergeItem boardItem)
	{
	}

	public void SetIceCubeStatus(TableMergeItem itemConfig, StorageMergeItem boardItem)
	{
	}

	public void Thumbtack()
	{
	}

	public void BreakIce()
	{
	}

	public void SetRvStatus(bool active)
	{
	}

	public void SetBubbleRvStatus(bool active)
	{
	}

	public void SetSpeedUpStatus(TableMergeItem itemConfig, StorageMergeItem boardItem)
	{
	}

	public void SetAdSpeedUpStatus(int leftCD = 0)
	{
	}

	public void InitContentText(TableMergeItem itemConfig)
	{
	}

	public void SetSellButtonActive(bool active)
	{
	}

	public ActiveCostType SetTimeStatus(TableMergeItem itemConfig)
	{
		return default(ActiveCostType);
	}

	public void SetNoFocusStatus()
	{
	}

	[IDTag(1)]
	public void OnSelectGrid()
	{
	}

	public void OnClickSpeed()
	{
	}

	public void OnClickTime()
	{
	}

	public void ClickTime(int subTime = 0)
	{
	}

	public void OnSpeedUp(bool useRv = false)
	{
	}

	public void SetSpeedStatus()
	{
	}

	public void OnClickTipsBtn()
	{
	}

	public void OnClickSell()
	{
	}

	public void SellItem()
	{
	}

	public void OnSellItem(int index)
	{
	}

	public void SetUndoStatus()
	{
	}

	public void UndoOperate()
	{
	}

	public void SetTipContentText(bool isInCd, string tex = "", bool isBubble = false, bool isIceCube = false)
	{
	}

	public void Invoke_SetBubbleCdTime()
	{
	}

	public void Invoke_SetIceCubeCdTime()
	{
	}

	public void Invoke_SetProductCdTime()
	{
	}

	public void Invoke_OtherItemActiveStatus()
	{
	}

	public void Invoke_SetTimeProductCdTime()
	{
	}

	[IteratorStateMachine(typeof(_003CSetBubbleDismiss_003Ed__98))]
	public IEnumerator SetBubbleDismiss()
	{
		return null;
	}

	public void Invoke_SetActiveCdTime()
	{
	}

	public bool IsOpenRv()
	{
		return false;
	}

	public void OnDestroy()
	{
	}

	public void SendSellBI(int id)
	{
	}

	public void SendUndoBI(int id)
	{
	}

	public void SendBubbleOpen(int id, string biType)
	{
	}

	public void OnApplicationFocus(bool hasFocus)
	{
	}

	public void OnApplicationPause(bool pauseStatus)
	{
	}
}
