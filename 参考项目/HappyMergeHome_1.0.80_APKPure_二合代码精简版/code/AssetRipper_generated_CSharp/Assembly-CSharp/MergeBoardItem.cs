using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using DragonPlus;
using DragonU3DSDK.Storage;
using Gameplay;
using IFix.Core;
using UnityEngine;
using UnityEngine.UI;

public class MergeBoardItem : MonoBehaviour
{
	[CompilerGenerated]
	public sealed class _003CHideOrderBoxHintAfterDelay_003Ed__158 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeBoardItem _003C_003E4__this;

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
		public _003CHideOrderBoxHintAfterDelay_003Ed__158(int _003C_003E1__state)
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
	public sealed class _003COnDecompos_003Ed__143 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MergeBoardItem _003C_003E4__this;

		[NonSerialized]
		public TableMergeItem _003ClastLevelItem_003E5__2;

		[NonSerialized]
		public int _003CgridIndex_003E5__3;

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
		public _003COnDecompos_003Ed__143(int _003C_003E1__state)
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
	public string[] _mergeEffectName;

	public TableMergeItem tableMergeItem;

	[NonSerialized]
	public Transform obj_output;

	[NonSerialized]
	public Transform obj_output_special;

	[NonSerialized]
	public Transform vfx_increase;

	[NonSerialized]
	public Transform obj_merge;

	[NonSerialized]
	public Transform obj_smoke;

	[NonSerialized]
	public Transform obj_bubble;

	[NonSerialized]
	public Transform obj_bubble_tag;

	[NonSerialized]
	public Transform obj_box;

	[NonSerialized]
	public Transform obj_box_happygo;

	[NonSerialized]
	public Transform obj_ring;

	[NonSerialized]
	public Transform obj_task;

	[NonSerialized]
	public Transform obj_dailyTask;

	[NonSerialized]
	public Transform obj_orderTask;

	[NonSerialized]
	public Transform obj_garageCleanup;

	[NonSerialized]
	public Image obj_energy;

	[NonSerialized]
	public Transform obj_energyTorrent;

	[NonSerialized]
	public Transform obj_lock;

	[NonSerialized]
	public Transform obj_icon;

	[NonSerialized]
	public Transform obj_time;

	[NonSerialized]
	public Transform obj_mc_time;

	[NonSerialized]
	public Transform obj_vfx_speed;

	[NonSerialized]
	public Transform obj_timeMask;

	[NonSerialized]
	public Transform obj_power;

	[NonSerialized]
	public Transform obj_tap;

	[NonSerialized]
	public Transform obj_hint;

	[NonSerialized]
	public Transform obj_orderBoxHint;

	[NonSerialized]
	public Transform obj_openTips;

	[NonSerialized]
	public Transform obj_taskBg;

	public Transform vfx_trail;

	[NonSerialized]
	public Transform obj_bubbleGroup;

	[NonSerialized]
	public Transform vfx_boxHappyGo;

	[NonSerialized]
	public Image image_bubble;

	[NonSerialized]
	public Image image_bubble1;

	public Image image_icon;

	[NonSerialized]
	public Image image_lock;

	[NonSerialized]
	public Image image_lock_happygo;

	[NonSerialized]
	public Image image_time;

	[NonSerialized]
	public Image image_box;

	[NonSerialized]
	public Transform obj_combo;

	[NonSerialized]
	public Transform obj_energyDouble;

	[NonSerialized]
	public Transform obj_energyTorrentDouble;

	[NonSerialized]
	public Animator animator;

	[NonSerialized]
	public Animator anim_bubble;

	[NonSerialized]
	public Animator anim_time;

	[NonSerialized]
	public Animator anim_box;

	[NonSerialized]
	public Animator anim_power;

	[NonSerialized]
	public Animator anim_combo;

	[NonSerialized]
	public Animator anim_criticalHit;

	[NonSerialized]
	public LocalizeTextMeshProUGUI _textCombo;

	[NonSerialized]
	public Transform _fullLevel;

