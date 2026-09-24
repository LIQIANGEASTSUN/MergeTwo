using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Activity.ComboCriticalHit;
using DragonPlus;
using IFix.Core;
using UnityEngine;
using UnityEngine.UI;

public class MergeMainController : UIWindowController
{
	public class MergeBoardTheme
	{
		public Func<string> TopPath;

		public Func<string> TaskPath;

		public Func<string> BoardPath;

		public Func<string> MainPath;

		public Transform _top;

		public Transform _task;

		public Transform _board;

		public Transform _main;

		[NonSerialized]
		public MergeMainController _mainController;

		public Transform Top => null;

		public Transform Task => null;

		public Transform Board => null;

		public Transform Main => null;

		public void BindMergeMainController(MergeMainController mainController)
		{
		}
	}

	public enum MergeBoardThemeEnum
	{
		Default = 0,
		Mermaid = 1,
		RecoverCoin = 2,
		CoinLeaderBoard = 3,
		ThemeDecoration = 4
	}

	[CompilerGenerated]
	public sealed class _003CStart_003Ed__77 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeMainController _003C_003E4__this;

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
		public _003CStart_003Ed__77(int _003C_003E1__state)
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
	public sealed class _003CWaitHideBagEffect_003Ed__108 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeMainController _003C_003E4__this;

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
		public _003CWaitHideBagEffect_003Ed__108(int _003C_003E1__state)
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
	public MergeBoard _mergeBoard;

	[NonSerialized]
	public Transform _mRoot;

	public Button _mBagBtn;

	[NonSerialized]
	public Transform _mBagMasterIcon;

	[NonSerialized]
	public Button _mRewardBtn;

	[NonSerialized]
	public Button backBtn;

	[NonSerialized]
	public Animator _bagAnimator;

	[NonSerialized]
	public LocalizeTextMeshProUGUI backNumText;

	[NonSerialized]
	public GameObject backRedPoint;

	[NonSerialized]
	public Animator backAnimator;

	[NonSerialized]
	public Image rewardIcon;

	[NonSerialized]
	public Transform taskGuideRoot;

	[NonSerialized]
	public new Animator _animator;

	[NonSerialized]
	public Transform _starJourneyTrans;

	[NonSerialized]
	public List<Transform> _blindBoxTrans;

	public MergeComboPlay ComboPlay;

	[NonSerialized]
	public Transform _comboPlayTrans;

	public MergeComboCriticalHit ComboCriticalHit;

	[NonSerialized]
	public Transform _comboCriticalHitTrans;

	[NonSerialized]
	public GameObject lastDraginGo;

	[NonSerialized]
	public bool multiTouchEnabled;

	[NonSerialized]
	public GameObject noticeGo;

	[NonSerialized]
	public Vector3 bagItemPostion;

	public MergeClickTips mergeClickTips;

	public static MergeMainController Instance;

	[NonSerialized]
	public LocalizeTextMeshProUGUI rewardNumText;

	[NonSerialized]
	public Animator storeBtnAnimator;

	[NonSerialized]
	public Image storeBubbleImage;

	[NonSerialized]
	public GameObject storeRedPoint;

	[NonSerialized]
	public GameObject intoBagEffectObj;

	[NonSerialized]
	public GameObject intoBagMergeObj;

	[NonSerialized]
	public GameObject guideMask;

	public MergeMainBalloon _balloon;

	[NonSerialized]
	public bool isInit;

	[NonSerialized]
	public RectTransform bottomGroupTransform;

	[NonSerialized]
	public int curRewardCount;

	[NonSerialized]
	public Transform _topBG;

	[NonSerialized]
	public Transform _taskBG;

	[NonSerialized]
	public Transform _boardBG;

	[NonSerialized]
	public Transform _boardMainBG;

	[NonSerialized]
	public Transform mermaid_topBG;

	[NonSerialized]
	public Transform mermaid_taskBG;

	[NonSerialized]
	public Transform mermaid_boardBG;

