using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using TLF;
using TLF.SkinSystem;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

[PrefabPath("BagView_New")]
public class BagView_NewLogic : BagViewLogic, IBaseViewSkin, IBaseViewAnimation
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CApplySkinAsync_003Ed__25 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public BagView_NewLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0054: Unknown result type (might be due to invalid IL or missing references)
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			//IL_0060: Unknown result type (might be due to invalid IL or missing references)
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			//IL_0024: Unknown result type (might be due to invalid IL or missing references)
			//IL_0029: Unknown result type (might be due to invalid IL or missing references)
			//IL_003d: Unknown result type (might be due to invalid IL or missing references)
			//IL_003e: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			BagView_NewLogic bagView_NewLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTask val = ViewSkinManager.GetInstance().ApplySysViewSkin(((Component)bagView_NewLogic).GetComponent<SkinApplier>());
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CApplySkinAsync_003Ed__25>(ref val2, ref this);
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

	public BagTagViewLogic TagViewLogic;

	public RectTransform Background;

	public Image leftBg;

	public Image rightBg;

	public GameObject topObj;

	public GameObject topObj_new;

	public GameObject SortBtn;

	public GameObject CardBg;

	public Animation ViewAnimation;

	private Sprite itemBagBg;

	private Sprite generatorBagBg;

	private bool isPlayAnim;

	public override void OnEnter()
	{
		itemBagBg = ((BaseViewLogic)this).Load<Sprite>("숈끓徆戉畕5\u0082厁뻻");
		generatorBagBg = ((BaseViewLogic)this).Load<Sprite>("숈끓徆戉畕5\u0082厁숏끥犾愐杚7Î反귗\u0087赴");
		base.OnEnter();
		InitTagView();
		MonoSingleton<GuideManager>.Instance.SetBagView(this);
		bool openState = ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState;
		bool isNewUser = ObjectManager.GetInstance().bagGeneratorStorageModel.IsNewUser;
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			return;
		}
		if (openState && !isNewUser && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㊰㘏䝑\rÍ双蘔ò赴"))
		{
			CommonMaskViewLogic.Show(0.2f);
			EventManager.GetInstance().DispatchEvent(100133, 242, 0.2f);
			if ((Object)(object)TagViewLogic != (Object)null)
			{
				TagViewLogic.ScrollToChild(isGuide: true);
			}
		}
		else if ((openState & isNewUser) && !MonoSingleton<GuideManager>.Instance.IsFinishByName("숎끏㊰㘏䝑\rÍ双蘡ò赴"))
		{
			CommonMaskViewLogic.Show(0.2f);
			EventManager.GetInstance().DispatchEvent(100133, 245, 0.2f);
			if ((Object)(object)TagViewLogic != (Object)null)
			{
				TagViewLogic.ScrollToChild(isGuide: true);
			}
		}
	}

	private void InitTagView()
	{
		bool openState = ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState;
		bool flag = ABTestSwitchDefine.GeneratorCollectionSwitch();
		bool hardSwitch = ObjectManager.GetInstance().bagGeneratorStorageModel.HardSwitch;
		mTotalGeneratorPage = ObjectManager.GetInstance().bagGeneratorStorageModel.GetTotalPage();
		mTotalGeneratorPage = (openState ? mTotalGeneratorPage : 0);
		bool flag2 = false;
		if (!hardSwitch)
		{
			mTotalGeneratorPage = 0;
			flag2 = false;
		}
		else if (openState)
		{
			flag2 = true;
		}
		else if (flag)
		{
			flag2 = true;
		}
		if ((Object)(object)TagViewLogic != (Object)null)
		{
			TagViewLogic.Init(mTotalPage, mTotalGeneratorPage, this);
		}
		if (MonoSingleton<GuideManager>.Instance.IsInGuide() && MonoSingleton<GuideManager>.Instance.CurrentGuideName() == "숎끏㊰㘏䝑\rÍ双蘓ò赴")
		{
			if ((Object)(object)TagViewLogic != (Object)null)
			{
				TagViewLogic.ScrollToChild(isGuide: true);
			}
		}
		else if ((Object)(object)TagViewLogic != (Object)null)
		{
			TagViewLogic.ScrollToChild();
		}
		((Component)TagViewLogic).gameObject.SetSelfActive(mTotalPage + mTotalGeneratorPage > 1);
		topObj_new.SetActive(flag2);
		topObj.SetActive(!flag2);
		ItemNode.SetSelfActive<RectTransform>(!flag2);
	}

	public override void CreateGameGrid(bool isFirstCreate = false)
	{
		bool openState = ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState;
		mTotalGeneratorPage = ObjectManager.GetInstance().bagGeneratorStorageModel.GetTotalPage();
		mTotalGeneratorPage = (openState ? mTotalGeneratorPage : 0);
		float delay = (isFirstCreate ? 0.3f : 0f);
		if (!openState || mTotalGeneratorPage <= 0)
		{
			base.CreateGameGrid(isFirstCreate);
			leftBg.sprite = itemBagBg;
			((Graphic)leftBg).SetNativeSize();
			rightBg.sprite = itemBagBg;
			((Graphic)rightBg).SetNativeSize();
			LocalizedLang.SetUITextLocalization(TitleText_B, "숼끛瞾弽䉝7â叡匰橩ā讱豥");
			if ((Object)(object)CardBg != (Object)null)
			{
				CardBg.gameObject.SetSelfActive(active: true);
			}
			if ((Object)(object)GeneratorDescText != (Object)null)
			{
				((Component)GeneratorDescText).gameObject.SetSelfActive(active: false);
			}
			if ((Object)(object)SortBtn != (Object)null)
			{
				SortBtn.gameObject.SetSelfActive(active: true);
			}
			PlayPutInEffect(delay);
		}
		else if (mCurrentPage > mTotalPage)
		{
			int page = mCurrentPage - mTotalPage;
			CreateGeneratorGameGrid(page);
			LocalizedLang.SetUITextLocalization(TitleText_B, "숸끛榾爹䉑&ª厩略_4끩v\uda40䷍");
			if ((Object)(object)CardBg != (Object)null)
			{
				CardBg.gameObject.SetSelfActive(active: false);
			}
			if ((Object)(object)GeneratorDescText != (Object)null)
			{
				((Component)GeneratorDescText).gameObject.SetSelfActive(active: true);
			}
			if ((Object)(object)SortBtn != (Object)null)
			{
				SortBtn.gameObject.SetSelfActive(active: false);
			}
		}
		else
		{
			base.CreateGameGrid(isFirstCreate);
			leftBg.sprite = itemBagBg;
			((Graphic)leftBg).SetNativeSize();
			rightBg.sprite = itemBagBg;
			((Graphic)rightBg).SetNativeSize();
			LocalizedLang.SetUITextLocalization(TitleText_B, "숼끛瞾弽䉝7â叡匰橩ā讱豥");
			if ((Object)(object)CardBg != (Object)null)
			{
				CardBg.gameObject.SetSelfActive(active: true);
			}
			if ((Object)(object)GeneratorDescText != (Object)null)
			{
				((Component)GeneratorDescText).gameObject.SetSelfActive(active: false);
			}
			if ((Object)(object)SortBtn != (Object)null)
			{
				SortBtn.gameObject.SetSelfActive(active: true);
			}
			PlayPutInEffect(delay);
		}
	}

	public void InitBagGeneratorStorageData(int page)
	{
		CreateGeneratorGameGrid(page);
	}

	private void CreateGeneratorGameGrid(int page)
	{
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_006c: Unknown result type (might be due to invalid IL or missing references)
		//IL_013b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0146: Unknown result type (might be due to invalid IL or missing references)
		if (!ObjectManager.GetInstance().bagGeneratorStorageModel.OpenState)
		{
			return;
		}
		leftBg.sprite = generatorBagBg;
		((Graphic)leftBg).SetNativeSize();
		rightBg.sprite = generatorBagBg;
		((Graphic)rightBg).SetNativeSize();
		Dictionary<int, List<GameGoodsVo>> bagGeneratorStorageDic = ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagGeneratorStorageDic();
		GridObject = new Dictionary<int, BagGrid>();
		BagGeneratorGrid bagGeneratorGrid = null;
		Vector3 zero = Vector3.zero;
		List<BagItemShowVo> bagItemShowListByPage = ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagItemShowListByPage(page);
		int num = BagViewLogic.row * BagViewLogic.column * page;
		int num2 = BagViewLogic.row * BagViewLogic.column - 1;
		for (int num3 = BagViewLogic.row - 1; num3 >= 0; num3--)
		{
			for (int num4 = BagViewLogic.column - 1; num4 >= 0; num4--)
			{
				if (Singleton<ResCacheManager>.Instance.GetGameobject("숭끛斾爮䉑<\u009a厙수끎榶搙慳 ª厩").TryGetComponent<BagGeneratorGrid>(ref bagGeneratorGrid) && (Object)(object)bagGeneratorGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔枽䝋楶3¢厡숦끓榽挧牛5ª厩뺽");
				}
				else
				{
					((Object)bagGeneratorGrid).name = "숭끛撾弮䉆;\u0096厕" + num;
					((Component)bagGeneratorGrid).transform.SetParent(GridParent);
					bagGeneratorGrid.LocalIdentity<BagGeneratorGrid>();
					zero = new Vector3((float)(num4 - BagViewLogic.column) * BagViewLogic.GridWidth, (float)(num3 + 1) * BagViewLogic.GridHeight);
					((Component)bagGeneratorGrid).transform.localPosition = zero;
					GameGoodsVo goodsBase = null;
					bagItemShowListByPage.TryGet(num2, out var value);
					int num5 = value?.id ?? 0;
					if (bagGeneratorStorageDic != null && bagGeneratorStorageDic.ContainsKey(num5) && bagGeneratorStorageDic[num5].Count > 0)
					{
						goodsBase = bagGeneratorStorageDic[num5][0];
					}
					bagGeneratorGrid.Init(num5, goodsBase, this, BagGridType.Generator);
					GridObject.Add(num, bagGeneratorGrid);
					num++;
					num2--;
				}
			}
		}
	}

	protected override void GameBagFit()
	{
		//IL_000c: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_008b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0095: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f0: Unknown result type (might be due to invalid IL or missing references)
		//IL_0101: Unknown result type (might be due to invalid IL or missing references)
		//IL_011a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0138: Unknown result type (might be due to invalid IL or missing references)
		//IL_0142: Unknown result type (might be due to invalid IL or missing references)
		//IL_0152: Unknown result type (might be due to invalid IL or missing references)
		//IL_0163: Unknown result type (might be due to invalid IL or missing references)
		//IL_017c: Unknown result type (might be due to invalid IL or missing references)
		((Transform)BottomNode).localPosition = new Vector3(((Transform)BottomNode).localPosition.x, ((Transform)BottomNode).localPosition.y + GameLevelViewLogic.BottomOffsetY_V2, ((Transform)BottomNode).localPosition.z);
		if (ABTestSwitchDefine.ChessboardFitSwitch())
		{
			((Component)GoodsInfoViewLogic).transform.localScale = Vector3.one * GameLevelViewLogic.GoodsInfoScale;
			if ((Object)(object)GoodsInfoViewLogic != (Object)null)
			{
				((Component)GoodsInfoViewLogic).transform.localScale = Vector3.one * GameLevelViewLogic.GoodsInfoScale;
				if ((Object)(object)GoodsInfoViewLogic != (Object)null)
				{
					GoodsInfoViewLogic.ResetContenrSize(GameLevelViewLogic.GoodsInfoMaxWeight, GameLevelViewLogic.GoodsInfoScale);
				}
				if ((Object)(object)BackTransform != (Object)null)
				{
					((Transform)BackTransform).localScale = Vector3.one * GameLevelViewLogic.GoodsInfoScale;
					float x = BackTransform.anchoredPosition.x;
					float num = BackTransform.anchoredPosition.y * GameLevelViewLogic.GoodsInfoScale;
					BackTransform.anchoredPosition = new Vector2(x, num);
				}
				if ((Object)(object)LevelTransform != (Object)null)
				{
					((Transform)LevelTransform).localScale = Vector3.one * GameLevelViewLogic.GoodsInfoScale;
					float x2 = LevelTransform.anchoredPosition.x;
					float num2 = LevelTransform.anchoredPosition.y * GameLevelViewLogic.GoodsInfoScale;
					LevelTransform.anchoredPosition = new Vector2(x2, num2);
				}
			}
		}
		FixBackgroundSize();
	}

	private void FixBackgroundSize()
	{
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_000b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_0017: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_005e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ef: Unknown result type (might be due to invalid IL or missing references)
		//IL_0111: Unknown result type (might be due to invalid IL or missing references)
		//IL_006a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		//IL_0128: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01f0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b3: Unknown result type (might be due to invalid IL or missing references)
		//IL_014f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0156: Unknown result type (might be due to invalid IL or missing references)
		//IL_016e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0187: Unknown result type (might be due to invalid IL or missing references)
		//IL_018d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0196: Unknown result type (might be due to invalid IL or missing references)
		//IL_019c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0227: Unknown result type (might be due to invalid IL or missing references)
		//IL_022e: Unknown result type (might be due to invalid IL or missing references)
		Vector3 localPosition = ((Transform)ItemNode).localPosition;
		Vector3 localPosition2 = ((Transform)TagNode).localPosition;
		float topSafeArea = FitScreen.GetTopSafeArea();
		float num = (float)(Display.DesignScreenHeight / 2) - topSafeArea - (BagNode.sizeDelta.y / 2f + ((Transform)BagNode).localPosition.y) - GameLevelViewLogic.TopUIHeight;
		if (num > ItemNode.sizeDelta.y)
		{
			float num2 = localPosition.y + (num - ItemNode.sizeDelta.y) / 2f;
			num2 = ((num2 > 423f) ? 423f : num2);
			((Transform)ItemNode).localPosition = new Vector3(localPosition.x, num2, localPosition.z);
		}
		float num3 = 101f;
		float num4 = 5f;
		float num5 = (float)(Display.DesignScreenHeight / 2) - (BagNode.sizeDelta.y / 2f - ((Transform)BagNode).localPosition.y) - num3 - num4 * 2f;
		if (num5 < TagNode.sizeDelta.y)
		{
			float num6 = num5 / TagNode.sizeDelta.y;
			num6 = ((num6 > 1f) ? 1f : num6);
			((Transform)TagNode).localScale = Vector3.one * num6;
			float num7 = (1f - num6) * TagNode.sizeDelta.y * 0.5f;
			((Transform)TagNode).localPosition = new Vector3(localPosition2.x, localPosition2.y + num7, localPosition2.y);
			TagViewLogic.SetScale(num6);
		}
		else
		{
			TagViewLogic.SetScale(1f);
		}
		float num8 = (float)Display.DesignScreenWidth / (Background.sizeDelta.x - 5f);
		float num9 = (float)Display.DesignScreenHeight / (Background.sizeDelta.y - 5f);
		float num10 = num8;
		if (num9 > num8)
		{
			num10 = num9;
		}
		if (num10 < 1f)
		{
			num10 = 1f;
		}
		((Transform)Background).localScale = Vector3.one * num10;
	}

	public void OpenSortView()
	{
		ClearUndoGoodsAndInfo();
		BagSortViewData data = new BagSortViewData();
		ViewManager.GetInstance().ShowView<BagSortViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
	}

	public override void UpdateTagView()
	{
		if ((Object)(object)TagViewLogic != (Object)null)
		{
			TagViewLogic.UpdateView(mTotalPage, mTotalGeneratorPage);
		}
		((Component)TagViewLogic).gameObject.SetSelfActive(mTotalPage + mTotalGeneratorPage > 1);
	}

	private void PlayPutInEffect(float delay = 0f)
	{
		if (GameLevelDefine.PutInGoodsList == null || GameLevelDefine.PutInGoodsList.Count <= 0)
		{
			return;
		}
		List<GameGoodsVo> removeList = new List<GameGoodsVo>();
		foreach (BagGrid item in GridObject.Values)
		{
			if ((Object)(object)item == (Object)null)
			{
				continue;
			}
			GameGoodsVo goodsVo = item.GetGameGoodsVo();
			if (goodsVo != null && GameLevelDefine.PutInGoodsList.Exists((GameGoodsVo g) => g.goodsID == goodsVo.goodsID && g.UUID == goodsVo.UUID))
			{
				((Component)item).gameObject.SetSelfActive(active: false);
				TimeManager.Instance.Schedule(this, (float dt) =>
				{
					((Component)item).gameObject.SetSelfActive(active: true);
					item.PlayPutInEffect();
				}, delay, 1);
				removeList.Add(goodsVo);
			}
		}
		GameLevelDefine.PutInGoodsList.RemoveAll((GameGoodsVo g) => removeList.Exists((GameGoodsVo r) => r.goodsID == g.goodsID && r.UUID == g.UUID));
		TimeManager.Instance.Schedule(this, (float dt) =>
		{
			AudioManager.Instance.PlayEffect("숎끕疶琏杫\"Ú叙蛫\u009f赴");
		}, delay, 1);
	}

	public override void ShowDragHint(int pageIndex)
	{
		if ((Object)(object)TagViewLogic != (Object)null)
		{
			TagViewLogic.ShowDragHint(pageIndex);
		}
	}

	public override void HideDragHint()
	{
		if ((Object)(object)TagViewLogic != (Object)null)
		{
			TagViewLogic.HideDragHint();
		}
	}

	public void OnClickDetail()
	{
		Singleton<GameLevelManager>.Instance.ShowItemDetails(1007);
	}

	[AsyncStateMachine(typeof(_003CApplySkinAsync_003Ed__25))]
	public UniTask ApplySkinAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CApplySkinAsync_003Ed__25 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CApplySkinAsync_003Ed__25>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public UniTask RefreshSkinAsync()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		return ApplySkinAsync();
	}

	public new void EnterAnimation(Action onComplete)
	{
		isPlayAnim = true;
		string text = "숼끛瞾弽䉝7â叡숵끟澮眶乇:Â叁刟熿\ud9f7ŝ";
		AnimationClip clip = ViewAnimation.GetClip(text);
		if (Object.op_Implicit((Object)(object)clip))
		{
			ViewAnimation.Play(text);
			TimeManager.GetInstance().Schedule(this, (float arg0) =>
			{
				onComplete.InvokeGracefully();
				isPlayAnim = false;
			}, clip.length, 1);
		}
		EventManager.GetInstance().DispatchEvent(203141, 0.1f);
	}

	public new void ExitAnimation(Action onComplete)
	{
		string text = "숼끛瞾弽䉝7â叡숵끟斮父乛$\u009a厙刟熿\ud9f7ŝ";
		AnimationClip clip = ViewAnimation.GetClip(text);
		if (Object.op_Implicit((Object)(object)clip))
		{
			ViewAnimation.Play(text);
			TimeManager.GetInstance().Schedule(this, (float arg0) =>
			{
				onComplete.InvokeGracefully();
			}, clip.length, 1);
		}
	}
}
