using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using TLF;
using TMPro;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("Independent_Farm_MergeView_monchi")]
public class Independent_Farm_MergeView_monchi : IndependentMergeViewBaseLogic
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayMapMoveAnimation_003Ed__52 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public int depth;

		public Independent_Farm_MergeView_monchi _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00a4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
			//IL_02bf: Unknown result type (might be due to invalid IL or missing references)
			//IL_02c4: Unknown result type (might be due to invalid IL or missing references)
			//IL_02cb: Unknown result type (might be due to invalid IL or missing references)
			//IL_0068: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0071: Unknown result type (might be due to invalid IL or missing references)
			//IL_0076: Unknown result type (might be due to invalid IL or missing references)
			//IL_008a: Unknown result type (might be due to invalid IL or missing references)
			//IL_008b: Unknown result type (might be due to invalid IL or missing references)
			//IL_021c: Unknown result type (might be due to invalid IL or missing references)
			//IL_025f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0269: Expected Obj, but got Unknown
			//IL_0283: Unknown result type (might be due to invalid IL or missing references)
			//IL_0288: Unknown result type (might be due to invalid IL or missing references)
			//IL_028c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0291: Unknown result type (might be due to invalid IL or missing references)
			//IL_02a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_02a6: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			Independent_Farm_MergeView_monchi CS_0024_003C_003E8__locals43 = _003C_003E4__this;
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
						goto IL_02da;
					}
					CommonMaskViewLogic.Show((float)depth + 1f);
					CS_0024_003C_003E8__locals43.CanShowHint = false;
					CS_0024_003C_003E8__locals43.RemoveMergeHint();
					MonoSingleton<GuideWeakManager>.Instance.ShowIndependentAutoConversion_Consume();
					MonoSingleton<GuideWeakManager>.Instance.ShowIndependentMaxGoods_Consume();
					val2 = UniTask.Delay(TimeSpan.FromSeconds(0.800000011920929), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMapMoveAnimation_003Ed__52>(ref val, ref this);
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
				CS_0024_003C_003E8__locals43.ResetGameMap();
				CS_0024_003C_003E8__locals43.UpdateLockGrid();
				if (depth > 0 && CS_0024_003C_003E8__locals43.mAnimationMapDic != null)
				{
					CS_0024_003C_003E8__locals43.LevelNode.SetSelfActive<RectTransform>(false);
					CS_0024_003C_003E8__locals43.LevelNodeAnim.SetSelfActive<RectTransform>(true);
					CS_0024_003C_003E8__locals43.LevelNodeAnimContent.SetSelfActive<RectTransform>(true);
					CS_0024_003C_003E8__locals43.RecoveryAnimationGrid();
					Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(CS_0024_003C_003E8__locals43.ViewLevelType);
					for (int i = CS_0024_003C_003E8__locals43.Rows - depth + 1; i <= CS_0024_003C_003E8__locals43.Rows; i++)
					{
						for (int j = 1; j <= CS_0024_003C_003E8__locals43.Columns; j++)
						{
							int key = i * 10 + j;
							int key2 = (i + depth) * 10 + j;
							if (independentMap.TryGetValue(key, out var value))
							{
								CS_0024_003C_003E8__locals43.mAnimationMapDic[key2] = value;
							}
						}
					}
					CS_0024_003C_003E8__locals43.CreateAnimationGrid(CS_0024_003C_003E8__locals43.mAnimationMapDic, depth, playCollectAnim: true);
					if ((Object)(object)CS_0024_003C_003E8__locals43.LevelNodeAnimation != (Object)null)
					{
						CS_0024_003C_003E8__locals43.LevelNodeAnimation.Stop();
						CS_0024_003C_003E8__locals43.LevelNodeAnimation.Play("숍끟榫攎䵑\u0004ª厩숃끥溨弄睄3¾厽룲\u0083赴");
					}
					CS_0024_003C_003E8__locals43.CreateGameObject(IndependentDefine.GetDiggingDepthName(CS_0024_003C_003E8__locals43.ViewLevelType, depth), CS_0024_003C_003E8__locals43.MoveEffectParent);
					string audioPath = "숵끏碽弶慇4æ句숋끈澼氌慫 Â叁숏끥熴椐汚5Ê叉";
					AudioManager.Instance.PlayEffect(audioPath);
					CS_0024_003C_003E8__locals43.PlayVibrateDevice(VibrateManager.VibrateType.Intense, depth);
					float num2 = ((Transform)CS_0024_003C_003E8__locals43.LevelNodeAnim).localPosition.y - (float)(depth * CS_0024_003C_003E8__locals43.GameGridHeight);
					TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMoveY((Transform)(object)CS_0024_003C_003E8__locals43.LevelNodeAnim, num2, (float)depth, false), (Ease)1), true), (TweenCallback)(() =>
					{
						//IL_0013: Unknown result type (might be due to invalid IL or missing references)
						ShortcutExtensions.DOKill((Component)(object)CS_0024_003C_003E8__locals43.LevelNodeAnim, false);
						((Transform)CS_0024_003C_003E8__locals43.LevelNodeAnim).localPosition = Vector3.zero;
						CS_0024_003C_003E8__locals43.LevelNodeAnim.SetSelfActive<RectTransform>(false);
						CS_0024_003C_003E8__locals43.LevelNodeAnimContent.SetSelfActive<RectTransform>(false);
						if ((Object)(object)CS_0024_003C_003E8__locals43.TemporaryLogic != (Object)null)
						{
							CS_0024_003C_003E8__locals43.TemporaryLogic.UpdateTempprary();
						}
						CS_0024_003C_003E8__locals43.RecoveryAnimationGrid();
						CS_0024_003C_003E8__locals43.LevelNode.SetSelfActive<RectTransform>(true);
						CS_0024_003C_003E8__locals43.CanShowHint = true;
					}));
					val2 = UniTask.Delay(TimeSpan.FromSeconds(0.25), false, (PlayerLoopTiming)4, default(CancellationToken));
					val = val2.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 1);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMapMoveAnimation_003Ed__52>(ref val, ref this);
						return;
					}
					goto IL_02da;
				}
				CS_0024_003C_003E8__locals43.LevelNode.SetSelfActive<RectTransform>(true);
				CS_0024_003C_003E8__locals43.LevelNodeAnim.SetSelfActive<RectTransform>(false);
				CS_0024_003C_003E8__locals43.LevelNodeAnimContent.SetSelfActive<RectTransform>(false);
				if ((Object)(object)CS_0024_003C_003E8__locals43.TemporaryLogic != (Object)null)
				{
					CS_0024_003C_003E8__locals43.TemporaryLogic.UpdateTempprary();
				}
				CS_0024_003C_003E8__locals43.CanShowHint = true;
				goto end_IL_000e;
				IL_02da:
				val.GetResult();
				if ((Object)(object)CS_0024_003C_003E8__locals43.TemporaryLogic != (Object)null)
				{
					CS_0024_003C_003E8__locals43.TemporaryLogic.UpdateTempprary();
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CUnlockGoodsAnimation_003Ed__47 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public int goodsID;

		public float delay;

		public Independent_Farm_MergeView_monchi _003C_003E4__this;

		private IIndependentGoodsBaseVo _003CgoodsBaseVo_003E5__2;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0099: Unknown result type (might be due to invalid IL or missing references)
			//IL_009e: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_0060: Unknown result type (might be due to invalid IL or missing references)
			//IL_0065: Unknown result type (might be due to invalid IL or missing references)
			//IL_0069: Unknown result type (might be due to invalid IL or missing references)
			//IL_006e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0082: Unknown result type (might be due to invalid IL or missing references)
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			Independent_Farm_MergeView_monchi independent_Farm_MergeView_monchi = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_00b4;
				}
				_003CgoodsBaseVo_003E5__2 = ObjectManager.GetInstance().independentFarmModel.GetGoodsConfigById(goodsID);
				if (_003CgoodsBaseVo_003E5__2 != null)
				{
					if (delay > 0f)
					{
						UniTask val2 = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
						val = val2.GetAwaiter();
						if (!val.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CUnlockGoodsAnimation_003Ed__47>(ref val, ref this);
							return;
						}
						goto IL_00b4;
					}
					goto IL_00bb;
				}
				goto end_IL_000e;
				IL_00bb:
				independent_Farm_MergeView_monchi.UpdateUnlockProgress(_003CgoodsBaseVo_003E5__2);
				goto end_IL_000e;
				IL_00b4:
				val.GetResult();
				goto IL_00bb;
				end_IL_000e:;
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003CgoodsBaseVo_003E5__2 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003CgoodsBaseVo_003E5__2 = null;
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

	public static int FarmColumns = 7;

	public static int FarmRows = 7;

	private int mIndependentColumns = 7;

	private int mIndependentRows = 7;

	private List<IndependentGrid> mAnimationGridGo;

	private List<IndependentGridBg> mAnimationGridBgGo;

	private bool isShowInfo;

	private bool isAutoOpen;

	private Dictionary<int, IndependentGameGoodsVo> mAnimationMapDic;

	private GameObject TemparyFankuiPrefab;

	private Independent_Farm_Unlock_monchi mUnlockGo;

	public RTLTextMeshPro TitleTextTMP;

	public RTLTextMeshPro DescTextTMP;

	public RTLTextMeshPro TimeDownTextTMP;

	public RTLTextMeshPro GiftTimeDownText;

	public GameObject GiftButtonGo;

	public Image TokenIcon;

	public RTLTextMeshPro TokenNum;

	[Header("道具详情逻辑")]
	public IndependentGoodsInfoViewLogic goodsLogic;

	[Header("图鉴入口")]
	public RTLTextMeshPro illusratedProcess;

	public RectTransform illusratedPoint;

	public RectTransform illuTrans;

	[Header("收集进度")]
	public Independent_Farm_ProgressViewLogic IndependentProgress;

	[Header("棋盘移动动画相关")]
	public RectTransform LevelNode;

	public RectTransform LevelNodeAnimContent;

	public RectTransform LevelNodeAnim;

	public RectTransform ContentBgAnim;

	public RectTransform GridParentAnim;

	public RectTransform GridBgParentAnim;

	public Animation LevelNodeAnimation;

	public Transform MoveEffectParent;

	public GameObject FarmUnlockPrefab;

	[Header("主线生成器")]
	public Independent_Farm_main_gen_monchi MainGen;

	[Header("支线生成器")]
	public Independent_Farm_other_gen_monchi OtherGen;

	[Header("倍率动效")]
	public GameObject node_multi_effect_2;

	public GameObject node_multi_effect_4;

	[Header("通行证图标逻辑")]
	public IndependentPassMergeIconView IndependentPassIcon;

	[Header("icon组")]
	public IndependentIconGroup iconGroup;

	public override int Columns => mIndependentColumns;

	public override int Rows => mIndependentRows;

	public override int GameGridWidth => 82;

	public override int GameGridHeight => 82;

	public override IndependentType ViewLevelType => IndependentType.Independent_Farm;

	public override bool IsOverturn => true;

	public override void OnEnter()
	{
		Data = (viewData as IndependentMergeViewBaseData) ?? new IndependentMergeViewBaseData();
		GameManager.GetInstance().SetMultiTouchEnabled(enable: false);
		GameLayoutFit();
		InitView();
		CreateMapBg();
		CreateGameGrid();
		CreateAnimationGridBg();
		UpdateLockGrid();
		CheckMoveMapDepth();
		AddListener();
		CheckShowFullTip();
		if (!TriggerGuide())
		{
			InitActivityGift();
		}
		TriggerMultiGuide();
		ObjectManager.GetInstance().independentFarmModel.AddOpenMergeViewTimes();
		ObjectManager.GetInstance().independentFarmModel.PlayerActionAnalytic(isOpen: true);
		IsEnter = true;
		RefreshGiftTimeDown();
	}

	public override void OnExit()
	{
		ObjectManager.GetInstance().independentFarmModel.PlayerActionAnalytic(isOpen: false);
		GameManager.GetInstance().SetMultiTouchEnabled(enable: true);
		mCurrentSelect = null;
		TimeManager.GetInstance().ClearSchedule(this);
		RemoveMergeHint();
		RecoveryGrid();
		RecoveryGridBg();
		RecoveryAnimationGrid();
		RecoveryAnimationGridBg();
		RemoveListener();
		EventManager.GetInstance().DispatchEvent(203171);
		if ((Object)(object)IndependentPassIcon != (Object)null)
		{
			IndependentPassIcon.OnClose();
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
		EventManager.GetInstance().DispatchEvent(203171);
	}

	protected override void AddListener()
	{
		MonoSingleton<GuideManager>.Instance.SetIndependentView(this);
		EventManager.GetInstance().AddEventListener<int, Transform>(203165, OnAddFarmGoods);
		EventManager.GetInstance().AddEventListener<int, IndependentGrid, float>(203162, UnlockGoods);
		EventManager.GetInstance().AddEventListener(203163, OnGiftSwitch);
		EventManager.GetInstance().AddEventListener(203164, OnGiftBuySuccess);
		EventManager.GetInstance().AddEventListener<int, long, int>(100015, OnItemChange);
		EventManager.GetInstance().AddEventListener(203158, UpdateIllusrated);
		EventManager.GetInstance().AddEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().AddEventListener<int>(100102, OnGuideFinish);
		EventManager.GetInstance().AddEventListener(203166, OnUpdateMap);
		EventManager.GetInstance().AddEventListener(203167, OnActiveOtherGen);
		EventManager.GetInstance().AddEventListener<int>(203168, OnActiveMainGen);
		EventManager.GetInstance().AddEventListener<int, Vector3>(203169, ToMainGenerator);
		EventManager.GetInstance().AddEventListener<int, Vector3>(203170, ToOtherGenerator);
		EventManager.GetInstance().AddEventListener(203119, OnClaimPassRewardSuccess);
		EventManager.GetInstance().AddEventListener(203116, SetPassEntrance);
	}

	protected override void RemoveListener()
	{
		EventManager.GetInstance().RemoveEventListener<int, Transform>(203165, OnAddFarmGoods);
		EventManager.GetInstance().RemoveEventListener<int, IndependentGrid, float>(203162, UnlockGoods);
		EventManager.GetInstance().RemoveEventListener(203163, OnGiftSwitch);
		EventManager.GetInstance().RemoveEventListener(203164, OnGiftBuySuccess);
		EventManager.GetInstance().RemoveEventListener<int, long, int>(100015, OnItemChange);
		EventManager.GetInstance().RemoveEventListener(203158, UpdateIllusrated);
		EventManager.GetInstance().RemoveEventListener<int>(100101, OnGuideStart);
		EventManager.GetInstance().RemoveEventListener<int>(100102, OnGuideFinish);
		EventManager.GetInstance().RemoveEventListener(203166, OnUpdateMap);
		EventManager.GetInstance().RemoveEventListener(203167, OnActiveOtherGen);
		EventManager.GetInstance().RemoveEventListener<int>(203168, OnActiveMainGen);
		EventManager.GetInstance().RemoveEventListener<int, Vector3>(203169, ToMainGenerator);
		EventManager.GetInstance().RemoveEventListener<int, Vector3>(203170, ToOtherGenerator);
		EventManager.GetInstance().RemoveEventListener(203119, OnClaimPassRewardSuccess);
		EventManager.GetInstance().RemoveEventListener(203116, SetPassEntrance);
	}

	private void OnActiveMainGen(int level)
	{
		if ((Object)(object)MainGen != (Object)null)
		{
			MainGen.ActiveGen(level);
		}
	}

	private void OnActiveOtherGen()
	{
		if ((Object)(object)OtherGen != (Object)null)
		{
			OtherGen.ActiveGen();
		}
	}

	private void OnAddFarmGoods(int goodsID, Transform startTransform)
	{
		//IL_00cd: Unknown result type (might be due to invalid IL or missing references)
		//IL_007b: Unknown result type (might be due to invalid IL or missing references)
		if (ObjectManager.GetInstance().independentFarmModel.GetGoodsConfigById(goodsID) == null)
		{
			return;
		}
		IndependentGrid nearbyEmptyGrid = GetNearbyEmptyGrid(GetCenterGridID(), showEnoughTip: false, null, goodsID);
		if ((Object)(object)nearbyEmptyGrid != (Object)null)
		{
			IndGoodsBase indGameBaseById = IndependentDefine.GetIndGameBaseById(ViewLevelType, goodsID, nearbyEmptyGrid);
			nearbyEmptyGrid.ChangeGameGoodsVo(indGameBaseById);
			if ((Object)(object)startTransform != (Object)null && (Object)(object)nearbyEmptyGrid.GetGameLevelItem() != (Object)null)
			{
				nearbyEmptyGrid.GetGameLevelItem().PlayItemFly(startTransform, 0.8f, isPlayDownEffect: false, isPlayDoubleUp: false, 0.6f, isBreakAudio: true, "숵끜犡洶癒3Î反숄끗榶弅彗:ª厩숎끏暶意汝\r\u009e厝刦碗\ud9c6ŝ", "숵끜犡洶癒3Î反숄끗榶弅彗:ª厩匐橲ā讥饬", isAddTrail: true);
			}
			IndependentDefine.UnlockNewGoods(ViewLevelType, goodsID, nearbyEmptyGrid, 0.9f);
		}
		else
		{
			ObjectManager.GetInstance().independentFarmModel.AddIndependentGoods(goodsID, 1);
			if ((Object)(object)TemporaryLogic != (Object)null)
			{
				TemporaryLogic.PlayItemFly(goodsID, startTransform, 0.6f, "숵끜犡朶癹7Î反숏끬檰椐敃\r®厭숆끔暾愇慝\r\u009e厝刦碗\ud9c6ŝ", isEndFankui: true);
			}
		}
	}

	protected override void GameLayoutFit()
	{
		//IL_0050: Unknown result type (might be due to invalid IL or missing references)
		//IL_007c: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
		IIndependentFarmTheme independentMergeTheme = ObjectManager.GetInstance().independentFarmModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null)
		{
			mIndependentColumns = independentMergeTheme.column;
			mIndependentRows = independentMergeTheme.row;
			GridParent.sizeDelta = new Vector2((float)(mIndependentColumns * GameGridWidth), (float)(mIndependentRows * GameGridHeight));
			GridBgParent.sizeDelta = new Vector2((float)(mIndependentColumns * GameGridWidth), (float)(mIndependentRows * GameGridHeight));
			GridParentAnim.sizeDelta = new Vector2((float)(mIndependentColumns * GameGridWidth), (float)(mIndependentRows * GameGridHeight));
			GridBgParentAnim.sizeDelta = new Vector2((float)(mIndependentColumns * GameGridWidth), (float)(mIndependentRows * GameGridHeight));
		}
	}

	protected override void InitView()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.Init(this, ViewLevelType);
		}
		IIndependentFarmTheme independentMergeTheme = ObjectManager.GetInstance().independentFarmModel.GetIndependentMergeTheme();
		if (independentMergeTheme != null && (Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.Init(independentMergeTheme.themeSeriesID, this);
		}
		RefreshTimeDown();
		InitToken();
		((Component)TemporaryLogic).transform.SetSelfActive<Transform>(true);
		((Component)goodsLogic).transform.SetSelfActive<Transform>(false);
		LevelNode.SetSelfActive<RectTransform>(true);
		LevelNodeAnim.SetSelfActive<RectTransform>(false);
		LevelNodeAnimContent.SetSelfActive<RectTransform>(false);
		UpdateIllusrated();
		InitMainGen();
		InitOtherGen();
		if ((Object)(object)IndependentPassIcon != (Object)null)
		{
			IndependentPassIcon.Init(this, ((Component)TemporaryLogic).transform, SetPassEntrance);
		}
		SetGiftEntrance();
		SetPassEntrance();
	}

	private void InitOtherGen()
	{
		if ((Object)(object)OtherGen != (Object)null)
		{
			OtherGen.Init(this);
		}
	}

	private void InitMainGen()
	{
		if ((Object)(object)MainGen != (Object)null)
		{
			int monchiMainGenLevel = ObjectManager.GetInstance().independentFarmModel.GetMonchiMainGenLevel();
			int mainGenMulti = ObjectManager.GetInstance().independentFarmModel.GetMainGenMulti();
			MainGen.Init(monchiMainGenLevel, mainGenMulti, this);
		}
	}

	private void UpdateIllusrated()
	{
		IndependentFarmModel independentFarmModel = ObjectManager.GetInstance().independentFarmModel;
		if (independentFarmModel != null)
		{
			if ((Object)(object)illusratedPoint != (Object)null)
			{
				illusratedPoint.SetSelfActive<RectTransform>(independentFarmModel.IsIllustratedWaitingReward());
			}
			int unlockIllsustratedCount = independentFarmModel.GetUnlockIllsustratedCount();
			int allIllsustratedCount = independentFarmModel.GetAllIllsustratedCount();
			((TMP_Text)illusratedProcess).text = string.Format("类04뀯}ﱣ哕", unlockIllsustratedCount, allIllsustratedCount);
		}
	}

	private void InitToken()
	{
		if (ObjectManager.GetInstance().independentFarmModel.GetTokenItemVo() != null)
		{
			TokenIcon.sprite = ((BaseViewLogic)this).Load<Sprite>(ObjectManager.GetInstance().independentFarmModel.GetTokenIcon());
			((Graphic)TokenIcon).SetNativeSize();
			((TMP_Text)TokenNum).text = "뻤" + ObjectManager.GetInstance().independentFarmModel.GetTokenNumber();
		}
	}

	private void OnItemChange(int itemID, long changeNum, int eventFrom)
	{
		int tokenItemID = ObjectManager.GetInstance().independentFarmModel.GetTokenItemID();
		if (itemID != tokenItemID)
		{
			return;
		}
		((TMP_Text)TokenNum).text = "뻤" + ObjectManager.GetInstance().independentFarmModel.GetTokenNumber();
		if (eventFrom == 28)
		{
			ObjectManager.GetInstance().independentFarmModel.TokenRecord += (int)changeNum;
			ObjectManager.GetInstance().independentFarmModel.DropAnalytic((int)changeNum, "숉끏玫攊灜3Ò发");
			if ((Object)(object)MainGen != (Object)null)
			{
				MainGen.RefreshUI();
			}
		}
	}

	public override void RefreshTimeDown()
	{
		if (!((Object)(object)TimeDownTextTMP == (Object)null))
		{
			int activityTimedown = IndependentDefine.GetActivityTimedown(ViewLevelType);
			if (activityTimedown > 0)
			{
				((TMP_Text)TimeDownTextTMP).text = TimeManager.GetInstance().GetTimeDownBySecond(activityTimedown);
			}
			else
			{
				LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)TimeDownTextTMP, "숃끙璭礄慂;Ö叕숄끜械攅彝!¦厥뻸");
			}
		}
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)TitleTextTMP, "숉끏憷爊䵜\u0015\u008a厉숵끟榷渶摹3ª厩녟奔✼\0逕\ud96e");
	}

	private void InitActivityGift()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			OnGiftSwitch();
			return;
		}
		if (ObjectManager.GetInstance().independentFarmModel.GetGiftOpenState)
		{
			ObjectManager.GetInstance().independentFarmModel.CheckCloseGift();
			ObjectManager.GetInstance().independentFarmModel.CheckPopGiftView();
		}
		else
		{
			ObjectManager.GetInstance().independentFarmModel.CheckOpenGift();
		}
		OnGiftSwitch();
		RefreshGiftTimeDown();
	}

	private void SetGiftEntrance()
	{
		if ((Object)(object)GiftButtonGo != (Object)null)
		{
			if (ObjectManager.GetInstance().independentFarmModel.GetGiftOpenState && (Object)(object)iconGroup != (Object)null)
			{
				iconGroup.AddIcon(GiftButtonGo.transform);
			}
			else if ((Object)(object)iconGroup != (Object)null)
			{
				iconGroup.RemoveIcon(GiftButtonGo.transform);
				GiftButtonGo.SetSelfActive(active: false);
			}
		}
	}

	private void SetPassEntrance()
	{
		if ((Object)(object)IndependentPassIcon != (Object)null)
		{
			if (IndependentPassIcon.GetIsShowing() && (Object)(object)iconGroup != (Object)null)
			{
				iconGroup.AddIcon(((Component)IndependentPassIcon).transform, addFirst: true);
			}
			else if ((Object)(object)iconGroup != (Object)null)
			{
				iconGroup.RemoveIcon(((Component)IndependentPassIcon).transform);
				IndependentPassIcon.SetSelfActive<IndependentPassMergeIconView>(false);
			}
		}
	}

	private void OnGiftSwitch()
	{
		SetGiftEntrance();
	}

	private void OnGiftBuySuccess()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	private void OnClaimPassRewardSuccess()
	{
		if ((Object)(object)TemporaryLogic != (Object)null)
		{
			TemporaryLogic.UpdateTempprary();
		}
	}

	protected override void RefreshGiftTimeDown()
	{
		if ((Object)(object)IndependentPassIcon != (Object)null)
		{
			IndependentPassIcon.UpdateView();
		}
		IndependentGIftIconLogic component = GiftButtonGo.GetComponent<IndependentGIftIconLogic>();
		if ((Object)(object)component != (Object)null && GiftButtonGo.activeSelf)
		{
			component.RefreshRedPointState();
		}
		if (!ObjectManager.GetInstance().independentFarmModel.GetGiftOpenState)
		{
			((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(0);
			return;
		}
		int giftTimedown = ObjectManager.GetInstance().independentFarmModel.GetGiftTimedown();
		if (giftTimedown > 0)
		{
			((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(giftTimedown);
			return;
		}
		((TMP_Text)GiftTimeDownText).text = TimeManager.GetInstance().GetTimeDownBySecond(0);
		ObjectManager.GetInstance().independentFarmModel.CheckCloseGift();
	}

	protected override void FlyToIllutrate(IIndependentGoodsBaseVo goodsBaseVo, Transform startTrans)
	{
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
		//IL_0121: Unknown result type (might be due to invalid IL or missing references)
		//IL_013a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0144: Expected Obj, but got Unknown
		if (goodsBaseVo == null || (Object)(object)startTrans == (Object)null || ObjectManager.GetInstance().independentFarmModel.GetGoodsUnlockState(goodsBaseVo) != 0 || !ObjectManager.GetInstance().independentFarmModel.IsContainsSeries(goodsBaseVo.series))
		{
			return;
		}
		float moveTime = GetMoveTime(startTrans.position, ((Transform)illuTrans).position, 1f, 7.6f, 0.3f, 0.5f);
		GameObject val = ((BaseViewLogic)this).Load<GameObject>("숇끛沫礈䙫\u0014¶厵医橉ā讽魮");
		if (!((Object)(object)val != (Object)null))
		{
			return;
		}
		GameObject imageGo = Object.Instantiate<GameObject>(val);
		imageGo.transform.SetParent(((Component)this).transform);
		imageGo.transform.LocalIdentity<Transform>();
		imageGo.SetSelfActive(active: true);
		imageGo.transform.position = startTrans.position;
		Independent_Farm_Fly_Icon component = imageGo.GetComponent<Independent_Farm_Fly_Icon>();
		if ((Object)(object)component != (Object)null)
		{
			component.Init(resLoader, goodsBaseVo.GetIcon(ViewLevelType), 0.565f);
		}
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(imageGo.transform, ((Transform)illuTrans).position, moveTime, false), (Ease)7), (TweenCallback)(() =>
		{
			if ((Object)(object)imageGo != (Object)null)
			{
				Object.Destroy((Object)(object)imageGo.gameObject);
			}
			Animation component2 = ((Component)illuTrans).GetComponent<Animation>();
			if ((Object)(object)component2 != (Object)null)
			{
				component2.Play("숍끟榫攎䵑\u0004ª厩숋끥徟䤌睆?\u0082厁숙끖璬攚汆3Ö叕匠機ā讹饩");
			}
			AudioManager.Instance.PlayEffect("숵끏碽弶慇4æ句숇끎澼氈楫1Â叁숞끟斺渟汫?\u009a厙뻲ÿ赴");
		}));
	}

	private void UnlockGoods(int goodsID, IndependentGrid grid, float delay)
	{
		//IL_0004: Unknown result type (might be due to invalid IL or missing references)
		UnlockGoodsAnimation(goodsID, grid, delay);
	}

	[AsyncStateMachine(typeof(_003CUnlockGoodsAnimation_003Ed__47))]
	private UniTask UnlockGoodsAnimation(int goodsID, IndependentGrid grid, float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CUnlockGoodsAnimation_003Ed__47 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.goodsID = goodsID;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CUnlockGoodsAnimation_003Ed__47>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private void UpdateUnlockProgress(IIndependentGoodsBaseVo goodsBaseVo)
	{
		if (goodsBaseVo == null)
		{
			return;
		}
		IIndependentFarmTheme independentMergeTheme = ObjectManager.GetInstance().independentFarmModel.GetIndependentMergeTheme();
		if (independentMergeTheme == null || (Object)(object)IndependentProgress == (Object)null || goodsBaseVo.series != independentMergeTheme.themeSeriesID)
		{
			return;
		}
		IndependentProgress.UpdateIcon(goodsBaseVo.goodsID, mUnlockGo, () =>
		{
			if ((Object)(object)IndependentProgress != (Object)null)
			{
				IndependentProgress.UpdateProgress();
			}
			CheckMoveMapDepth();
		});
	}

	private void OnUpdateMap()
	{
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		List<int> list = new List<int>();
		if (mAwaitUnLockGridList != null && mAwaitUnLockGridList.Count > 0)
		{
			for (int i = 0; i < mAwaitUnLockGridList.Count; i++)
			{
				if (!((Object)(object)mAwaitUnLockGridList[i] == (Object)null))
				{
					list.Add(mAwaitUnLockGridList[i].GetGridId());
				}
			}
		}
		ResetGameMap();
		for (int j = 0; j < list.Count; j++)
		{
			int key = list[j];
			if (GridObjectDic.TryGetValue(key, out var value) && (Object)(object)value != (Object)null)
			{
				value.PlayOnceAnim("숵끜犡洶癒3Î反숄끃徸漅彃'\u0082厁꿗\u00af赴");
			}
		}
		UpdateLockGrid();
		if ((Object)(object)IndependentProgress != (Object)null)
		{
			IndependentProgress.UpdateProgress();
		}
		CheckMoveMapDepth();
	}

	private void CheckMoveMapDepth()
	{
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		Dictionary<int, IndependentGameGoodsVo> independentMap = IndependentDefine.GetIndependentMap(ViewLevelType);
		mAnimationMapDic = new Dictionary<int, IndependentGameGoodsVo>(independentMap);
		int num = ObjectManager.GetInstance().independentFarmModel.MoveMapDepth();
		if (num > 0)
		{
			PlayMapMoveAnimation(num);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayMapMoveAnimation_003Ed__52))]
	private UniTask PlayMapMoveAnimation(int depth)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayMapMoveAnimation_003Ed__52 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.depth = depth;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayMapMoveAnimation_003Ed__52>(ref obj);
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
		//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00be: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_018f: Unknown result type (might be due to invalid IL or missing references)
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
				zero = ((!IsOverturn) ? new Vector2((float)((j - 1) * GameGridWidth), (float)(-(i - 1) * GameGridHeight)) : new Vector2((float)((j - 1) * GameGridWidth), (float)(-(Rows - i) * GameGridHeight)));
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
				var (showLock, resName, _) = GetGridUnlockCondition(independentGameGoodsVo);
				independentGrid.ShowLockBg(showLock, resName);
				mAnimationGridGo.Add(independentGrid);
				if (playCollectAnim && i <= depth)
				{
					float delay = num2 * (float)(i - 1);
					independentGrid.CollectGoodsToTempary(delay);
				}
				num++;
			}
		}
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
				TemparyFankuiPrefab = ((BaseViewLogic)this).Load<GameObject>("숵끜犡朶癹7Î反숏끬檰椐敃\r®厭숆끔暾愇慝\r\u009e厝刦碗\ud9c6ŝ");
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
			AudioManager.Instance.PlayEffect("숵끏碽弶慇4æ句숈끏徻按托7\u0082厁숏끖徵洐潗&\u0082厁匡橮ā诅齩");
		}));
	}

	private void CreateAnimationGridBg()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_00dc: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bc: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e7: Unknown result type (might be due to invalid IL or missing references)
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
				independentGridBg.ShowGridBg(gridID);
				zero = ((!IsOverturn) ? new Vector2((float)((j - 1) * GameGridWidth), (float)(-(i - 1) * GameGridHeight)) : new Vector2((float)((j - 1) * GameGridWidth), (float)(-(Rows - i) * GameGridHeight)));
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

	public void UpdateLockGrid()
	{
		if ((Object)(object)mUnlockGo != (Object)null)
		{
			Object.Destroy((Object)(object)((Component)mUnlockGo).gameObject);
			mUnlockGo = null;
		}
		if (mAwaitUnLockGridList != null && mAwaitUnLockGridList.Count > 0)
		{
			ShowUnlockCondition(mAwaitUnLockGridList);
		}
	}

	private void ShowUnlockCondition(List<IndependentGrid> gridTrans)
	{
		//IL_0129: Unknown result type (might be due to invalid IL or missing references)
		//IL_005d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_0064: Unknown result type (might be due to invalid IL or missing references)
		//IL_0076: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_009a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a4: Unknown result type (might be due to invalid IL or missing references)
		if (gridTrans == null || gridTrans.Count <= 0)
		{
			return;
		}
		float num = float.MinValue;
		float num2 = float.MaxValue;
		float num3 = float.MinValue;
		float num4 = float.MaxValue;
		float num5 = 0f;
		for (int i = 0; i < gridTrans.Count; i++)
		{
			Vector3[] array = new Vector3[4];
			((Component)gridTrans[i]).GetComponent<RectTransform>().GetWorldCorners(array);
			Vector3[] array2 = array;
			foreach (Vector3 val in array2)
			{
				if (val.x > num)
				{
					num = val.x;
				}
				if (val.x < num2)
				{
					num2 = val.x;
				}
				if (val.y > num3)
				{
					num3 = val.y;
				}
				if (val.y < num4)
				{
					num4 = val.y;
				}
				num5 = val.z;
			}
		}
		GameObject val2 = Object.Instantiate<GameObject>(FarmUnlockPrefab);
		((Object)val2).name = "숏끔溽搐䥄7¾厽숵끔犭洶敲3Î反숆끯殷弇彛1²厱녭嵯〲\0這\ud976";
		val2.transform.SetParent((Transform)(object)GridParent);
		val2.transform.LocalIdentity<Transform>();
		val2.transform.position = new Vector3((num2 + num) / 2f, (num3 + num4) / 2f, num5);
		mUnlockGo = val2.GetComponent<Independent_Farm_Unlock_monchi>();
		if ((Object)(object)mUnlockGo != (Object)null)
		{
			mUnlockGo.Init(resLoader);
		}
	}

	private void ToMainGenerator(int goodsID, Vector3 startPos)
	{
		//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_00db: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e3: Unknown result type (might be due to invalid IL or missing references)
		//IL_013f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0155: Unknown result type (might be due to invalid IL or missing references)
		//IL_015f: Expected Obj, but got Unknown
		if (!((Object)(object)MainGen != (Object)null))
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = ObjectManager.GetInstance().independentFarmModel.GetGoodsConfigById(goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		int mainGenMulti = ObjectManager.GetInstance().independentFarmModel.GetMainGenMulti();
		if (mainGenMulti == 2)
		{
			CommonMaskViewLogic.Show(3.5f);
		}
		if (mainGenMulti == 4)
		{
			CommonMaskViewLogic.Show(3.5f);
		}
		GameObject val = ((BaseViewLogic)this).Load<GameObject>("숇끛沫礈䙫\u0014¶厵医橉ā讽魮");
		if (!((Object)(object)val != (Object)null))
		{
			return;
		}
		GameObject imageGo = Object.Instantiate<GameObject>(val);
		imageGo.transform.SetParent(((Component)this).transform);
		imageGo.transform.LocalIdentity<Transform>();
		imageGo.SetSelfActive(active: true);
		imageGo.transform.position = startPos;
		int currentLevel = ObjectManager.GetInstance().independentFarmModel.GetMonchiMainGenLevel();
		Vector3 flyEndPos = MainGen.GetFlyEndPos();
		float moveTime = GetMoveTime(startPos, flyEndPos, 3.5f, 9f, 0.4f, 0.6f);
		Independent_Farm_Fly_Icon component = imageGo.GetComponent<Independent_Farm_Fly_Icon>();
		if ((Object)(object)component != (Object)null)
		{
			component.Init(resLoader, goodsConfigById.GetIcon(ViewLevelType), 0.565f);
		}
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(imageGo.transform, flyEndPos, moveTime, false), (Ease)7), (TweenCallback)(() =>
		{
			if ((Object)(object)imageGo != (Object)null)
			{
				Object.Destroy((Object)(object)imageGo.gameObject);
			}
			EventManager.GetInstance().DispatchEvent(203168, currentLevel);
		}));
	}

	private void ToOtherGenerator(int goodsID, Vector3 startPos)
	{
		//IL_0095: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0126: Unknown result type (might be due to invalid IL or missing references)
		//IL_013c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0146: Expected Obj, but got Unknown
		if (!((Object)(object)OtherGen != (Object)null))
		{
			return;
		}
		IIndependentGoodsBaseVo goodsConfigById = ObjectManager.GetInstance().independentFarmModel.GetGoodsConfigById(goodsID);
		if (goodsConfigById == null)
		{
			return;
		}
		GameObject val = ((BaseViewLogic)this).Load<GameObject>("숇끛沫礈䙫\u0014¶厵医橉ā讽魮");
		if (!((Object)(object)val != (Object)null))
		{
			return;
		}
		GameObject imageGo = Object.Instantiate<GameObject>(val);
		imageGo.transform.SetParent(((Component)this).transform);
		imageGo.transform.LocalIdentity<Transform>();
		imageGo.SetSelfActive(active: true);
		imageGo.transform.position = startPos;
		Vector3 flyEndPos = OtherGen.GetFlyEndPos();
		float moveTime = GetMoveTime(startPos, flyEndPos, 2.5f, 8.6f, 0.4f, 0.6f);
		Independent_Farm_Fly_Icon component = imageGo.GetComponent<Independent_Farm_Fly_Icon>();
		if ((Object)(object)component != (Object)null)
		{
			component.Init(resLoader, goodsConfigById.GetIcon(ViewLevelType), 0.565f);
		}
		if ((Object)(object)OtherGen != (Object)null)
		{
			OtherGen.PlayActiveAni(moveTime - 0.4f);
		}
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(imageGo.transform, flyEndPos, moveTime, false), (Ease)7), (TweenCallback)(() =>
		{
			if ((Object)(object)imageGo != (Object)null)
			{
				Object.Destroy((Object)(object)imageGo.gameObject);
			}
			AudioManager.Instance.PlayEffect("숵끏碽弶慇4æ句숇끎澼氈楫1Â叁숞끟斺渟汫?\u009a厙뻲ÿ赴");
			EventManager.GetInstance().DispatchEvent(203167);
			ShowPriorityGuideWeak();
		}));
	}

	public override void OnOpenHelpView()
	{
		ObjectManager.GetInstance().independentFarmModel.OpenIndependentHelpView();
	}

	public override void OnOpenGiftView()
	{
		ObjectManager.GetInstance().independentFarmModel.OpenActivityGiftView();
	}

	public override (bool, string, bool) GetGridUnlockCondition(IndependentGameGoodsVo targetGoods)
	{
		if (targetGoods == null)
		{
			return (false, string.Empty, false);
		}
		if (targetGoods.UnlockLevel > 0)
		{
			int nextUnlockGoodsLevel = ObjectManager.GetInstance().independentFarmModel.GetNextUnlockGoodsLevel();
			if (targetGoods.UnlockLevel == nextUnlockGoodsLevel)
			{
				return (true, "숈끓斆弉畕!\u009a厙숋끈犼攌瑇'Î反숋끙榫渌归&ª厩숃끥斩弄村1\u009a厙숁끕徺昂氄`\u0082厁룮ó赴", true);
			}
			if (targetGoods.UnlockLevel > nextUnlockGoodsLevel)
			{
				return (true, "숈끓斆弉畕!\u009a厙숋끈犼攌瑇'Î反숋끙榫渌归&ª厩숃끥斩弄村1\u009a厙숁끕徺昂氄c\u0082厁룮ó赴", false);
			}
			return (false, string.Empty, false);
		}
		return (false, string.Empty, false);
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
		//IL_00c0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cb: Expected Obj, but got Unknown
		//IL_00f9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0104: Expected Obj, but got Unknown
		CommonMaskViewLogic.Show(0.3f);
		Transform trans1 = null;
		Transform trans2 = null;
		if (isShow)
		{
			trans1 = ((Component)IndependentProgress).transform;
			trans2 = ((Component)goodsLogic).transform;
			isShowInfo = true;
		}
		else
		{
			trans1 = ((Component)goodsLogic).transform;
			trans2 = ((Component)IndependentProgress).transform;
			isShowInfo = false;
		}
		if ((Object)(object)trans1 == (Object)null || (Object)(object)trans2 == (Object)null)
		{
			return;
		}
		CanvasGroup canvasGroup_pool = ((Component)trans1).GetComponent<CanvasGroup>();
		canvasGroup_pool.alpha = 1f;
		TweenCallback val3 = default;
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
					trans1.SetSelfActive<Transform>(false);
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.OnComplete<Tweener>(val, val2);
		}), true);
		CanvasGroup canvasGroup_goods = ((Component)trans2).GetComponent<CanvasGroup>();
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
					trans2.SetSelfActive<Transform>(true);
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
		}
	}

	public override bool CheckMapIsFull()
	{
		if (CheckEmptyGridEnough(1))
		{
			return false;
		}
		Dictionary<int, IndependentGameGoodsVo> dictionary = new Dictionary<int, IndependentGameGoodsVo>();
		List<IndependentGrid> list = mGridObjectDic.Values.ToList();
		List<IndependentGrid> list2 = new List<IndependentGrid>();
		List<IndependentGrid> list3 = new List<IndependentGrid>();
		IIndependentGoodsBaseVo independentGoodsBaseVo = null;
		IndependentGameGoodsVo independentGameGoodsVo = null;
		for (int num = list.Count - 1; num >= 0; num--)
		{
			IndependentGrid independentGrid = list[num];
			if (!((Object)(object)independentGrid == (Object)null) && independentGrid.GetGoodsBaseVo() != null)
			{
				independentGoodsBaseVo = independentGrid.GetGoodsBaseVo();
				independentGameGoodsVo = independentGrid.GetGameGoodsVo();
				if (independentGoodsBaseVo != null && independentGameGoodsVo != null && IndependentDefine.IsUnlockGrid(ViewLevelType, independentGameGoodsVo) && !IIndependentGoodsBaseVo.CannotMerge(independentGameGoodsVo.GoodsState) && !IIndependentGoodsBaseVo.IsBatchProduce(independentGoodsBaseVo.type))
				{
					if (independentGoodsBaseVo.type == 2)
					{
						IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo.goodsID);
						if (collectConfigById != null)
						{
							if (collectConfigById.itemType != 21)
							{
								return false;
							}
							if (ObjectManager.GetInstance().independentFarmModel.CanActiveOtherGen())
							{
								return false;
							}
						}
					}
					if (independentGoodsBaseVo.type == 3)
					{
						return false;
					}
					if (independentGoodsBaseVo.type == 6)
					{
						list2.Add(list[num]);
					}
					else if (independentGoodsBaseVo.type == 5 || independentGoodsBaseVo.type == 7)
					{
						list3.Add(list[num]);
					}
					if (IndependentDefine.GetGoodsConfigBySeriesAndLevel(independentGrid.GetGridType(), independentGoodsBaseVo.series, independentGoodsBaseVo.level + 1) != null)
					{
						if (dictionary.ContainsKey(independentGameGoodsVo.goodsID))
						{
							if (dictionary[independentGameGoodsVo.goodsID].GoodsState != IndependentGoodsState.Lock)
							{
								return false;
							}
							if (independentGameGoodsVo.GoodsState != IndependentGoodsState.Lock)
							{
								return false;
							}
						}
						else
						{
							dictionary.Add(independentGameGoodsVo.goodsID, independentGameGoodsVo);
						}
					}
				}
			}
		}
		if (list2.Count > 0 && list3.Count > 0)
		{
			for (int i = 0; i < list3.Count; i++)
			{
				for (int j = 0; j < list2.Count; j++)
				{
					if (CanPutinMaterial(list2[j], list3[i]))
					{
						return false;
					}
				}
			}
		}
		return true;
	}

	public override bool CheckGoodsCanDelete(IndependentGameGoodsVo gameGoodsVo)
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (!IndependentDefine.IsUnlockGrid(ViewLevelType, gameGoodsVo))
		{
			return false;
		}
		if (IIndependentGoodsBaseVo.CannotDrag(gameGoodsVo.GoodsState))
		{
			return false;
		}
		IIndependentGoodsBaseVo goodsConfigById = IndependentDefine.GetGoodsConfigById(ViewLevelType, gameGoodsVo.goodsID);
		if (goodsConfigById == null)
		{
			return false;
		}
		if (IIndependentGoodsBaseVo.IsBatchProduce(goodsConfigById.type))
		{
			return false;
		}
		if (goodsConfigById.type == 4)
		{
			return false;
		}
		if (goodsConfigById.type == 3)
		{
			return false;
		}
		if (goodsConfigById.type == 5)
		{
			return false;
		}
		if (goodsConfigById.type == 7)
		{
			return false;
		}
		if (goodsConfigById.type == 2)
		{
			IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, goodsConfigById.goodsID);
			if (collectConfigById != null)
			{
				if (collectConfigById.itemType == 21)
				{
					if (ObjectManager.GetInstance().independentFarmModel.CanActiveOtherGen())
					{
						return false;
					}
					return true;
				}
				return false;
			}
		}
		return true;
	}

	private void OnGuideStart(int guideId)
	{
		if (!MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		int num = ObjectManager.GetInstance().independentFarmModel.GuideId_3();
		int num2 = ObjectManager.GetInstance().independentFarmModel.GuideId_4();
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
					if ((Object)(object)item.Value == (Object)null || ((Object)item.Value).name != "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎憼椈䥫?\u008a厉뻲")
					{
						continue;
					}
					independentGoodsBaseVo = item.Value.GetGoodsBaseVo();
					independentGameGoodsVo = item.Value.GetGameGoodsVo();
					if (independentGoodsBaseVo == null || independentGameGoodsVo == null)
					{
						continue;
					}
					if (!IndependentDefine.IsUnlockGrid(ViewLevelType, independentGameGoodsVo))
					{
						break;
					}
					if (!IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo.GoodsState) && independentGoodsBaseVo.type == 2)
					{
						IIndependentGoodsCollectVo collectConfigById = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo.goodsID);
						if (collectConfigById != null && collectConfigById.itemType == 20)
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
			if ((Object)(object)item2.Value == (Object)null || ((Object)item2.Value).name != "숏끔溽搐䥄7¾厽숭끔播攮敁;\u0096厕숇끎疼戈䥫!Ú叙")
			{
				continue;
			}
			independentGoodsBaseVo2 = item2.Value.GetGoodsBaseVo();
			independentGameGoodsVo2 = item2.Value.GetGameGoodsVo();
			if (independentGoodsBaseVo2 == null || independentGameGoodsVo2 == null)
			{
				continue;
			}
			if (!IndependentDefine.IsUnlockGrid(ViewLevelType, independentGameGoodsVo2))
			{
				break;
			}
			if (!IIndependentGoodsBaseVo.CannotDrag(independentGameGoodsVo2.GoodsState) && independentGoodsBaseVo2.type == 2)
			{
				IIndependentGoodsCollectVo collectConfigById2 = IndependentDefine.GetCollectConfigById(ViewLevelType, independentGoodsBaseVo2.goodsID);
				if (collectConfigById2 != null && collectConfigById2.itemType == 21)
				{
					item2.Value.SelectCurrentGrid();
					break;
				}
			}
		}
	}

	private void OnGuideFinish(int guideId)
	{
		TriggerGuide();
	}

	public override void ShowGuideWeak()
	{
	}

	public override bool ShowPriorityGuideWeak()
	{
		if (ObjectManager.GetInstance().independentFarmModel.CanClickOtherGen() && (Object)(object)OtherGen != (Object)null)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentFarmOtherGuide(OtherGen.GetFlyEndTrans(), DragItemParent);
			return true;
		}
		bool flag = false;
		int tokenNumber = ObjectManager.GetInstance().independentFarmModel.GetTokenNumber();
		int mainGenMulti = ObjectManager.GetInstance().independentFarmModel.GetMainGenMulti();
		if (tokenNumber > 0 && tokenNumber >= mainGenMulti)
		{
			flag = true;
		}
		if (flag && ObjectManager.GetInstance().independentFarmModel.HasEmptyGrid() && (Object)(object)MainGen != (Object)null && !MainGen.isPlayAnimation)
		{
			MonoSingleton<GuideWeakManager>.Instance.ShowIndependentFarmMainGuide(MainGen.FarmMainWeakGuideParent, DragItemParent);
			return true;
		}
		return false;
	}

	private bool TriggerGuide()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return false;
		}
		int num = ObjectManager.GetInstance().independentFarmModel.GuideId_5();
		if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num))
		{
			int num2 = ObjectManager.GetInstance().independentFarmModel.GuideId_2();
			if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num2))
			{
				int num3 = ObjectManager.GetInstance().independentFarmModel.GuideId_6();
				if (MonoSingleton<GuideManager>.Instance.IsFinishByID(num3))
				{
					return false;
				}
				EventManager.GetInstance().DispatchEvent(100133, num3, 0.1f);
				return true;
			}
			EventManager.GetInstance().DispatchEvent(100133, num2, 0.1f);
			return true;
		}
		EventManager.GetInstance().DispatchEvent(100133, num, 0.1f);
		return true;
	}

	private void TriggerMultiGuide()
	{
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		if (MainGen.TryTriggerMultiActivate())
		{
			CommonMaskViewLogic.Show(3.5f);
			return;
		}
		int guideID = ObjectManager.GetInstance().independentFarmModel.GuideId_6();
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(guideID))
		{
			return;
		}
		int num = ObjectManager.GetInstance().independentFarmModel.GuideId_7();
		int monchiMainGenLevel = ObjectManager.GetInstance().independentFarmModel.GetMonchiMainGenLevel();
		if (!MonoSingleton<GuideManager>.Instance.IsFinishByID(num) && monchiMainGenLevel >= 3)
		{
			EventManager.GetInstance().DispatchEvent(100133, num, 0.1f);
			ObjectManager.GetInstance().independentFarmModel.SetMainGenMulti(1);
			if ((Object)(object)MainGen != (Object)null)
			{
				MainGen.RefreshMultiUI();
			}
		}
	}

	public void OnClickIllusrated()
	{
		ObjectManager.GetInstance().independentFarmModel.OpenActivityIllustrationView();
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

	private float GetMoveTime(Vector3 startPos, Vector3 endPos, float minDistance, float maxDistance, float minTime, float maxTime)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		float num = Vector3.Distance(startPos, endPos);
		if (num <= minDistance)
		{
			return minTime;
		}
		if (num >= maxDistance)
		{
			return maxTime;
		}
		return minTime + (num - minDistance) / (maxDistance - minDistance) * (maxTime - minTime);
	}
}
