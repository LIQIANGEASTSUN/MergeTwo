using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class MBBoardItemDetail : MonoBehaviour
	{
		public enum UsageType
		{
			Undo = 0,
			TapCost = 1,
			BurstBubble = 2,
			SpeedUp = 3,
			SpeedUpFree = 4,
			Sell = 5,
			Delete = 6,
			ChestOpen = 7,
			Ads = 8,
			Max = 9
		}

		[Serializable]
		public class BoostGroup
		{
			[StructLayout((LayoutKind)3)]
			[CompilerGenerated]
			public struct _003CPunch_003Ed__25 : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

				public BoostGroup _003C_003E4__this;

				public EnergyBoostState state;

				[NonSerialized]
				public UniTask.Awaiter _003C_003Eu__1;

				private void MoveNext()
				{
				}

				void IAsyncStateMachine.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					this.MoveNext();
				}

				[DebuggerHidden]
				private void SetStateMachine(IAsyncStateMachine stateMachine)
				{
				}

				void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
				{
					//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
					this.SetStateMachine(stateMachine);
				}
			}

			public Button btnSwitch;

			public GameObject root;

			public GameObject bg;

			public GameObject off;

			public GameObject on_2x;

			public GameObject on_4x;

			public GameObject on_8x;

			public GameObject on_16x;

			public GameObject tip_4x;

			public TextMeshProUGUI tip_energy;

			public Animator animator_root;

			public Animator animator_crown;

			public float tipPopDelay;

			public bool textColorBoost { get; set; }

			public bool waitingForUnlockFlyFeedback { get; set; }

			public void RefreshBoost(bool canShow, EnergyBoostState state, EnergyBoostState preState, EnergyBoostState preHighestAvailableState = EnergyBoostState.X1)
			{
			}

			public void TryShowTipHighestAvailable(EnergyBoostState state)
			{
			}

			public int GetGuideIdByState(EnergyBoostState state)
			{
				return 0;
			}

			public void ShowTip(EnergyBoostState targetState)
			{
			}

			[AsyncStateMachine(typeof(_003CPunch_003Ed__25))]
			public UniTaskVoid Punch(EnergyBoostState state)
			{
				return default(UniTaskVoid);
			}

			public void OnEnergyChanged(EnergyBoostState currentState)
			{
			}
		}

		[SerializeField]
		public Transform usageRoot;

		[SerializeField]
		public GameObject property;

		[SerializeField]
		public TextMeshProUGUI txtDesc;

		[SerializeField]
		public GameObject propertyOpt;

		[SerializeField]
		public TextMeshProUGUI txtDescOpt;

		[SerializeField]
		public TextMeshProUGUI txtTitleOpt;

		[SerializeField]
		public Button btnInfo;

		[SerializeField]
		public BoostGroup boostGroup;

		[SerializeField]
		public GameObject[] titleBG;

		[NonSerialized]
		public List<MBItemUsageBase> mUsageTable;

		[NonSerialized]
		public Item mItem;

		[NonSerialized]
		public bool mIsUnsell;

		[NonSerialized]
		public int mCurUsageMask;

		[NonSerialized]
		public string text_format_for_boost;

		[NonSerialized]
		public string text_format_for_normal;

		public const string LEVEL_TEXT_KEY = "#SysComDesc1767";

		public int nameColorId(bool isBoost)
		{
			return 0;
		}

		public int descColorId(bool isBoost)
		{
			return 0;
		}

		public void Setup()
		{
		}

		public virtual void InitOnPreOpen()
		{
		}

		public void CleanupOnPostClose()
		{
		}

		public void Update()
		{
		}

		public void _ApplyUsageMask(int mask, Item item)
		{
		}

		public void _ClearUsage()
		{
		}

		public bool _AllowBubbleAds()
		{
			return false;
		}

		public bool _AllowSell()
		{
			return false;
		}

		public int _GetUsageFlag(UsageType act)
		{
			return 0;
		}

		public int _CheckUsage()
		{
			return 0;
		}

		public bool _IsFreeBubble(Item item)
		{
			return false;
		}

		public void _UpdateItem(Item item)
		{
		}

		public void _RefreshItem(Item item)
		{
		}

		public void _SetSelectedItem(Item item)
		{
		}

		public string _GetNameColorStr(bool boost)
		{
			return null;
		}

		public string _GetDescColorStr(bool boost)
		{
			return null;
		}

		public virtual string BuildTextFormat(bool boost)
		{
			return null;
		}

		public virtual (string, string) BuildTextFormatOpt(bool boost, bool useLevel)
		{
			return default((string, string));
		}

		public void _UpdateTitleBGState(bool show)
		{
		}

		public void _UpdateTitleFontStyle(bool boost)
		{
		}

		public void _SetNameAndDesc(string _name, string _level, string _desc)
		{
		}

		public void _SetInfoBtn(Item item)
		{
		}

		public void _ShowEmptyInfo()
		{
		}

		public void _ShowLockItem(Item item)
		{
		}

		public void _ShowNormalInfo(Item item)
		{
		}

		public void _ShowUndoInfo(Item item)
		{
		}

		public void _ShowEnergyBoostInfo(bool tryShow)
		{
		}

		public bool _CheckCanShowEnergyBoost()
		{
			return false;
		}

		public void _OnBtnInfo()
		{
		}

		public void _OnSecondPass()
		{
		}

		public void _OnMessageBoardSelectItem(Item item)
		{
		}

		public void _OnHandleSoldItemChange(Item item)
		{
		}

		public void _OnHandleChestWaitStart(Item item)
		{
		}

		public void _OnHandleChestWaitFinish(Item item)
		{
		}

		public void _OnHandlerItemStateChange(Item item, ItemStateChangeContext context)
		{
		}

		public void _OnHandlerUseTimeScaleSource(Item item)
		{
		}

		public void _OnBtnEnergyBoost()
		{
		}

		public void _OnMessageEnergyBoostUnlockFlyFeedback(EnergyBoostState state)
		{
		}

		public void _OnMergeEnergyChange(int delta)
		{
		}
	}
}