	[NonSerialized]
	public Transform vfx_transition_01;

	[NonSerialized]
	public Material ui_grey;

	[NonSerialized]
	public Slider _eatSlider;

	[NonSerialized]
	public GameObject _eatBackGround;

	[NonSerialized]
	public Transform _iceCubeGroup;

	[NonSerialized]
	public Image _iceCubeSlider;

	[NonSerialized]
	public Transform _iceCubeSliderPointer;

	[NonSerialized]
	public Image image_iceCube;

	[NonSerialized]
	public float itemSize;

	[NonSerialized]
	public int _id;

	[NonSerialized]
	public MergeItemStatus _state;

	[NonSerialized]
	public int _index;

	[NonSerialized]
	public bool isProductItem;

	[NonSerialized]
	public bool isTimeProductItem;

	[NonSerialized]
	public bool isEnergyProduct;

	public StorageMergeItem storageMergeItem;

	[NonSerialized]
	public Dictionary<string, Coroutine> mergeDelayAnims;

	[NonSerialized]
	public Coroutine _orderBoxHintCoroutine;

	public Vector3 _orgLocalPosition;

	[NonSerialized]
	public Sequence _doTweenSequence;

	[NonSerialized]
	public Vector3 _oldLocalPosition;

	[NonSerialized]
	public Vector3 _orgLockPosition;

	public Vector3 _orgIconLocalPosition;

	[NonSerialized]
	public bool _isShowBubble;

	[NonSerialized]
	public int _biscuitId;

	[NonSerialized]
	public Vector3[] path;

	[NonSerialized]
	public float[] _energyPowerScale;

	[NonSerialized]
	public float speedTweenTime;

	[NonSerialized]
	public int _comboEfIndex;

	[NonSerialized]
	public int _criticalHitIndex;

	[NonSerialized]
	public Image _mapAdventureOneBoxIcon;

	[NonSerialized]
	public Image _mapAdventureOneLockIcon;

	[NonSerialized]
	public Transform _mapAdventureOneBoxFx;

	[NonSerialized]
	public Transform _mapAdventureOneUnlockFx;

	[NonSerialized]
	public bool _isMapAdventureOne;

	public const string _mapAdventureOnePrefabName = "MapAdventure1";

	[NonSerialized]
	public MergeBoardEnum[] _mapAdventureOneBoard;

	[NonSerialized]
	public Image _mapAdventureTwoBoxIcon;

	[NonSerialized]
	public Image _mapAdventureTwoLockIcon;

	[NonSerialized]
	public Transform _mapAdventureTwoBoxFx;

	[NonSerialized]
	public Transform _mapAdventureTwoUnlockFx;

	[NonSerialized]
	public bool _isMapAdventureTwo;

	public const string _mapAdventureTwoPrefabName = "MapAdventure2";

	[NonSerialized]
	public MergeBoardEnum[] _mapAdventureTwoBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTen;

	[NonSerialized]
	public Image _summerWatermelonLockIconTen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTen;

	[NonSerialized]
	public bool _isSummerWatermelonTen;

	public const string _summerWatermelonTenPrefabName = "SummerWatermelon10";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconEleven;

	[NonSerialized]
	public Image _summerWatermelonLockIconEleven;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxEleven;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxEleven;

	[NonSerialized]
	public bool _isSummerWatermelonEleven;

	public const string _summerWatermelonElevenPrefabName = "SummerWatermelon11";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonElevenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwelve;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwelve;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwelve;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwelve;

	[NonSerialized]
	public bool _isSummerWatermelonTwelve;

	public const string _summerWatermelonTwelvePrefabName = "SummerWatermelon12";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwelveBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThirteen;

	[NonSerialized]
	public Image _summerWatermelonLockIconThirteen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThirteen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThirteen;

	[NonSerialized]
	public bool _isSummerWatermelonThirteen;

	public const string _summerWatermelonThirteenPrefabName = "SummerWatermelon13";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThirteenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconFourteen;