	[NonSerialized]
	public Transform mermaid_boardMainBG;

	public Transform BubbleHangPoint;

	[NonSerialized]
	public Transform _tranLuckyBalloonRv;

	[NonSerialized]
	public MergeBoardTheme curTheme;

	[NonSerialized]
	public Dictionary<MergeBoardThemeEnum, MergeBoardTheme> _themeDic;

	[NonSerialized]
	public float clickRewardsTime;

	[NonSerialized]
	public string[] _dynamicEntryKey;

	[NonSerialized]
	public Dictionary<string, MonoBehaviour> _dynamicEntryMap;

	public MergeBoard MergeBoard => null;

	public float RootScale => 0f;

	public GameObject BackDecoGuideObj { get; set; }

	public Vector3 rewardBtnPos => default(Vector3);

	public Transform rewardBtnTrans => null;

	public RectTransform bagTrans => null;

	public RectTransform backTrans => null;

	public Transform StarJourneyTrans => null;

	public Transform BlindBoxTrans => null;

	public int selcedItemId { get; set; }

	public Transform FlyNode { get; set; }

	public override void PrivateAwake()
	{
	}

	[IteratorStateMachine(typeof(_003CStart_003Ed__77))]
	public IEnumerator Start()
	{
		return null;
	}

	public void SetCanvas(string path, int order)
	{
	}

	public void UpdateGuideMaskOrder()
	{
	}

	public override void OnOpenWindow(params object[] objs)
	{
	}

	public new void OnEnable()
	{
	}

	public void UpdateUI()
	{
	}

	public MergeBoardTheme GetMergeBoardTheme(MergeBoardThemeEnum themeEnum)
	{
		return null;
	}

	public MergeBoardTheme CreateMergeBoardTheme(MergeBoardThemeEnum themeEnum)
	{
		return null;
	}

	[IDTag(0)]
	public void UpdateBgGroupByTheme(MergeBoardTheme theme)
	{
	}

	[IDTag(1)]
	public void UpdateBgGroupByTheme(MergeBoardThemeEnum themeEnum)
	{
	}

	public void UpdateBgGroup()
	{
	}

	public void OnDisable()
	{
	}

	public void CheckBalloon()
	{
	}

	public void OnDestroy()
	{
	}

	[IDTag(1)]
	public void RefreshRewards(BaseEvent e)
	{
	}

	public void RefreshMergeBoard(BaseEvent e)
	{
	}

	public void RefreshTask(BaseEvent e)
	{
	}

	[IDTag(0)]
	public void RefreshRewards(bool isCheckGuide)
	{
	}

	public void RefreshRewardIcon()
	{
	}

	public void OnClickBagBtn()
	{
	}

	public void OnClickRewardBtn()
	{
	}

	public void SendUseAwardBagBi(int id)
	{
	}

	public void OnRefreshOnCompleteTask(BaseEvent obj)
	{
	}

	public void OnClickBackBtn()
	{
	}

	[IDTag(1)]
	public void OnMergeBoardDragIn(BaseEvent e)
	{
	}

	[IDTag(0)]
	public void OnMergeBoardDragIn(GameObject collision)
	{
	}

	[IDTag(1)]
	public void OnMergeBoardPointerUp(BaseEvent e)
	{
	}

	[IDTag(0)]
	public void OnMergeBoardPointerUp(GameObject collision)
	{
	}

	[IteratorStateMachine(typeof(_003CWaitHideBagEffect_003Ed__108))]
	public IEnumerator WaitHideBagEffect()
	{
		return null;
	}

	public void UpdateTaskRedPoint()
	{
	}

	public void PlayAnimation(bool isAppear, Action callBack)
	{
	}

	public void SetGuideMaskActive(bool active)
	{
	}

	public bool RewardItemIsShow()
	{
		return false;
	}

	public void PlayBagAnim(string animName)
	{
	}

	public void RefreshDynamicEntry()
	{
	}

	public void _003C_003EiFixBaseProxy_OnOpenWindow(object[] P0)
	{
	}
}
