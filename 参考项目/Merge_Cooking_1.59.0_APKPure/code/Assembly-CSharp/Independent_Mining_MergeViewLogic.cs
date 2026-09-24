using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using DG.Tweening.Core;
using TLF;
using TLF.SkinSystem;
using TMPro;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("Independent_Mining_MergeView")]
public class Independent_Mining_MergeViewLogic : IndependentMergeViewBaseLogic
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayExpAnimation_003Ed__52 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float delay;

		public Independent_Mining_MergeViewLogic _003C_003E4__this;

		private IndependentShowData _003CshowData_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			//IL_0088: Unknown result type (might be due to invalid IL or missing references)
			//IL_008f: Unknown result type (might be due to invalid IL or missing references)
			//IL_004a: Unknown result type (might be due to invalid IL or missing references)
			//IL_004f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0053: Unknown result type (might be due to invalid IL or missing references)
			//IL_0058: Unknown result type (might be due to invalid IL or missing references)
			//IL_006c: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			Independent_Mining_MergeViewLogic independent_Mining_MergeViewLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					_003CshowData_003E5__2 = ObjectManager.GetInstance().independentMiningModel.GetShowData();
					if (!(delay > 0f))
					{
						goto IL_00a5;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayExpAnimation_003Ed__52>(ref val2, ref this);
						return;
					}
				}
				else
				{
					val2 = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val2.GetResult();
				goto IL_00a5;
				IL_00a5:
				if ((Object)(object)independent_Mining_MergeViewLogic.PassEnterLogic != (Object)null)
				{
					independent_Mining_MergeViewLogic.PassEnterLogic.DoProgress(_003CshowData_003E5__2);
				}
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003CshowData_003E5__2 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003CshowData_003E5__2 = null;
			_003C_003Et__builder.SetResult();
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayGoodsToTemparyAudio_003Ed__40 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float delay;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0066: Unknown result type (might be due to invalid IL or missing references)
			//IL_006b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0072: Unknown result type (might be due to invalid IL or missing references)
			//IL_002e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0036: Unknown result type (might be due to invalid IL or missing references)
			//IL_003b: Unknown result type (might be due to invalid IL or missing references)
			//IL_004f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0050: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					if (!(delay > 0f))
					{
						goto IL_0088;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayGoodsToTemparyAudio_003Ed__40>(ref val2, ref this);
						return;
					}
				}
				else
				{
					val2 = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val2.GetResult();
				goto IL_0088;
				IL_0088:
				AudioManager.Instance.PlayEffect("숵끏碽弶慇4æ句숙끒㖸㔚灑6Ù变숏끓断琐彙5\u009a厙");
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003Et__builder.SetResult();
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayMapMoveAnimation_003Ed__37 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public int depth;

		public Independent_Mining_MergeViewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00a4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
			//IL_0395: Unknown result type (might be due to invalid IL or missing references)
			//IL_039a: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a1: Unknown result type (might be due to invalid IL or missing references)
			//IL_0068: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0071: Unknown result type (might be due to invalid IL or missing references)
			//IL_0076: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Unknown result type (might be due to invalid IL or missing references)
			//IL_008b: Unknown result type (might be due to invalid IL or missing references)
			//IL_02b3: Unknown result type (might be due to invalid IL or missing references)
			//IL_02f5: Unknown result type (might be due to invalid IL or missing references)
			//IL_02ff: Expected Obj, but got Unknown
			//IL_0359: Unknown result type (might be due to invalid IL or missing references)
			//IL_035e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0362: Unknown result type (might be due to invalid IL or missing references)
			//IL_0367: Unknown result type (might be due to invalid IL or missing references)
			//IL_037b: Unknown result type (might be due to invalid IL or missing references)
			//IL_037c: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			Independent_Mining_MergeViewLogic CS_0024_003C_003E8__locals56 = _003C_003E4__this;
			try
			{
				Awaiter val;
				UniTask val2;
				if (num != 0)
				{
					if (num == 1)
					{
						val = _003C_003Eu__1;
						_003C_003Eu__1 = default;
						num = (_003C_003E1__state = -1);
						goto IL_03b0;
					}
					CommonMaskViewLogic.Show((float)depth + 1f);
					CS_0024_003C_003E8__locals56.CanShowHint = false;
					CS_0024_003C_003E8__locals56.RemoveMergeHint();
					MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion_Consume();
					MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods_Consume();
					val2 = UniTask.Delay(TimeSpan.FromSeconds(0.7200000286102295), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMapMoveAnimation_003Ed__37>(ref val, ref this);
						return;
					}
				}
				else
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val.GetResult();
				CS_0024_003C_003E8__locals56.ResetGameMap();
				if (depth > 0 && CS_0024_003C_003E8__locals56.mAnimationMapDic != null)
				{
					if (CS_0024_003C_003E8__locals56.aniGridBgOffsetIndex != CS_0024_003C_003E8__locals56.gridBgOffsetIndex)
					{
						CS_0024_003C_003E8__locals56.aniGridBgOffsetIndex = CS_0024_003C_003E8__locals56.gridBgOffsetIndex;
						CS_0024_003C_003E8__locals56.RecoveryAnimationGridBg();
						CS_0024_003C_003E8__locals56.CreateAnimationGridBg(CS_0024_003C_003E8__locals56.gridBgOffsetIndex);
					}
					if (depth % 2 == 1)
					{
						CS_0024_003C_003E8__locals56.gridBgOffsetIndex = ((CS_0024_003C_003E8__locals56.gridBgOffsetIndex == 0) ? 1 : 0);
						CS_0024_003C_003E8__locals56.ResetGameMapBg(CS_0024_003C_003E8__locals56.gridBgOffsetIndex);
					}
					bool flag = ObjectManager.GetInstance().independentMiningModel.IsOldSkin();
					CS_0024_003C_003E8__locals56.LevelNode.SetSelfActive<RectTransform>(false);
					CS_0024_003C_003E8__locals56.ContentBgAnim.SetSelfActive<RectTransform>(flag);
					CS_0024_003C_003E8__locals56.LevelNodeAnim.SetSelfActive<RectTransform>(true);
					CS_0024_003C_003E8__locals56.LevelNodeAnimContent.SetSelfActive<RectTransform>(true);
					CS_0024_003C_003E8__locals56.RecoveryAnimationGrid();
					Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(CS_0024_003C_003E8__locals56.ViewLevelType);
					for (int i = CS_0024_003C_003E8__locals56.Rows - depth + 1; i <= CS_0024_003C_003E8__locals56.Rows; i++)
					{
						for (int j = 1; j <= CS_0024_003C_003E8__locals56.Columns; j++)
						{
							int key = i * 10 + j;
							int key2 = (i + depth) * 10 + j;
							if (independentMap.TryGetValue(key, out var value))
							{
								CS_0024_003C_003E8__locals56.mAnimationMapDic[key2] = value;
							}
						}
					}
					CS_0024_003C_003E8__locals56.CreateAnimationGrid(CS_0024_003C_003E8__locals56.mAnimationMapDic, depth, playCollectAnim: true);
					if ((Object)(object)CS_0024_003C_003E8__locals56.LevelNodeAnimation != (Object)null)
					{
						CS_0024_003C_003E8__locals56.LevelNodeAnimation.Stop();
						string text = (flag ? "숇끔榰漈䅕&ª厩숃끥溔朄湚;¾厽숏끹抱漐彇!\u008e厍숵끈憽欶慧:\u008a厉뻹" : "숇끔榰漈䅕&ª厩숃끥溔朄湚;¾厽숏끹抱漐彇!\u008e厍숵끈憽欶慧:\u008a厉刧祇\ud9cdĆ");
						CS_0024_003C_003E8__locals56.LevelNodeAnimation.Play(text);
					}
					CS_0024_003C_003E8__locals56.CreateGameObject(IndependentDefine.GetDiggingDepthName(CS_0024_003C_003E8__locals56.ViewLevelType, depth), CS_0024_003C_003E8__locals56.MoveEffectParent);
					string uIResourceName = ObjectManager.GetInstance().independentMiningModel.GetUIResourceName(IndependentMiningResName.Mining_Aud_Digsnow.ToString());
					AudioManager.Instance.PlayEffect(uIResourceName);
					CS_0024_003C_003E8__locals56.PlayVibrateDevice(VibrateManager.VibrateType.Intense, depth);
					float num2 = ((Transform)CS_0024_003C_003E8__locals56.LevelNodeAnim).localPosition.y + (float)(depth * IndependentMergeViewBaseLogic.GridHeight);
					TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMoveY((Transform)(object)CS_0024_003C_003E8__locals56.LevelNodeAnim, num2, (float)depth, false), (Ease)1), true), (TweenCallback)(() =>
					{
						//IL_0013: Unknown result type (might be due to invalid IL or missing references)
						ShortcutExtensions.DOKill((Component)(object)CS_0024_003C_003E8__locals56.LevelNodeAnim, false);
						((Transform)CS_0024_003C_003E8__locals56.LevelNodeAnim).localPosition = Vector3.zero;
						CS_0024_003C_003E8__locals56.LevelNodeAnim.SetSelfActive<RectTransform>(false);
						CS_0024_003C_003E8__locals56.LevelNodeAnimContent.SetSelfActive<RectTransform>(false);
						if ((Object)(object)CS_0024_003C_003E8__locals56.TemporaryLogic != (Object)null)
						{
							CS_0024_003C_003E8__locals56.TemporaryLogic.UpdateTempprary();
						}
						string item2 = (ObjectManager.GetInstance().independentMiningModel.CurrentDepth * 100).ToString();
						LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)CS_0024_003C_003E8__locals56.DepthText, ObjectManager.GetInstance().independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숎끍璆栏救\"Ö叕"), new List<string> { item2 });
						ObjectManager.GetInstance().independentMiningModel.ShowDepthTipView();
						CS_0024_003C_003E8__locals56.RecoveryAnimationGrid();
						CS_0024_003C_003E8__locals56.LevelNode.SetSelfActive<RectTransform>(true);
						CS_0024_003C_003E8__locals56.CanShowHint = true;
					}));
					int num3 = ObjectManager.GetInstance().independentMiningModel.CurrentDepth - depth;
					int currentDepth = ObjectManager.GetInstance().independentMiningModel.CurrentDepth;
					CS_0024_003C_003E8__locals56.PlayDepthChangeAnimation(num3 * 100, currentDepth * 100, depth);
					val2 = UniTask.Delay(TimeSpan.FromSeconds(0.25), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 1);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMapMoveAnimation_003Ed__37>(ref val, ref this);
						return;
					}
					goto IL_03b0;
				}
				CS_0024_003C_003E8__locals56.LevelNode.SetSelfActive<RectTransform>(true);
				CS_0024_003C_003E8__locals56.LevelNodeAnim.SetSelfActive<RectTransform>(false);
				CS_0024_003C_003E8__locals56.LevelNodeAnimContent.SetSelfActive<RectTransform>(false);
				if ((Object)(object)CS_0024_003C_003E8__locals56.TemporaryLogic != (Object)null)
				{
					CS_0024_003C_003E8__locals56.TemporaryLogic.UpdateTempprary();
				}
				string item = (ObjectManager.GetInstance().independentMiningModel.CurrentDepth * 100).ToString();
				LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)CS_0024_003C_003E8__locals56.DepthText, ObjectManager.GetInstance().independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숎끍璆栏救\"Ö叕"), new List<string> { item });
				ObjectManager.GetInstance().independentMiningModel.ShowDepthTipView();
				CS_0024_003C_003E8__locals56.CanShowHint = true;
				goto end_IL_000e;
				IL_03b0:
				val.GetResult();
				if ((Object)(object)CS_0024_003C_003E8__locals56.TemporaryLogic != (Object)null)
				{
					CS_0024_003C_003E8__locals56.TemporaryLogic.UpdateTempprary();
				}
				end_IL_000e:;
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003Et__builder.SetResult();
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private int mIndependentColumns = 6;

	private int mIndependentRows = 8;

	private List<IndependentGrid> mAnimationGridGo;

	private List<IndependentGridBg> mAnimationGridBgGo;

	private bool isShowInfo;

	private bool isAutoOpen;

	private int gridBgOffsetIndex;

	private int aniGridBgOffsetIndex;

	private Dictionary<int, IndependentGameGoodsVo> mAnimationMapDic;

	private GameObject TemparyFankuiPrefab;

	private Tweener mDotween;

	private int mCurrentValue;

	private bool mDepthAnimation;

	public RectTransform Content;

	public RTLTextMeshPro TitleTextTMP;

	public RTLTextMeshPro DescTextTMP;

	public RTLTextMeshPro TimeDownTMP;

	public RTLTextMeshPro GiftTimeDownText;

	public RTLTextMeshPro PassTimeDownText;

	public GameObject GiftButtonGo;

	public Image TokenIcon;

	public RTLTextMeshPro TokenNum;

	public RTLTextMeshPro DepthText;

	public Transform ContentAutoSize;

	public Transform TokenNode;

	[Header("等级通行证逻辑")]
	public Independent_Mining_PassEnter PassEnterLogic;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	[Header("图鉴入口")]
	public Independent_Mining_Illusrated_Entrance detailEnterLogic;

	public Image FlyImg;

	public RectTransform illuTrans;

	[Header("合成线pass入口")]
	public IndependentPassMergeIconView IndependentPassIcon;

	[Header("棋盘移动动画相关")]
	public RectTransform LevelNode;

	public RectTransform LevelNodeAnimContent;

	public RectTransform LevelNodeAnim;

	public RectTransform ContentBgAnim;

	public RectTransform GridParentAnim;

	public RectTransform GridBgParentAnim;

	public Animation LevelNodeAnimation;

	public Transform MoveEffectParent;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override IndependentType ViewLevelType => IndependentType.Independent_Mining;

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		isAutoOpen = (bool)viewData;
		if (isAutoOpen)
		{
			AutoPopsup_open();
		}
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		SetTimeDownTextTMP(TimeDownTMP);
		ApplySkin();
		GameLayoutFit();
		InitView();
		InitActivityGift();
		CreateMapBg();
		CreateGameGrid();
		CreateAnimationGridBg();
		AddListener();
		CheckShowFullTip();
		TriggerGuide();
		ObjectManager.GetInstance().independentMiningModel.AddOpenMergeViewTimes();
		ObjectManager.GetInstance().independentMiningModel.PlayerActionAnalytic(isOpen: true);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.OpenViewAudio);
		IndependentDefine.PlayBackgroundAudio(ViewLevelType, IndependentAudioType.Background);
		IsEnter = true;
	}

	public override void OnExit()
	{
		ObjectManager.GetInstance().independentMiningModel.PlayerActionAnalytic(isOpen: false);
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		mDepthAnimation = false;
		if (mDotween != null)
		{
			TweenExtensions.Kill((Tween)(object)mDotween, false);
			mDotween = null;
		}
		TimeManager.GetInstance().ClearSchedule(this);
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RecoveryAnimationGrid();
		RecoveryAnimationGridBg();
		RemoveListener();
		IndependentPassIcon.OnClose();
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.CloseViewAudio);
		if (GameManager.GetInstance().StageScene == SceneType.MainLevel)
		{
			AudioManager.GetInstance().PlayMusic("숟끝掴ㄠ扇;\u0092厑");
		}
		else
		{
			GameManager.GetInstance().PlayRestaurantMusic();
		}
	}

	public override void OnReset(object data)
	{
		CommonMaskViewLogic.Show(0.2f);
		Data = new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		GameLayoutFit();
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.OpenViewAudio);
		IndependentDefine.PlayBackgroundAudio(ViewLevelType, IndependentAudioType.Background);
		IsEnter = true;
	}

	public override void OnHideView()
	{
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			mCurrentSelect.SetSelectState(select: false);
			mCurrentSelect = null;
		}
		RemoveMergeHint();
		TimeManager.GetInstance().ClearSchedule(this);
		IndependentDefine.PlayEffectAudio(ViewLevelType, IndependentAudioType.CloseViewAudio);
		if (GameManager.GetInstance().StageScene == SceneType.MainLevel)
		{
			AudioManager.GetInstance().PlayMusic("숟끝掴ㄠ扇;\u0092厑");
		}
		else
		{
			GameManager.GetInstance().PlayRestaurantMusic();
		}
		mDepthAnimation = false;
		if (mDotween != null)
		{
			TweenExtensions.Kill((Tween)(object)mDotween, false);
			mDotween = null;
		}
	}

	protected override void AddListener()
	{
		MonoSingleton<GuideManager>.Instance.SetIndependentView(this);
		EventManager.GetInstance().AddEventListener<int>(203146, UnlockGoods);
		EventManager.GetInstance().AddEventListener(203143, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener<Action<Transform>>(203145, OnCollectAnim);
		EventManager.GetInstance().AddEventListener<int, long, int>(100015, OnItemChange);
		EventManager.GetInstance().AddEventListener(203147, TriggerGuide);
		EventManager.GetInstance().AddEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().AddEventListener<int>(100102, OnGuideFinish);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int>(203146, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(203143, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(202018, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener<Action<Transform>>(203145, OnCollectAnim);
		EventManager.GetInstance().RemoveEventListener<int, long, int>(100015, OnItemChange);
		EventManager.GetInstance().RemoveEventListener(203147, TriggerGuide);
		EventManager.GetInstance().RemoveEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().RemoveEventListener<int>(100102, OnGuideFinish);
		if ((Object)(object)PassEnterLogic != (Object)null)
		{
			PassEnterLogic.Clear();
		}
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion_Consume();
		MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods_Consume();
	}

	private void ApplySkin()
	{
		IndependentMiningModel.ApplySkinByApplier(((Component)this).GetComponent<SkinApplier>());
	}

	protected override void GameLayoutFit()
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_011a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0144: Unknown result type (might be due to invalid IL or missing references)
		//IL_016e: Unknown result type (might be due to invalid IL or missing references)
		ITreasureCraftingTheme independentMergeTheme = ObjectManager.GetInstance().independentMiningModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null)
		{
			mIndependentColumns = independentMergeTheme.column;
			mIndependentRows = independentMergeTheme.row;
			bool flag = ObjectManager.GetInstance().independentMiningModel.IsOldSkin();
			float num = GridParent.sizeDelta.y;
			float num2 = GridBgParent.sizeDelta.y;
			if (flag)
			{
				ContentBg.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + 28), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight + 28));
				num = mIndependentRows * IndependentMergeViewBaseLogic.GridHeight;
				num2 = mIndependentRows * IndependentMergeViewBaseLogic.GridHeight;
			}
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), num);
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), num2);
			int num3 = (flag ? 28 : 69);
			ContentBgAnim.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth + num3), (float)((mIndependentRows + 8) * IndependentMergeViewBaseLogic.GridHeight + 28));
			GridParentAnim.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
			GridBgParentAnim.sizeDelta = new Vector2((float)(mIndependentColumns * IndependentMergeViewBaseLogic.GridWidth), (float)(mIndependentRows * IndependentMergeViewBaseLogic.GridHeight));
		}
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
		}
		if ((Object)(object)PassEnterLogic != (Object)null)
		{
			PassEnterLogic.Init();
		}
		RefreshTimeDown();
		InitToken();
		((Component)TemporaryLogic).transform.SetSelfActive<Transform>(true);
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
		LevelNode.SetSelfActive<RectTransform>(true);
		LevelNodeAnim.SetSelfActive<RectTransform>(false);
		LevelNodeAnimContent.SetSelfActive<RectTransform>(false);
		detailEnterLogic.Init(resLoader);
		detailEnterLogic.UpdateDetailEntrance();
		IndependentPassIcon.Init(this, ((Component)TemporaryLogic).transform, null, PassTimeDownText);
	}

	private void InitToken()
	{
		if (ObjectManager.GetInstance().independentMiningModel.GetTokenItemVo() != null)
		{
			TokenIcon.sprite = ((BaseViewLogic)this).Load<Sprite>(ObjectManager.GetInstance().independentMiningModel.GetTokenIcon());
			((Graphic)TokenIcon).SetNativeSize();
			((TMP_Text)TokenNum).text = ObjectManager.GetInstance().independentMiningModel.GetTokenNumber().ToString();
		}
	}

	private void OnItemChange(int itemID, long changeNum, int eventFrom)
	{
		int tokenItemID = ObjectManager.GetInstance().independentMiningModel.GetTokenItemID();
		if (itemID == tokenItemID)
		{
			((TMP_Text)TokenNum).text = ObjectManager.GetInstance().independentMiningModel.GetTokenNumber().ToString();
			if (eventFrom == 28)
			{
				ObjectManager.GetInstance().independentMiningModel.TokenRecord += (int)changeNum;
				ObjectManager.GetInstance().independentMiningModel.DropAnalytic((int)changeNum, "숉끏玫攊灜3Ò发");
			}
		}
	}

	private void OnCollectAnim(Action<Transform> action)
	{
		action?.Invoke(((TMP_Text)PassEnterLogic.LevelText).transform);
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		IndependentMiningModel independentMiningModel = ObjectManager.GetInstance().independentMiningModel;
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)TitleTextTMP, independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숞끍沆攟敝&¶厵"));
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)DescTextTMP, independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝晥w4끤g갡㻋"));
		string item = (ObjectManager.GetInstance().independentMiningModel.CurrentDepth * 100).ToString();
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)DepthText, independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숎끍璆栏救\"Ö叕"), new List<string> { item });
		LocalizedLang.SetLocalizationFontSize((TextMeshProUGUI)(object)TimeDownTMP);
		LocalizedLang.SetLocalizationFontSize((TextMeshProUGUI)(object)GiftTimeDownText);
	}

	private void InitActivityGift()
	{
		IndependentMiningModel independentMiningModel = ObjectManager.GetInstance().independentMiningModel;
		int guideID = independentMiningModel.GuideId_2();
		int guideID2 = independentMiningModel.GuideId_3();
		int guideID3 = independentMiningModel.GuideId_4();
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() || !MonoSingleton<GuideManager>.Instance.IsFinishByID(guideID) || !MonoSingleton<GuideManager>.Instance.IsFinishByID(guideID2) || !MonoSingleton<GuideManager>.Instance.IsFinishByID(guideID3))
		{
			OnGiftSwitch();
			return;
		}
		if (ObjectManager.GetInstance().independentMiningModel.GetGiftOpenState)
		{
			ObjectManager.GetInstance().independentMiningModel.CheckCloseGift();
			ObjectManager.GetInstance().independentMiningModel.CheckPopGiftView();
		}
		else
		{
			ObjectManager.GetInstance().independentMiningModel.CheckOpenGift();
		}
		OnGiftSwitch();
		RefreshGiftTimeDown();
	}

	private void OnGiftSwitch()
	{
		GiftButtonGo.SetSelfActive(ObjectManager.GetInstance().independentMiningModel.GetGiftOpenState);
	}

	private void OnGiftBuySuccess()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	protected override void RefreshGiftTimeDown()
	{
		IndependentPassIcon.UpdateView();
		IndependentGIftIconLogic component = GiftButtonGo.GetComponent<IndependentGIftIconLogic>();
		if ((Object)(object)component != (Object)null && GiftButtonGo.activeSelf)
		{
			component.RefreshRedPointState();
		}
		if (!ObjectManager.GetInstance().independentMiningModel.GetGiftOpenState)
		{
			((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			return;
		}
		int giftTimedown = ObjectManager.GetInstance().independentMiningModel.GetGiftTimedown();
		if (giftTimedown > 0)
		{
			((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
			return;
		}
		((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(0);
		ObjectManager.GetInstance().independentMiningModel.CheckCloseGift();
	}

	private void UnlockGoods(int goodsID)
	{
		detailEnterLogic.UpdateDetailEntrance();
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0099: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fc: Unknown result type (might be due to invalid IL or missing references)
		//IL_0106: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || ObjectManager.GetInstance().independentMiningModel.GetGoodsUnlockState(goodsBaseVo) != 0 || !ObjectManager.GetInstance().independentMiningModel.IsContainsSeries(goodsBaseVo.series))
		{
			return;
		}
		FlyImg.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
		((Graphic)FlyImg).SetNativeSize();
		((Component)FlyImg).transform.setScale(0.65f, 0.65f, 0.5f);
		((Component)FlyImg).transform.position = startTrans.position;
		FlyImg.SetSelfActive<Image>(true);
		bool flag = ObjectManager.GetInstance().independentMiningModel.IsOldSkin();
		string aniName = (flag ? "숇끔榰漈䅕&ª厩숃끥溔朄湚;¾厽숆끳犵愇彁!Î反扴e4끟c쌾㫁" : "숇끔榰漈䅕&ª厩숃끥溔朄湚;¾厽숆끳犵愇彁!Î反숵끟榽弶瑕<ª厩带兊");
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOMove(((Component)FlyImg).transform, ((Transform)illuTrans).position, 0.75f, false), (TweenCallback)(() =>
		{
			if ((Object)(object)FlyImg != (Object)null)
			{
				FlyImg.SetSelfActive<Image>(false);
				Animation component = ((Component)illuTrans).GetComponent<Animation>();
				if (component != null)
				{
					component.Play(aniName);
				}
				AudioManager.Instance.PlayEffect("숵끏碽弶慇4æ句숈끏徻按托7\u0082厁숏끖徵椐潗&\u0082厁뗖\u008b赴");
			}
		}));
	}

	public override void CheckUnlock(IIndependentGoodsBaseVo vo)
	{
		if (vo != null && vo.series == 1100 && ObjectManager.GetInstance().independentMiningModel.GetGoodsUnlockState(vo) == 0)
		{
			ObjectManager.GetInstance().independentMiningModel.RefreshIllustratedUnlockState(vo.series, vo.goodsID, 1);
			UnlockGoods(0);
		}
	}

	public override void DeleteGridGoods(IndependentGrid targetGrid)
	{
		if (!((Object)(object)targetGrid == (Object)null))
		{
			CheckMoveMapDepth();
		}
	}

	private void CheckMoveMapDepth()
	{
		//IL_00c4: Unknown result type (might be due to invalid IL or missing references)
		//IL_008e: Unknown result type (might be due to invalid IL or missing references)
		ITreasureCraftingTheme independentMergeTheme = ObjectManager.GetInstance().independentMiningModel.GetIndependentMergeTheme();
		if (independentMergeTheme == null || ObjectManager.GetInstance().independentMiningModel.IsAchieveMaxDepth)
		{
			return;
		}
		int num = independentMergeTheme.row - 2;
		int topSandsGridID = ObjectManager.GetInstance().independentMiningModel.GetTopSandsGridID();
		if (topSandsGridID == -1)
		{
			return;
		}
		if (topSandsGridID > 0)
		{
			int num2 = topSandsGridID / 10;
			if (num2 > num)
			{
				int moveDepth = 2;
				if (num2 == num + 2)
				{
					moveDepth = 3;
				}
				Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(ViewLevelType);
				mAnimationMapDic = new Dictionary<int, IndependentGameGoodsVo>(independentMap);
				int depth = ObjectManager.GetInstance().independentMiningModel.MoveMapDepth(moveDepth);
				PlayMapMoveAnimation(depth);
			}
		}
		else
		{
			Dictionary<int, IndependentGameGoodsVo> independentMap2 = IndependentDefine.GetIndependentMap(ViewLevelType);
			mAnimationMapDic = new Dictionary<int, IndependentGameGoodsVo>(independentMap2);
			int depth2 = ObjectManager.GetInstance().independentMiningModel.MoveMapDepth(4);
			PlayMapMoveAnimation(depth2);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayMapMoveAnimation_003Ed__37))]
	private UniTask PlayMapMoveAnimation(int depth)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayMapMoveAnimation_003Ed__37 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.depth = depth;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayMapMoveAnimation_003Ed__37>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void PlayVibrateDevice(VibrateManager.VibrateType intense, int depth)
	{
		int num = (int)((float)depth / 0.1f);
		for (int i = 0; i < num; i++)
		{
			float duration = 0.1f * (float)i;
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				EventManager.GetInstance().DispatchEvent(202123, intense);
			}, duration, 1);
		}
	}

	private void CreateAnimationGrid(Dictionary<int, IndependentGameGoodsVo> tempMapDic, int depth, bool playCollectAnim = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_013e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0154: Unknown result type (might be due to invalid IL or missing references)
		IndependentGrid independentGrid = null;
		Vector2 zero = Vector2.zero;
		int num = 0;
		float num2 = 0f;
		if (depth >= 2)
		{
			num2 = 1f;
		}
		mAnimationGridGo = new List<IndependentGrid>();
		for (int i = 1; i <= Rows + depth; i++)
		{
			bool flag = false;
			for (int j = 1; j <= Columns; j++)
			{
				int num3 = i * 10 + j;
				independentGrid = Singleton<ResCacheManager>.Instance.GetRes<IndependentGrid>();
				if ((Object)(object)independentGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔撽敋楽<\u0096厕숎끟璷䜏灑<Ö叕刕枟\ud9daĕ");
					continue;
				}
				((Object)independentGrid).name = "參橲ā讑酟" + num3;
				((Component)independentGrid).transform.SetParent((Transform)(object)GridParentAnim);
				independentGrid.LocalIdentity<IndependentGrid>();
				zero = new Vector2((float)((j - 1) * IndependentMergeViewBaseLogic.GridWidth), (float)(-(i - 1) * IndependentMergeViewBaseLogic.GridHeight));
				((Component)independentGrid).GetComponent<RectTransform>().anchoredPosition = zero;
				independentGrid.SetGridType(ViewLevelType);
				independentGrid.SetGridCanSave(canSave: false);
				IndGoodsBase goodsBase = null;
				IndependentGameGoodsVo independentGameGoodsVo = null;
				if (tempMapDic != null && tempMapDic.ContainsKey(num3))
				{
					independentGameGoodsVo = tempMapDic[num3];
					if (independentGameGoodsVo != null)
					{
						goodsBase = IndependentDefine.GetIndGameBaseById(ViewLevelType, independentGameGoodsVo.goodsID, independentGrid, independentGameGoodsVo);
					}
				}
				independentGrid.Init(num3, goodsBase, this, num, null);
				mAnimationGridGo.Add(independentGrid);
				if (playCollectAnim && i <= depth)
				{
					float num4 = num2 * (float)(i - 1);
					independentGrid.CollectGoodsToTempary(num4);
					if (!flag)
					{
						flag = true;
						PlayGoodsToTemparyAudio(num4 + 0.4f);
					}
				}
				num++;
			}
		}
	}

	[AsyncStateMachine(typeof(_003CPlayGoodsToTemparyAudio_003Ed__40))]
	private UniTask PlayGoodsToTemparyAudio(float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayGoodsToTemparyAudio_003Ed__40 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayGoodsToTemparyAudio_003Ed__40>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public override void GoodsToTempary(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_002b: Expected Obj, but got Unknown
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f8: Expected Obj, but got Unknown
		//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Expected Obj, but got Unknown
		if ((Object)(object)TemporaryLogic == (Object)null || goodsBaseVo == null)
		{
			return;
		}
		GameObject flyTransform = new GameObject();
		Image val = flyTransform.AddComponent<Image>();
		val.sprite = ((BaseViewLogic)this).Load<Sprite>(goodsBaseVo.GetIcon(ViewLevelType));
		((Graphic)val).SetNativeSize();
		val.LocalIdentity<Image>();
		flyTransform.transform.SetParent(((Component)this).transform);
		flyTransform.transform.localScale = new Vector3(0.565f, 0.565f, 1f);
		flyTransform.transform.position = startTrans.position;
		Tweener val2 = TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(flyTransform.transform, ((Component)TemporaryLogic.ItemIcon).transform.position, 0.4f, false), (Ease)7), true);
		((Tween)val2).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val2).onComplete, (Delegate?)(TweenCallback)(() =>
		{
			if ((Object)(object)TemparyFankuiPrefab == (Object)null)
			{
				TemparyFankuiPrefab = ((BaseViewLogic)this).Load<GameObject>("숏끜徿猐敗&\u0082厁숀끕暬愁桝\r\u009e厝숃끑斬眄湫<\u009a厙");
			}
			if ((Object)(object)TemparyFankuiPrefab != (Object)null)
			{
				GameObject val3 = Object.Instantiate<GameObject>(TemparyFankuiPrefab);
				if ((Object)(object)val3 != (Object)null)
				{
					val3.transform.LocalIdentity<Transform>();
					val3.transform.SetParent(TemporaryLogic.IconParentGo.transform, false);
				}
				flyTransform.DestroySelf<GameObject>();
			}
		}));
	}

	private void CreateAnimationGridBg(int offsetBgIndex = 0)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		IndependentGridBg independentGridBg = null;
		Vector2 zero = Vector2.zero;
		mAnimationGridBgGo = new List<IndependentGridBg>();
		for (int i = 1; i <= Rows + 4; i++)
		{
			for (int j = 1; j <= Columns; j++)
			{
				int gridID = i * 10 + j;
				independentGridBg = Singleton<ResCacheManager>.Instance.GetRes<IndependentGridBg>();
				if ((Object)(object)independentGridBg == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔撽敋楽<\u0096厕숎끟璷䜏灑<Ö叕녲呩ᄦ\0郑\ud925");
					continue;
				}
				((Object)independentGridBg).name = "숏끔溽搐䥄7¾厽숵끔榭搶敳 ª厩刘樳\ud9f7ū" + gridID;
				((Component)independentGridBg).transform.SetParent((Transform)(object)GridBgParentAnim);
				independentGridBg.LocalIdentity<IndependentGridBg>();
				independentGridBg.Init(this, ViewLevelType);
				independentGridBg.ShowGridBg(gridID, offsetBgIndex);
				zero = new Vector2((float)((j - 1) * IndependentMergeViewBaseLogic.GridWidth), (float)(-(i - 1) * IndependentMergeViewBaseLogic.GridHeight));
				((Component)independentGridBg).GetComponent<RectTransform>().anchoredPosition = zero;
				mAnimationGridBgGo.Add(independentGridBg);
			}
		}
	}

	public void RecoveryAnimationGrid()
	{
		if (mAnimationGridGo == null)
		{
			return;
		}
		for (int i = 0; i < mAnimationGridGo.Count; i++)
		{
			if ((Object)(object)mAnimationGridGo[i] != (Object)null)
			{
				mAnimationGridGo[i].Recovery();
			}
		}
		mAnimationGridGo.Clear();
	}

	public void RecoveryAnimationGridBg()
	{
		if (mAnimationGridBgGo == null)
		{
			return;
		}
		for (int i = 0; i < mAnimationGridBgGo.Count; i++)
		{
			if ((Object)(object)mAnimationGridBgGo[i] != (Object)null)
			{
				mAnimationGridBgGo[i].Recovery();
			}
		}
		mAnimationGridBgGo.Clear();
	}

	private void PlayDepthChangeAnimation(int currentValue, int endValue, float duration)
	{
		//IL_0050: Unknown result type (might be due to invalid IL or missing references)
		//IL_005a: Expected Obj, but got Unknown
		if (mDotween != null)
		{
			TweenExtensions.Kill((Tween)(object)mDotween, false);
			mDotween = null;
		}
		mCurrentValue = currentValue;
		mDepthAnimation = true;
		mDotween = TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.OnComplete<Tweener>(DOTween.To((DOGetter<int>)(() => mCurrentValue), (DOSetter<int>)((int a) =>
		{
			mCurrentValue = a;
		}), endValue, duration), (TweenCallback)(() =>
		{
			mDepthAnimation = false;
			if (mDotween != null)
			{
				TweenExtensions.Kill((Tween)(object)mDotween, false);
				mDotween = null;
			}
			string item = (ObjectManager.GetInstance().independentMiningModel.CurrentDepth * 100).ToString();
			LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)DepthText, ObjectManager.GetInstance().independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숎끍璆栏救\"Ö叕"), new List<string> { item });
		})));
	}

	private void LateUpdate()
	{
		if (mDepthAnimation)
		{
			string item = string.Format("ꋞú赴", mCurrentValue);
			LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)DepthText, ObjectManager.GetInstance().independentMiningModel.GetUILanguageKey("숍끟皫椎浑\rÞ叝숎끍璆栏救\"Ö叕"), new List<string> { item });
		}
	}

	public override void CheckCanUnlockAroundGrid(IndependentGrid targetGrid)
	{
		if (!((Object)(object)targetGrid == (Object)null) && targetGrid.GetGoodsBaseVo() != null && (targetGrid.GetGoodsBaseVo().type == 4 || targetGrid.GetGoodsBaseVo().type == 5 || targetGrid.GetGoodsBaseVo().type == 7 || targetGrid.GetGoodsBaseVo().type == 9))
		{
			UnlockAroundGrid(targetGrid);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayExpAnimation_003Ed__52))]
	public override UniTask PlayExpAnimation(int changeExp, float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayExpAnimation_003Ed__52 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayExpAnimation_003Ed__52>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public override void OnOpenHelpView()
	{
		CommonMaskViewLogic.Show(0.1f);
		ObjectManager.GetInstance().independentMiningModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().independentMiningModel.OpenActivityGiftView();
	}

	public override void OnOpenGoodInfoView()
	{
		if (CheckMapIsFull())
		{
			if ((Object)(object)CurrentSelectGrid != (Object)null && CheckGoodsCanDelete(CurrentSelectGrid.GetGameGoodsVo()))
			{
				UpdateSelectGoodsInfo();
				if (!isShowInfo)
				{
					PlayGoodsInfoAndHidePoolAni();
				}
			}
			else if (isShowInfo)
			{
				PlayGoodsInfoAndHidePoolAni(isShow: false);
			}
		}
		else if (isShowInfo)
		{
			PlayGoodsInfoAndHidePoolAni(isShow: false);
		}
	}

	public void UpdateSelectGoodsInfo()
	{
		if ((Object)(object)goodsLogic != (Object)null)
		{
			goodsLogic.SetParentLogic(this);
			if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				goodsLogic.UpdateInfo(CurrentSelectGrid, CurrentSelectGrid.GetGameGoodsVo(), CurrentSelectGrid.GetGoodsBaseVo());
			}
			else
			{
				goodsLogic.UpdateInfo(null, null, null);
			}
		}
	}

	public override void PlayGoodsInfoAndHidePoolAni(bool isShow = true)
	{
		//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b2: Expected Obj, but got Unknown
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_005f: Expected Obj, but got Unknown
		CommonMaskViewLogic.Show(0.3f);
		TweenCallback val3 = default;
		if (isShow)
		{
			isShowInfo = true;
			CanvasGroup canvasGroup_goods = ((Component)((Component)goodsLogic).transform).GetComponent<CanvasGroup>();
			canvasGroup_goods.alpha = 0f;
			DOVirtual.DelayedCall(0.06f, (TweenCallback)(() =>
			{
				//IL_0033: Unknown result type (might be due to invalid IL or missing references)
				//IL_0038: Unknown result type (might be due to invalid IL or missing references)
				//IL_003a: Expected Obj, but got Unknown
				//IL_003f: Expected Obj, but got Unknown
				DOTween.Sequence();
				Tweener val = TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup_goods, 1f, 0.03f), (Ease)1);
				TweenCallback val2 = val3;
				if (val2 == null)
				{
					TweenCallback val4 = () =>
					{
						canvasGroup_goods.alpha = 1f;
						((Component)goodsLogic).transform.SetSelfActive<Transform>(true);
					};
					TweenCallback val5 = val4;
					val3 = val4;
					val2 = val5;
				}
				TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
			}), true);
			return;
		}
		isShowInfo = false;
		CanvasGroup canvasGroup_pool = ((Component)((Component)goodsLogic).transform).GetComponent<CanvasGroup>();
		canvasGroup_pool.alpha = 1f;
		DOVirtual.DelayedCall(0.03f, (TweenCallback)(() =>
		{
			//IL_002d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0032: Unknown result type (might be due to invalid IL or missing references)
			//IL_0034: Expected Obj, but got Unknown
			//IL_0039: Expected Obj, but got Unknown
			Tweener val = TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup_pool, 0f, 0.03f), (Ease)1);
			TweenCallback val2 = val3;
			if (val2 == null)
			{
				TweenCallback val4 = () =>
				{
					canvasGroup_pool.alpha = 0f;
					((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
		}), true);
	}

	private void CheckShowFullTip()
	{
		if (CheckMapIsFull())
		{
			ShowMapEnoughTip(null);
			ObjectManager.GetInstance().independentMiningModel.MapErrorAnalytic(isFull: true);
		}
		else
		{
			ObjectManager.GetInstance().independentMiningModel.MapErrorAnalytic(isFull: false);
		}
	}

	private void TriggerGuide()
	{
		if (ObjectManager.GetInstance().independentMiningModel.IsOpeningGiftView() || (Object)(object)ViewManager.GetInstance().GetView("숏끔溽搐䥄7¾厽숵끔溭椶敹;¾厽숭끝璆嘮湝4Ö叕녩䍥\u0c00\0郢\ud925") != (Object)null || MonoSingleton<GuideManager>.Instance.IsInGuide() || !MonoSingleton<GuideManager>.Instance.IsFinishByID(ObjectManager.GetInstance().independentMiningModel.GuideId_1()))
		{
			return;
		}
		int num = ObjectManager.GetInstance().independentMiningModel.GuideId_2();
		if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
		{
			return;
		}
		IndependentGrid independentGrid = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && item.Value.GetGoodsBaseVo().type == 8)
			{
				independentGrid = item.Value;
				break;
			}
		}
		if ((Object)(object)independentGrid != (Object)null)
		{
			((Object)((Component)independentGrid).gameObject).name = "숏끔溽搐䥄7¾厽숧끔榭渨敝<ª厩숃끽䦬琄材7*匩欷㹵";
			EventManager.GetInstance().DispatchEvent(100133, num, 0.1f);
		}
	}

	private void OnGuideStart(int guideId)
	{
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		int num = ObjectManager.GetInstance().independentMiningModel.GuideId_3();
		int num2 = ObjectManager.GetInstance().independentMiningModel.GuideId_4();
		if (guideId != num && guideId != num2)
		{
			return;
		}
		if (guideId == num)
		{
			IIndependentGoodsBaseVo independentGoodsBaseVo = null;
			IndependentGameGoodsVo independentGameGoodsVo = null;
			{
				foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
				{
					if ((Object)(object)item.Value == (Object)null || ((Object)item.Value).name != "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕刖棫\ud9e1ř")
					{
						continue;
					}
					independentGoodsBaseVo = item.Value.GetGoodsBaseVo();
					independentGameGoodsVo = item.Value.GetGameGoodsVo();
					if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState) && independentGoodsBaseVo.type == 2 && IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, independentGoodsBaseVo.series, independentGoodsBaseVo.level + 1) == null)
					{
						IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo.goodsID);
						if (collectConfigById != null && collectConfigById.itemId == 1061)
						{
							item.Value.SelectCurrentGrid();
							break;
						}
					}
				}
				return;
			}
		}
		if (guideId != num2)
		{
			return;
		}
		IIndependentGoodsBaseVo independentGoodsBaseVo2 = null;
		IndependentGameGoodsVo independentGameGoodsVo2 = null;
		foreach (KeyValuePair<int, IndependentGrid> item2 in mGridObjectDic)
		{
			if (!((Object)(object)item2.Value == (Object)null) && !(((Object)item2.Value).name != "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎澼砈䥫\u0010Â叁"))
			{
				independentGoodsBaseVo2 = item2.Value.GetGoodsBaseVo();
				independentGameGoodsVo2 = item2.Value.GetGameGoodsVo();
				if (independentGoodsBaseVo2 != null && independentGameGoodsVo2 != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo2.GoodsState) && independentGoodsBaseVo2.type == 4)
				{
					item2.Value.SelectCurrentGrid();
					break;
				}
			}
		}
	}

	private void OnGuideFinish(int guideId)
	{
		if (guideId == ObjectManager.GetInstance().independentMiningModel.GuideId_1())
		{
			int guideID = ObjectManager.GetInstance().independentMiningModel.GuideId_2();
			if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(guideID) && !((Object)(object)ViewManager.GetInstance().GetFristViewLogic<Independent_Mining_HelpViewLogic>() != (Object)null))
			{
				TriggerGuide();
			}
		}
	}

	public override void ShowGuideWeak()
	{
		var (independentGrid, independentGrid2) = GetGuideWeakAutoConversion();
		if ((Object)(object)independentGrid != (Object)null && (Object)(object)independentGrid2 != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion(independentGrid.GameItemParent, independentGrid2.GameItemParent, DragItemParent);
		}
	}

	public (IndependentGrid, IndependentGrid) GetGuideWeakAutoConversion()
	{
		List<IndependentGrid> list = new List<IndependentGrid>();
		List<IndependentGrid> list2 = new List<IndependentGrid>();
		List<IndependentGrid> list3 = mGridObjectDic.Values.ToList();
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		for (int num = list3.Count - 1; num >= 0; num--)
		{
			IndependentGrid independentGrid = list3[num];
			if (!((Object)(object)independentGrid == (Object)null) && independentGrid.GetGoodsBaseVo() != null)
			{
				independentGoodsBaseVo = independentGrid.GetGoodsBaseVo();
				independentGameGoodsVo = independentGrid.GetGameGoodsVo();
				if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState))
				{
					if (independentGoodsBaseVo.type == 6)
					{
						list.Add(list3[num]);
					}
					else if (independentGoodsBaseVo.type == 5 || independentGoodsBaseVo.type == 7)
					{
						list2.Add(list3[num]);
					}
				}
			}
		}
		if (list.Count > 0 && list2.Count > 0)
		{
			for (int i = 0; i < list2.Count; i++)
			{
				for (int j = 0; j < list.Count; j++)
				{
					if (CanPutinMaterial(list[j], list2[i]))
					{
						return (list[j], list2[i]);
					}
				}
			}
		}
		return (null, null);
	}

	public override bool ShowPriorityGuideWeak()
	{
		IndependentGrid guideWeakMaxGoods = GetGuideWeakMaxGoods();
		if ((Object)(object)guideWeakMaxGoods != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods(guideWeakMaxGoods.GameItemParent, DragItemParent);
			return true;
		}
		return false;
	}

	public IndependentGrid GetGuideWeakMaxGoods()
	{
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if ((Object)(object)item.Value == (Object)null)
			{
				continue;
			}
			independentGoodsBaseVo = item.Value.GetGoodsBaseVo();
			independentGameGoodsVo = item.Value.GetGameGoodsVo();
			if (independentGoodsBaseVo != null && independentGameGoodsVo != null && !IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState) && independentGoodsBaseVo.type == 2 && IndependentDefine.GetGoodsConfigBySeriesAndLevel(ViewLevelType, independentGoodsBaseVo.series, independentGoodsBaseVo.level + 1) == null)
			{
				IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo.goodsID);
				if (collectConfigById != null && collectConfigById.itemId == 1061)
				{
					return item.Value;
				}
			}
		}
		return null;
	}

	public override void ShowSpecialHintAnim()
	{
		string text = IndependentMiningResName.Mining_Shovel_Idle.ToString();
		string text2 = ObjectManager.GetInstance().independentMiningModel.GetUIResourceName(text);
		if (text2.IsNullOrEmpty() || text2 == text)
		{
			text2 = "숏끔溽搐䥄7¾厽숵끔溭椶敹;¾厽숉끝溆稊湜3¾厽녩奟㜼\0逕\ud96e";
		}
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && IIndependentGoodsBaseVo.IsBatchProduce(item.Value.GetGoodsBaseVo().type))
			{
				item.Value.ShowSpecialHint(text2);
			}
		}
	}

	public override void HideSpecialHintAnim()
	{
		foreach (KeyValuePair<int, IndependentGrid> item in mGridObjectDic)
		{
			if (!((Object)(object)item.Value == (Object)null) && item.Value.GetGoodsBaseVo() != null && IIndependentGoodsBaseVo.IsBatchProduce(item.Value.GetGoodsBaseVo().type))
			{
				item.Value.HideSpecialHint();
			}
		}
	}

	public void OnClickMainLineDetail()
	{
		ObjectManager.GetInstance().independentMiningModel.OpenMainLineDetailView();
	}

	public void OnClickCloseBtn()
	{
		CloseViewAin();
		if (IndependentGrid.PlayCardAnim > 0)
		{
			IndependentGrid.PlayCardAnim = 0;
			EventManager.GetInstance().DispatchEvent(100130, arg: false);
		}
	}

	private GameObject CreateGameObject(string resName, Transform parent)
	{
		GameObject val = resLoader.LoadSync<GameObject>(resName);
		if ((Object)(object)val == (Object)null)
		{
			return null;
		}
		GameObject val2 = Object.Instantiate<GameObject>(val);
		val2.transform.SetParent(parent);
		val2.transform.LocalIdentity<Transform>();
		val2.SetSelfActive(active: true);
		return val2;
	}
}