	[NonSerialized]
	public Image _summerWatermelonLockIconFourteen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxFourteen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxFourteen;

	[NonSerialized]
	public bool _isSummerWatermelonFourteen;

	public const string _summerWatermelonFourteenPrefabName = "SummerWatermelon14";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonFourteenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconFifteen;

	[NonSerialized]
	public Image _summerWatermelonLockIconFifteen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxFifteen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxFifteen;

	[NonSerialized]
	public bool _isSummerWatermelonFifteen;

	public const string _summerWatermelonFifteenPrefabName = "SummerWatermelon15";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonFifteenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconSixteen;

	[NonSerialized]
	public Image _summerWatermelonLockIconSixteen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxSixteen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxSixteen;

	[NonSerialized]
	public bool _isSummerWatermelonSixteen;

	public const string _summerWatermelonSixteenPrefabName = "SummerWatermelon16";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonSixteenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconSeventeen;

	[NonSerialized]
	public Image _summerWatermelonLockIconSeventeen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxSeventeen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxSeventeen;

	[NonSerialized]
	public bool _isSummerWatermelonSeventeen;

	public const string _summerWatermelonSeventeenPrefabName = "SummerWatermelon17";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonSeventeenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconEighteen;

	[NonSerialized]
	public Image _summerWatermelonLockIconEighteen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxEighteen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxEighteen;

	[NonSerialized]
	public bool _isSummerWatermelonEighteen;

	public const string _summerWatermelonEighteenPrefabName = "SummerWatermelon18";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonEighteenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconNineteen;

	[NonSerialized]
	public Image _summerWatermelonLockIconNineteen;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxNineteen;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxNineteen;

	[NonSerialized]
	public bool _isSummerWatermelonNineteen;

	public const string _summerWatermelonNineteenPrefabName = "SummerWatermelon19";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonNineteenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIcon;

	[NonSerialized]
	public Image _summerWatermelonLockIcon;

	[NonSerialized]
	public Transform _summerWatermelonBoxFx;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFx;

	[NonSerialized]
	public bool _isSummerWatermelonTwo;

	public const string _summerWatermelonTwoPrefabName = "SummerWatermelon2";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwoBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwenty;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwenty;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwenty;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwenty;

	[NonSerialized]
	public bool _isSummerWatermelonTwenty;

	public const string _summerWatermelonTwentyPrefabName = "SummerWatermelon20";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyOne;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyOne;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyOne;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyOne;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyOne;

	public const string _summerWatermelonTwentyOnePrefabName = "SummerWatermelon21";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyOneBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyTwo;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyTwo;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyTwo;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyTwo;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyTwo;

	public const string _summerWatermelonTwentyTwoPrefabName = "SummerWatermelon22";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyTwoBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyThree;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyThree;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyThree;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyThree;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyThree;

	public const string _summerWatermelonTwentyThreePrefabName = "SummerWatermelon23";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyThreeBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyFour;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyFour;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyFour;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyFour;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyFour;

	public const string _summerWatermelonTwentyFourPrefabName = "SummerWatermelon24";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyFourBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyFive;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyFive;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyFive;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyFive;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyFive;

	public const string _summerWatermelonTwentyFivePrefabName = "SummerWatermelon25";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyFiveBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentySix;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentySix;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentySix;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentySix;

	[NonSerialized]
	public bool _isSummerWatermelonTwentySix;

	public const string _summerWatermelonTwentySixPrefabName = "SummerWatermelon26";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentySixBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentySeven;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentySeven;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentySeven;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentySeven;

	[NonSerialized]
	public bool _isSummerWatermelonTwentySeven;

	public const string _summerWatermelonTwentySevenPrefabName = "SummerWatermelon27";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentySevenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyEight;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyEight;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyEight;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyEight;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyEight;

	public const string _summerWatermelonTwentyEightPrefabName = "SummerWatermelon28";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyEightBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconTwentyNine;

	[NonSerialized]
	public Image _summerWatermelonLockIconTwentyNine;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxTwentyNine;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxTwentyNine;

	[NonSerialized]
	public bool _isSummerWatermelonTwentyNine;

	public const string _summerWatermelonTwentyNinePrefabName = "SummerWatermelon29";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonTwentyNineBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThree;

	[NonSerialized]
	public Image _summerWatermelonLockIconThree;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThree;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThree;

	[NonSerialized]
	public bool _isSummerWatermelonThree;

	public const string _summerWatermelonThreePrefabName = "SummerWatermelon3";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThreeBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThirty;

	[NonSerialized]
	public Image _summerWatermelonLockIconThirty;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThirty;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThirty;

	[NonSerialized]
	public bool _isSummerWatermelonThirty;

	public const string _summerWatermelonThirtyPrefabName = "SummerWatermelon30";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThirtyBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThirtyOne;

	[NonSerialized]
	public Image _summerWatermelonLockIconThirtyOne;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThirtyOne;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThirtyOne;

	[NonSerialized]
	public bool _isSummerWatermelonThirtyOne;

	public const string _summerWatermelonThirtyOnePrefabName = "SummerWatermelon31";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThirtyOneBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThirtyTwo;

	[NonSerialized]
	public Image _summerWatermelonLockIconThirtyTwo;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThirtyTwo;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThirtyTwo;

	[NonSerialized]
	public bool _isSummerWatermelonThirtyTwo;

	public const string _summerWatermelonThirtyTwoPrefabName = "SummerWatermelon32";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThirtyTwoBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThirtyThree;

	[NonSerialized]
	public Image _summerWatermelonLockIconThirtyThree;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThirtyThree;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThirtyThree;

	[NonSerialized]
	public bool _isSummerWatermelonThirtyThree;

	public const string _summerWatermelonThirtyThreePrefabName = "SummerWatermelon33";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThirtyThreeBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconThirtyFour;

	[NonSerialized]
	public Image _summerWatermelonLockIconThirtyFour;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxThirtyFour;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxThirtyFour;

	[NonSerialized]
	public bool _isSummerWatermelonThirtyFour;

	public const string _summerWatermelonThirtyFourPrefabName = "SummerWatermelon34";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonThirtyFourBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconFour;

	[NonSerialized]
	public Image _summerWatermelonLockIconFour;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxFour;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxFour;

	[NonSerialized]
	public Transform _summerWatermelonCleanGroupFour;

	[NonSerialized]
	public Transform _summerWatermeFourIconFx;

	[NonSerialized]
	public Transform _summerWatermeFourSliderTwo;

	[NonSerialized]
	public Transform _summerWatermeFourSliderTwo0;

	[NonSerialized]
	public Transform _summerWatermeFourSliderTwo1;

	[NonSerialized]
	public Transform _summerWatermeFourSliderThree;

	[NonSerialized]
	public Transform _summerWatermeFourSliderThree0;

	[NonSerialized]
	public Transform _summerWatermeFourSliderThree1;

	[NonSerialized]
	public Transform _summerWatermeFourSliderThree2;

	[NonSerialized]
	public bool _isSummerWatermelonFour;

	public const string _summerWatermelonFourPrefabName = "SummerWatermelon4";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonFourBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconFive;

	[NonSerialized]
	public Image _summerWatermelonLockIconFive;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxFive;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxFive;

	[NonSerialized]
	public bool _isSummerWatermelonFive;

	public const string _summerWatermelonFivePrefabName = "SummerWatermelon5";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonFiveBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconSix;

	[NonSerialized]
	public Image _summerWatermelonLockIconSix;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxSix;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxSix;

	[NonSerialized]
	public Transform _summerWatermelonCleanGroupSix;

	[NonSerialized]
	public Transform _summerWatermeSixIconFx;

	[NonSerialized]
	public Transform _summerWatermeSixSliderTwo;

	[NonSerialized]
	public Transform _summerWatermeSixSliderTwo0;

	[NonSerialized]
	public Transform _summerWatermeSixSliderTwo1;

	[NonSerialized]
	public Transform _summerWatermeSixSliderThree;

	[NonSerialized]
	public Transform _summerWatermeSixSliderThree0;

	[NonSerialized]
	public Transform _summerWatermeSixSliderThree1;

	[NonSerialized]
	public Transform _summerWatermeSixSliderThree2;

	[NonSerialized]
	public bool _isSummerWatermelonSix;

	public const string _summerWatermelonSixPrefabName = "SummerWatermelon6";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonSixBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconSeven;

	[NonSerialized]
	public Image _summerWatermelonLockIconSeven;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxSeven;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxSeven;

	[NonSerialized]
	public bool _isSummerWatermelonSeven;

	public const string _summerWatermelonSevenPrefabName = "SummerWatermelon7";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonSevenBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconEight;

	[NonSerialized]
	public Image _summerWatermelonLockIconEight;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxEight;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxEight;

	[NonSerialized]
	public Transform _summerWatermelonCleanGroupEight;

	[NonSerialized]
	public Transform _summerWatermeEightIconFx;

	[NonSerialized]
	public Transform _summerWatermeEightSliderTwo;

	[NonSerialized]
	public Transform _summerWatermeEightSliderTwo0;

	[NonSerialized]
	public Transform _summerWatermeEightSliderTwo1;

	[NonSerialized]
	public Transform _summerWatermeEightSliderThree;

	[NonSerialized]
	public Transform _summerWatermeEightSliderThree0;

	[NonSerialized]
	public Transform _summerWatermeEightSliderThree1;

	[NonSerialized]
	public Transform _summerWatermeEightSliderThree2;

	[NonSerialized]
	public bool _isSummerWatermelonEight;

	public const string _summerWatermelonEightPrefabName = "SummerWatermelon8";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonEightBoard;

	[NonSerialized]
	public Image _summerWatermelonBoxIconNine;

	[NonSerialized]
	public Image _summerWatermelonLockIconNine;

	[NonSerialized]
	public Transform _summerWatermelonBoxFxNine;

	[NonSerialized]
	public Transform _summerWatermelonUnlockFxNine;

	[NonSerialized]
	public bool _isSummerWatermelonNine;

	public const string _summerWatermelonNinePrefabName = "SummerWatermelon9";

	[NonSerialized]
	public MergeBoardEnum[] _summerWatermelonNineBoard;

	public MergeBoardEnum BoardId => default(MergeBoardEnum);

	public Animator Animator => null;

	public MergeItemStatus state
	{
		get
		{
			return default(MergeItemStatus);
		}
		set
		{
		}
	}

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

	public int index
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public void SetBoardId(MergeBoardEnum boardId)
	{
	}

	public void Awake()
	{
	}

	public void Init()
	{
	}

	public void UpdateData(bool isInitImages = true)
	{
	}

	public void InitImages()
	{
	}

	public void UpdateIconImage(int id = -1)
	{
	}

	public void PlayMergeEffect()
	{
	}

	public void PlayRemoveEffect()
	{
	}

	public bool IsSpecialBoard()
	{
		return false;
	}

	public void InitStatus()
	{
	}

	[IDTag(1)]
	public void PlayAnimator(string name, bool isRefreshStatus = false)
	{
	}

	public void PlayTweenAnim(Vector3 dir)
	{
	}

	public void StopTweenAnim()
	{
	}

	public void OnDestroy()
	{
	}

	[IDTag(0)]
	public void PlayAnimator(Animator anim, string name)
	{
	}

	public void UpdateImageColor()
	{
	}

	public GameObject CloneIconGameObject()
	{
		return null;
	}

	public Vector3 GetIconPosition()
	{
		return default(Vector3);
	}

	public void Reset()
	{
	}

	public void RefreshAllStatus()
	{
	}

	public void RefreshSlider()
	{
	}

	public void RefreshHamsterBubble()
	{
	}

	public bool CanUpdate()
	{
		return false;
	}

	public void BubbleBreak()
	{
	}

	public void IceBreak()
	{
	}

	public void RefreshBubbleStatus()
	{
	}

	public void RefreshIceCubeStatus()
	{
	}

	public void RefreshOutPutStatus()
	{
	}

	public void SetOutputActive(bool active)
	{
	}

	public bool IsInProductCD()
	{
		return false;
	}

	public void RefreshCdStatus()
	{
	}

	public void OnDisable()
	{
	}

	public void OnEnable()
	{
	}

	public void PlayEatMergeAni()
	{
	}

	public void SetCdStatus(bool status)
	{
	}

	public void SetMergeStatus(bool status)
	{
	}

	public void DoProductTween(Vector3 oldPos, Vector3 newPos, RefreshItemSource source = RefreshItemSource.notDeal, Action tweenEndCall = null)
	{
	}

	public void SetTaskStatus(bool status, bool bgStatus)
	{
	}

	public void SetDailyTaskStatus(bool status)
	{
	}

	public void SetOrderTaskStatus(bool status)
	{
	}

	public void SetGarageCleanupStatus(bool status)
	{
	}

	public void PlaySpeedUpAnimator(bool rv, Action cb = null)
	{
	}

	public void PlayBoxBreakAnimator()
	{
	}

	public void DelayCall(Action cb = null)
	{
	}

	public void PlaySmoke()
	{
	}

	public void DoUseItem(int index)
	{
	}

	public void AddCurrency(UserData.ResourceId type, TableMergeItem tableMerge, int index)
	{
	}

	public void AddEasterCoin(TableMergeItem tableMerge, int index)
	{
	}

	public void AddDogCookies(TableMergeItem tableMerge, int index)
	{
	}

	public void SpliteItem()
	{
	}

	[IteratorStateMachine(typeof(_003COnDecompos_003Ed__143))]
	public IEnumerator OnDecompos()
	{
		return null;
	}

	public void SendHarvestBi()
	{
	}

	public void SendBubbleBreak()
	{
	}

	public void SendBubbleBreakIn()
	{
	}

	public void SetTapImageStatus()
	{
	}

	public void SetTapImageActive(bool isActive)
	{
	}

	public void PlayPowerAnimator()
	{
	}

	public void PlaySpilteVfx()
	{
	}

	public void DoTimeSpeedUpTween(Vector3 pos)
	{
	}

	public void OnSellItem()
	{
	}

	public void PlayBubbleAnimation(string aniName)
	{
	}

	public void PlayHintEffect()
	{
	}

	public void PlayOrderBoxHintEffect()
	{
	}

	[IteratorStateMachine(typeof(_003CHideOrderBoxHintAfterDelay_003Ed__158))]
	public IEnumerator HideOrderBoxHintAfterDelay()
	{
		return null;
	}

	public void Debug_ShowIcon()
	{
	}

	public void PlayComboEf(int effectNum = 0)
	{
	}

	public void PlayCriticalHitEf()
	{
	}

	public void InitMapAdventureOne(MergeBoardEnum id)
	{
	}

	public void InitMapAdventureOneStatus()
	{
	}

	public void PlayMapAdventureOneBoxBreakAnimator()
	{
	}

	public void InitMapAdventureTwo(MergeBoardEnum id)
	{
	}

	public void InitMapAdventureTwoStatus()
	{
	}

	public void PlayMapAdventureTwoBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTenStatus()
	{
	}

	public void PlaySummerWatermelonTenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonEleven(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonElevenStatus()
	{
	}

	public void PlaySummerWatermelonElevenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwelve(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwelveStatus()
	{
	}

	public void PlaySummerWatermelonTwelveBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThirteen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThirteenStatus()
	{
	}

	public void PlaySummerWatermelonThirteenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonFourteen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonFourteenStatus()
	{
	}

	public void PlaySummerWatermelonFourteenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonFifteen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonFifteenStatus()
	{
	}

	public void PlaySummerWatermelonFifteenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonSixteen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonSixteenStatus()
	{
	}

	public void PlaySummerWatermelonSixteenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonSeventeen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonSeventeenStatus()
	{
	}

	public void PlaySummerWatermelonSeventeenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonEighteen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonEighteenStatus()
	{
	}

	public void PlaySummerWatermelonEighteenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonNineteen(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonNineteenStatus()
	{
	}

	public void PlaySummerWatermelonNineteenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwo(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwoStatus()
	{
	}

	public void PlaySummerWatermelonTwoBoxBreakAnimator()
	{
	}

	public void ResetSummerWatermelonTwo()
	{
	}

	public void InitSummerWatermelonTwenty(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyStatus()
	{
	}

	public void PlaySummerWatermelonTwentyBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyOne(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyOneStatus()
	{
	}

	public void PlaySummerWatermelonTwentyOneBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyTwo(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyTwoStatus()
	{
	}

	public void PlaySummerWatermelonTwentyTwoBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyThree(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyThreeStatus()
	{
	}

	public void PlaySummerWatermelonTwentyThreeBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyFour(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyFourStatus()
	{
	}

	public void PlaySummerWatermelonTwentyFourBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyFive(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyFiveStatus()
	{
	}

	public void PlaySummerWatermelonTwentyFiveBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentySix(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentySixStatus()
	{
	}

	public void PlaySummerWatermelonTwentySixBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentySeven(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentySevenStatus()
	{
	}

	public void PlaySummerWatermelonTwentySevenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyEight(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyEightStatus()
	{
	}

	public void PlaySummerWatermelonTwentyEightBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonTwentyNine(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonTwentyNineStatus()
	{
	}

	public void PlaySummerWatermelonTwentyNineBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThree(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThreeStatus()
	{
	}

	public void PlaySummerWatermelonThreeBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThirty(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThirtyStatus()
	{
	}

	public void PlaySummerWatermelonThirtyBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThirtyOne(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThirtyOneStatus()
	{
	}

	public void PlaySummerWatermelonThirtyOneBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThirtyTwo(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThirtyTwoStatus()
	{
	}

	public void PlaySummerWatermelonThirtyTwoBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThirtyThree(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThirtyThreeStatus()
	{
	}

	public void PlaySummerWatermelonThirtyThreeBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonThirtyFour(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonThirtyFourStatus()
	{
	}

	public void PlaySummerWatermelonThirtyFourBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonFour(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonFourStatus()
	{
	}

	public void UpdateHoeSlider()
	{
	}

	public void UpdateHoeIconFx(bool isShow)
	{
	}

	public void PlaySummerWatermelonFourBoxBreakAnimator()
	{
	}

	public void PlayHoeAnimator(Action cb = null)
	{
	}

	public void InitSummerWatermelonFive(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonFiveStatus()
	{
	}

	public void PlaySummerWatermelonFiveBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonSix(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonSixStatus()
	{
	}

	public void PlaySummerWatermelonSixBoxBreakAnimator()
	{
	}

	public void PlayHoeSixAnimator(Action cb = null)
	{
	}

	public void UpdateHoeSixSlider()
	{
	}

	public void UpdateHoeIconFxSix(bool isShow)
	{
	}

	public void InitSummerWatermelonSeven(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonSevenStatus()
	{
	}

	public void PlaySummerWatermelonSevenBoxBreakAnimator()
	{
	}

	public void InitSummerWatermelonEight(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonEightStatus()
	{
	}

	public void PlaySummerWatermelonEightBoxBreakAnimator()
	{
	}

	public void PlayHoeEightAnimator(Action cb = null)
	{
	}

	public void UpdateHoeEightSlider()
	{
	}

	public void UpdateHoeIconFxEight(bool isShow)
	{
	}

	public void InitSummerWatermelonNine(MergeBoardEnum id)
	{
	}

	public void InitSummerWatermelonNineStatus()
	{
	}

	public void PlaySummerWatermelonNineBoxBreakAnimator()
	{
	}

	public void ResetSummerWatermelonNine()
	{
	}
}
