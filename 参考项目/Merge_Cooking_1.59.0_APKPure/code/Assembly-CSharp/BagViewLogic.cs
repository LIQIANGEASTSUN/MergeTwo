using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using TLF;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

[PrefabPath("BagView")]
public class BagViewLogic : BaseViewLogic
{
	public static int column = 7;

	public static int row = 7;

	protected static float GridWidth = 86f;

	protected static float GridHeight = 86f;

	private List<BagGridBg> mMapBgGo;

	protected Dictionary<int, BagGrid> GridObject = new Dictionary<int, BagGrid>();

	private Dictionary<int, BagItemIconLogic> mBagItemLogicDic = new Dictionary<int, BagItemIconLogic>();

	private BagGrid currentSelect;

	private BagGrid mSellGrid;

	private GameGoodsVo mSellGoods;

	private BagGrid mStackSellGrid;

	private int mCurrentGoodsNum;

	protected int mTotalPage;

	protected int mTotalGeneratorPage;

	protected int mCurrentPage = 1;

	protected int mInitLimitBag;

	public RectTransform BagNode;

	public RectTransform ItemNode;

	public RectTransform TagNode;

	public RectTransform BottomNode;

	public Text TitleText;

	public Text TitleText_B;

	public Text GeneratorDescText;

	public Text CardText;

	public Text CapacityText;

	public Transform GridBgParent;

	public Transform GridParent;

	public Button BackButton;

	public RectTransform BackTransform;

	public Button LevelButton;

	public RectTransform LevelTransform;

	public GameObject LeftButton;

	public GameObject RightButton;

	public Transform ItemParent;

	public BagGoodsInfoViewLogic GoodsInfoViewLogic;

	[Header("背包格子礼包")]
	public RectTransform BagGridGiftNode;

	public Image BagGiftIcon;

	public Text BagGiftTimeText;

	public Text BagUsingText;

	public GameObject UsingNode;

	[Header("生成器收纳")]
	public GameObject BagGeneratorStorageNode;

	public BagGeneratorStorageLogic GeneratorStorageLogic;

	public BagButtonAni bagButtonAni;

	public virtual TopUIInfoType[] TopSub => new TopUIInfoType[5]
	{
		TopUIInfoType.EXP,
		TopUIInfoType.LIGHTING,
		TopUIInfoType.COIN,
		TopUIInfoType.MONEY,
		TopUIInfoType.SHOP
	};

	public BagGrid CurrentSelectGrid
	{
		get
		{
			return currentSelect;
		}
		set
		{
			currentSelect = value;
			if ((Object)(object)currentSelect == (Object)null)
			{
				AudioManager.Instance.StopInstrumentSound();
			}
			if ((Object)(object)currentSelect != (Object)null)
			{
				mSellGoods = null;
				mSellGrid = null;
				if ((Object)(object)mStackSellGrid != (Object)null)
				{
					mStackSellGrid.SetSelectState(select: false);
					mStackSellGrid = null;
				}
				((Component)currentSelect).transform.SetSiblingIndex(((Component)currentSelect).transform.parent.childCount - 1);
			}
			UpdateSelectGoodsInfo();
		}
	}

	public BagGrid StackSellGrid
	{
		get
		{
			return mStackSellGrid;
		}
		set
		{
			mStackSellGrid = value;
		}
	}

	public Dictionary<int, BagGrid> GridObjectDic => GridObject;

	public override void OnEnter()
	{
		Singleton<GameLevelManager>.Instance.PlayAudio(14);
		Singleton<GameLevelManager>.Instance.UpateGameBag();
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			GoodsInfoViewLogic.SetParentLogic(this);
		}
		GameBagFit();
		InitData();
		mInitLimitBag++;
		ObjectManager.GetInstance().gameLevelModel.CheckGameBagLimitOpenNum();
		InitItemData();
		CreateGameGrid(isFirstCreate: true);
		UpdateSelectGoodsInfo();
		AddEventListener();
		UpdatePageButton();
		PlayUnlockBagGrid();
		PlayUnlockGeneratorBagGrid();
		MonoSingleton<GuideManager>.Instance.SetBagView(this);
		TimeUpdate();
		if (Singleton<GameLevelManager>.Instance.GetBagGoodsNum() >= Singleton<GameLevelManager>.Instance.GetGameBagOpenNum() + Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum())
		{
			Singleton<PopupManager>.Instance.ResetShowPopups(EPopupFromScene.S_BagGrid_Deficiency_EneterBagView);
		}
		Singleton<GameLevelManager>.Instance.OnAnalyticBagView("숄끊憼朅潫0\u008a厉");
	}

	private void TimeUpdate()
	{
		if ((Object)(object)BagGiftTimeText != (Object)null)
		{
			BagGiftTimeText.text = ObjectManager.GetInstance().bagGiftModel.GetTimeDownIntervalStr();
		}
	}

	public override void OnExit()
	{
		currentSelect = null;
		if ((Object)(object)mStackSellGrid != (Object)null)
		{
			mStackSellGrid.SetSelectState(select: false);
			mStackSellGrid = null;
		}
		RemoveEventListener();
		RecoveryGridBg();
		RecoveryGrid();
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			GoodsInfoViewLogic.RecoveryMaterialItem();
		}
		Singleton<GameLevelManager>.Instance.PlayAudio(15);
		EventManager.GetInstance().DispatchEvent(100047);
	}

	public void AutoPopBagLimitExpireView()
	{
		if (ObjectManager.GetInstance().bagGiftModel.CanPopupExpireView())
		{
			ObjectManager.GetInstance().bagGiftModel.AutoPopBagLimitExpireView();
		}
	}

	protected virtual void GameBagFit()
	{
		//IL_000c: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ea: Unknown result type (might be due to invalid IL or missing references)
		//IL_0108: Unknown result type (might be due to invalid IL or missing references)
		//IL_0112: Unknown result type (might be due to invalid IL or missing references)
		//IL_0122: Unknown result type (might be due to invalid IL or missing references)
		//IL_0133: Unknown result type (might be due to invalid IL or missing references)
		//IL_014c: Unknown result type (might be due to invalid IL or missing references)
		((Transform)BottomNode).localPosition = new Vector3(((Transform)BottomNode).localPosition.x, ((Transform)BottomNode).localPosition.y + GameLevelViewLogic.BottomOffsetY_V2, ((Transform)BottomNode).localPosition.z);
		if (ABTestSwitchDefine.ChessboardFitSwitch())
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

	private void InitData()
	{
		mCurrentGoodsNum = Singleton<GameLevelManager>.Instance.GetBagGoodsNum();
		CapacityText.text = string.Format("ꋞú赴", mCurrentGoodsNum);
		UpdateTotalPage();
		if (ObjectManager.GetInstance().userDataModel.UnlockBagTotal > 0 || ObjectManager.GetInstance().userDataModel.UnlockLimitBagTotal > 0)
		{
			mCurrentPage = mTotalPage;
		}
		else if (ObjectManager.GetInstance().userDataModel.UnlockGeneratorBagTotal > 0)
		{
			mCurrentPage = mTotalPage + ObjectManager.GetInstance().bagGeneratorStorageModel.GetAllNewBagItemShowTab();
			ObjectManager.GetInstance().bagGeneratorStorageModel.ClearNewBagItemShowTabList();
		}
		else
		{
			mCurrentPage = 1;
		}
	}

	protected virtual void UpdateTotalPage()
	{
		int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
		int gameBagLimitOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum();
		int bagMaxinum = Singleton<GameLevelManager>.Instance.GetBagMaxinum();
		if (gameBagOpenNum + gameBagLimitOpenNum >= bagMaxinum)
		{
			mTotalPage = Mathf.CeilToInt((float)(gameBagOpenNum + gameBagLimitOpenNum) / (float)(row * column));
		}
		else
		{
			mTotalPage = Mathf.CeilToInt((float)(gameBagOpenNum + gameBagLimitOpenNum + 1) / (float)(row * column));
		}
	}

	public virtual void UpdateTagView()
	{
	}

	private void AddEventListener()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Expected Obj, but got Unknown
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0038: Expected Obj, but got Unknown
		((UnityEvent)BackButton.onClick).AddListener((UnityAction)OnBackClick);
		((UnityEvent)LevelButton.onClick).AddListener((UnityAction)OnLevelClick);
		EventManager.GetInstance().AddEventListener(100052, OnUpgradleSuccess);
		EventManager.GetInstance().AddEventListener(100055, OnUpgradleSuccess);
		EventManager.GetInstance().AddEventListener(100239, OnCloseViewByNet);
		EventManager.GetInstance().AddEventListener<int>(100014, OnItemChange);
		TopUIViewLogic.PushSub(new TopViewSubCell
		{
			cKey = ((Component)this).gameObject,
			uiList = TopSub
		});
		MainUIViewLogic.PushSub(new MainUIViewSubCell
		{
			cKey = ((Component)this).gameObject,
			visibleType = MainUIInfoType.EMPTY
		});
		EventManager.GetInstance().AddEventListener(100250, IapSuccessClaimRewardCall);
		EventManager.GetInstance().AddEventListener(100002, TimeUpdate);
		EventManager.GetInstance().AddEventListener(202100, ClearUndoGoods);
		EventManager.GetInstance().AddEventListener(203019, OnSortUpdate);
	}

	public void ClearUndoGoods()
	{
		if (mSellGoods != null || (Object)(object)mSellGrid != (Object)null)
		{
			mSellGoods = null;
			mSellGrid = null;
		}
		if ((Object)(object)mStackSellGrid != (Object)null)
		{
			mStackSellGrid.SetSelectState(select: false);
			mStackSellGrid = null;
		}
		CurrentSelectGrid = null;
		UpdateSelectGoodsInfo();
	}

	protected void ClearUndoGoodsAndInfo()
	{
		if (mSellGoods != null || (Object)(object)mSellGrid != (Object)null)
		{
			mSellGoods = null;
			mSellGrid = null;
			CurrentSelectGrid = null;
			UpdateSelectGoodsInfo();
		}
		if ((Object)(object)mStackSellGrid != (Object)null)
		{
			mStackSellGrid.SetSelectState(select: false);
			mStackSellGrid = null;
		}
	}

	private void RemoveEventListener()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Expected Obj, but got Unknown
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0038: Expected Obj, but got Unknown
		((UnityEvent)BackButton.onClick).RemoveListener((UnityAction)OnBackClick);
		((UnityEvent)LevelButton.onClick).RemoveListener((UnityAction)OnLevelClick);
		EventManager.GetInstance().RemoveEventListener(100052, OnUpgradleSuccess);
		EventManager.GetInstance().RemoveEventListener(100055, OnUpgradleSuccess);
		EventManager.GetInstance().RemoveEventListener(100239, OnCloseViewByNet);
		EventManager.GetInstance().RemoveEventListener<int>(100014, OnItemChange);
		TopUIViewLogic.PopSub(((Component)this).gameObject);
		MainUIViewLogic.PopSub(((Component)this).gameObject);
		EventManager.GetInstance().RemoveEventListener(100250, IapSuccessClaimRewardCall);
		EventManager.GetInstance().RemoveEventListener(100002, TimeUpdate);
		EventManager.GetInstance().RemoveEventListener(202100, ClearUndoGoods);
		EventManager.GetInstance().RemoveEventListener(203019, OnSortUpdate);
	}

	public void InitItemData()
	{
		//IL_01f8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cc: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f9: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)ItemNode != (Object)null && IsShowBagGift())
		{
			bool flag = ObjectManager.GetInstance().bagGiftModel.Is_InGiftPeriod() && ObjectManager.GetInstance().bagGiftModel.mBagDynamicGift != null;
			bool bagLimitIsShow = ObjectManager.GetInstance().gameLevelModel.GetBagLimitIsShow();
			IBagGiftABGroupVO bagLimitABGroupVO = ObjectManager.GetInstance().bagGiftModel.GetBagLimitABGroupVO();
			flag |= bagLimitIsShow;
			BagGridGiftNode.SetSelfActive<RectTransform>(flag);
			UsingNode.SetSelfActive(bagLimitIsShow);
			float num = 466f;
			float num2 = 588f;
			((Transform)ItemNode).localPosition = new Vector3(flag ? ((num2 - num) / 2f) : 0f, ((Transform)ItemNode).localPosition.y, ((Transform)ItemNode).localPosition.z);
			RectTransform itemNode = ItemNode;
			float num3 = (flag ? num : num2);
			Rect rect = ItemNode.rect;
			itemNode.sizeDelta = new Vector2(num3, rect.height);
			string name = "숈끓枆椉畕5¢厡숏끎犆愐晚&Î反럦·赴";
			if ((bagLimitABGroupVO != null && ObjectManager.GetInstance().bagGiftModel.HasLimitBag() && (bagLimitABGroupVO.limitTime > 0 || bagLimitABGroupVO.isCanExtend == 1)) | bagLimitIsShow)
			{
				name = "숈끓枆椉畕5¢厡숏끎犆愐晚&Î反刖梷\ud9c6Ć";
			}
			BagGiftIcon.sprite = base.Load<Sprite>(name);
			((Graphic)BagGiftIcon).SetNativeSize();
			if (bagLimitIsShow)
			{
				BagGiftTimeText.text = ObjectManager.GetInstance().bagGiftModel.GetTimeDownIntervalStr();
			}
		}
		else
		{
			BagGridGiftNode.SetSelfActive<RectTransform>(false);
		}
		List<int> list = new List<int> { 1007 };
		GameObject val = base.Load<GameObject>("숣끛涾䤤䉀7º厹뫫\u0087赴");
		if ((Object)(object)val == (Object)null)
		{
			return;
		}
		for (int i = 0; i < list.Count; i++)
		{
			GameObject val2 = Object.Instantiate<GameObject>(val);
			val2.transform.SetParent(ItemParent);
			val2.transform.LocalIdentity<Transform>();
			val2.transform.localPosition = new Vector3((float)(119 * i), 0f, 0f);
			BagItemIconLogic component = val2.GetComponent<BagItemIconLogic>();
			if ((Object)(object)component != (Object)null)
			{
				component.Init(list[i], resLoader);
			}
			if (mBagItemLogicDic.ContainsKey(list[i]))
			{
				mBagItemLogicDic[list[i]] = component;
			}
			else
			{
				mBagItemLogicDic.Add(list[i], component);
			}
		}
		long itemNum = ObjectManager.GetInstance().itemDataModel.GetItemNum(1007);
		CardText.text = itemNum.ToString();
	}

	private bool IsShowBagGift()
	{
		if (ObjectManager.GetInstance().bagGeneratorStorageModel.GetBagNewUISwitch())
		{
			return false;
		}
		if (ABTestSwitchDefine.GeneratorCollectionSwitch() || ABTestSwitchDefine.NewBagUISwitch())
		{
			return false;
		}
		return true;
	}

	private void OnItemChange(int itemId)
	{
		if (mBagItemLogicDic != null && mBagItemLogicDic.TryGetValue(itemId, out var value))
		{
			value.UpdateItemNum();
		}
	}

	protected virtual void OnCloseViewByNet()
	{
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetLocalizationFontSize(BagUsingText);
		LocalizedLang.SetLocalizationFontSize(BagGiftTimeText);
		LocalizedLang.SetUITextLocalization(TitleText, "숼끛瞾弽䉝7â叡匰橩ā讱豥");
		LocalizedLang.SetUITextLocalization(TitleText_B, "숼끛瞾弽䉝7â叡匰橩ā讱豥");
		LocalizedLang.SetUITextLocalization(BagUsingText, "숁끛掺欂扄3\u0092厑숌끕徿甍彑 \u0082厁刟熟\ud9dbœ");
		LocalizedLang.SetUITextLocalization(GeneratorDescText, "숸끛榾爹䉑&ª厩녥䡟㙦\0逓\ud95b");
	}

	public void SetUndoGoods(BagGrid grid, GameGoodsVo goodsVo)
	{
		mSellGrid = grid;
		mSellGoods = goodsVo;
	}

	public void UpdateGameBag()
	{
		mInitLimitBag++;
		RecoveryGrid();
		CreateGameGrid();
		PlayUnlockBagGrid();
		PlayUnlockGeneratorBagGrid();
	}

	public virtual void OnSortUpdate()
	{
		RecoveryGrid();
		CreateGameGrid();
	}

	public virtual bool CheckInTaskGoods(int id)
	{
		if (ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersGoodsIDs != null && ObjectManager.GetInstance().gameOrdersModel.GameLevelOrdersGoodsIDs.Contains(id))
		{
			return true;
		}
		if (ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersGoodsIDs != null && ObjectManager.GetInstance().raceWinnerOrderModel.GameLevelOrdersGoodsIDs.Contains(id))
		{
			return true;
		}
		if (MonoSingleton<OrderActivityCacheManager>.Instance.HasGoodsID_TotalOrderMat_StillNeed(id))
		{
			return true;
		}
		return false;
	}

	public virtual bool CheckInBingoGoods(int id)
	{
		if (ObjectManager.GetInstance().bingoModel.BingoSurplusGridGoodsIDList != null)
		{
			return ObjectManager.GetInstance().bingoModel.BingoSurplusGridGoodsIDList.Contains(id);
		}
		return false;
	}

	private void CreateMapBg()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_009b: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
		BagGridBg bagGridBg = null;
		Vector3 zero = Vector3.zero;
		int num = 0;
		mMapBgGo = new List<BagGridBg>();
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				bagGridBg = Singleton<ResCacheManager>.Instance.GetRes<BagGridBg>();
				if ((Object)(object)bagGridBg == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔枽䝋楶3¢厡녲呩ᄦ\0郑\ud925");
					continue;
				}
				((Object)bagGridBg).name = "숭끛撾弮䉆;\u0096厕鯼§赴" + num;
				((Component)bagGridBg).transform.SetParent(GridBgParent);
				bagGridBg.LocalIdentity<BagGridBg>();
				bagGridBg.Init(num, this);
				zero = new Vector3((float)(j - column) * GridWidth, (float)(i + 1) * GridHeight);
				((Component)bagGridBg).transform.localPosition = zero;
				mMapBgGo.Add(bagGridBg);
				num++;
			}
		}
	}

	public virtual void CreateGameGrid(bool isFirstCreate = false)
	{
		//IL_0019: Unknown result type (might be due to invalid IL or missing references)
		//IL_001e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		Dictionary<int, GameGoodsVo> gameBagMap = Singleton<GameLevelManager>.Instance.GetGameBagMap(copyData: false);
		GridObject = new Dictionary<int, BagGrid>();
		BagGrid bagGrid = null;
		Vector3 zero = Vector3.zero;
		int num = row * column * (mCurrentPage - 1);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				bagGrid = Singleton<ResCacheManager>.Instance.GetRes<BagGrid>();
				if ((Object)(object)bagGrid == (Object)null)
				{
					Log.E("숤끕\u20f9䘥䑛&\u0085厄쉊끔枽䝋楶3¢厡숦끓榽挧牛5ª厩뺽");
					continue;
				}
				((Object)bagGrid).name = "숭끛撾弮䉆;\u0096厕" + num;
				((Component)bagGrid).transform.SetParent(GridParent);
				bagGrid.LocalIdentity<BagGrid>();
				zero = new Vector3((float)(j - column) * GridWidth, (float)(i + 1) * GridHeight);
				((Component)bagGrid).transform.localPosition = zero;
				GameGoodsVo goodsBase = null;
				if (gameBagMap != null && gameBagMap.ContainsKey(num))
				{
					goodsBase = gameBagMap[num];
				}
				bagGrid.Init(num, goodsBase, this, BagGridType.Item);
				GridObject.Add(num, bagGrid);
				bagGrid.SetSelfActive<BagGrid>(true);
				num++;
			}
		}
	}

	public void UpdateSelectGoodsInfo()
	{
		if ((Object)(object)GoodsInfoViewLogic != (Object)null)
		{
			if (mSellGoods != null && (Object)(object)mSellGrid != (Object)null)
			{
				GoodsInfoViewLogic.UpdateInfo(mSellGrid, mSellGoods, isUndo: true);
			}
			else if ((Object)(object)CurrentSelectGrid != (Object)null)
			{
				GoodsInfoViewLogic.UpdateInfo(CurrentSelectGrid, CurrentSelectGrid.GetGameGoodsVo());
			}
			else
			{
				GoodsInfoViewLogic.UpdateInfo(null, null);
			}
		}
	}

	public void UpdateCapacity(int num = 0)
	{
		mCurrentGoodsNum += num;
		CapacityText.text = string.Format("ꋞú赴", mCurrentGoodsNum);
		UpdateTotalPage();
		UpdatePageButton();
	}

	public virtual void OnNextPage()
	{
		ClearUndoGoods();
		if (mCurrentPage < mTotalPage + mTotalGeneratorPage)
		{
			mCurrentPage++;
			UpdateGameBag();
		}
		UpdatePageButton();
	}

	public virtual void OnPrePage()
	{
		ClearUndoGoods();
		if (mCurrentPage > 1)
		{
			mCurrentPage--;
			UpdateGameBag();
		}
		UpdatePageButton();
	}

	public void OnNextPageByPage(int addPage)
	{
		mCurrentPage = Math.Min(mCurrentPage + addPage, mTotalPage + mTotalGeneratorPage);
		UpdateGameBag();
		UpdatePageButton();
	}

	public void OnJumpPage(int page)
	{
		if (mCurrentPage != page && page >= 1 && page <= mTotalPage + mTotalGeneratorPage)
		{
			ClearUndoGoods();
			mCurrentPage = page;
			UpdateGameBag();
			UpdatePageButton();
		}
	}

	public int GetCurrentPage()
	{
		return mCurrentPage;
	}

	public void PlayInstrumentSound(BagGrid selectGrid)
	{
		if ((Object)(object)selectGrid == (Object)null)
		{
			return;
		}
		GameGoodsVo gameGoodsVo = selectGrid.GetGameGoodsVo();
		if (gameGoodsVo == null || gameGoodsVo.GoodsState != GameGoodsState.Working)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVoById == null)
		{
			return;
		}
		int makingTimeByGameGoods = Singleton<GameLevelManager>.Instance.GetMakingTimeByGameGoods(gameGoodsVo);
		if (!ServerTimeManager.VerifyTime(selectGrid.GetGameGoodsVo().MakingStarTime, makingTimeByGameGoods))
		{
			string instrumentSound = Singleton<GameLevelManager>.Instance.GetInstrumentSound(goodsBaseVoById);
			AudioManager.Instance.PlayInstrumentSound(instrumentSound);
			object obj;
			if (selectGrid == null)
			{
				obj = null;
			}
			else
			{
				BagGridItem bagGridItem = selectGrid.GetBagGridItem();
				obj = ((bagGridItem != null) ? ((Component)bagGridItem).GetComponent<AniButton>() : null);
			}
			AniButton aniButton = (AniButton)obj;
			if ((Object)(object)aniButton != (Object)null)
			{
				aniButton.SetSkipNextClickSound(_skip: true);
			}
		}
	}

	private void UpdatePageButton()
	{
		if (mCurrentPage > 1)
		{
			LeftButton?.SetSelfActive(active: true);
		}
		else
		{
			LeftButton?.SetSelfActive(active: false);
		}
		if (mCurrentPage < mTotalPage + mTotalGeneratorPage)
		{
			RightButton?.SetSelfActive(active: true);
		}
		else
		{
			RightButton?.SetSelfActive(active: false);
		}
	}

	private void OnUpgradleSuccess()
	{
		UpdateGameBag();
		UpdateCapacity();
		PlayUnlockBagGrid();
		PlayUnlockGeneratorBagGrid();
		UpdateTagView();
	}

	private void PlayUnlockBagGrid()
	{
		if (ObjectManager.GetInstance().userDataModel.UnlockBagTotal <= 0 && ObjectManager.GetInstance().userDataModel.UnlockLimitBagTotal <= 0)
		{
			return;
		}
		int unlockBagTotal = ObjectManager.GetInstance().userDataModel.UnlockBagTotal;
		int unlockLimitBagTotal = ObjectManager.GetInstance().userDataModel.UnlockLimitBagTotal;
		bool num = mInitLimitBag == 1 && unlockBagTotal > 0 && unlockLimitBagTotal <= 0;
		int gameBagOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagOpenNum();
		int gameBagLimitOpenNum = Singleton<GameLevelManager>.Instance.GetGameBagLimitOpenNum();
		int num2 = gameBagOpenNum + gameBagLimitOpenNum;
		int num3 = unlockBagTotal;
		if (unlockLimitBagTotal > 0)
		{
			num3 = unlockBagTotal + unlockLimitBagTotal;
		}
		if (num)
		{
			for (int i = 1; i <= num3; i++)
			{
				BagGrid value = null;
				if (GridObject.TryGetValue(gameBagOpenNum - i, out value))
				{
					value.PlayBubbleBroken();
				}
			}
		}
		else
		{
			for (int j = 1; j <= num3; j++)
			{
				BagGrid value2 = null;
				if (GridObject.TryGetValue(num2 - j, out value2))
				{
					value2.PlayBubbleBroken();
				}
			}
		}
		ObjectManager.GetInstance().userDataModel.UnlockBagTotal = 0;
		ObjectManager.GetInstance().userDataModel.UnlockLimitBagTotal = 0;
		ObjectManager.GetInstance().userDataModel.ShowBagTotal = 0;
		ObjectManager.GetInstance().userDataModel.ShowLimitBagTotal = 0;
		EventManager.GetInstance().DispatchEvent(100198);
	}

	private void PlayUnlockGeneratorBagGrid()
	{
		if (ObjectManager.GetInstance().userDataModel.UnlockGeneratorBagTotal <= 0)
		{
			return;
		}
		List<int> openIds = ObjectManager.GetInstance().bagGeneratorStorageModel.GetNewBagItemShowOpenIds();
		int i;
		for (i = 0; i < openIds.Count; i++)
		{
			KeyValuePair<int, BagGrid> keyValuePair = GridObject.FirstOrDefault((KeyValuePair<int, BagGrid> x) => x.Value.GetGridId() == openIds[i]);
			if (!((Object)(object)keyValuePair.Value == (Object)null))
			{
				keyValuePair.Value?.PlayGeneratorBubbleBroken();
			}
		}
		ObjectManager.GetInstance().userDataModel.UnlockGeneratorBagTotal = 0;
		ObjectManager.GetInstance().userDataModel.ShowGeneratorBagTotal = 0;
		ObjectManager.GetInstance().bagGeneratorStorageModel.ClearNewBagItemShowOpenIds();
		EventManager.GetInstance().DispatchEvent(100198);
	}

	public void DelayShowGrid(int gridID)
	{
		for (int i = 1; i <= 2; i++)
		{
			BagGrid value = null;
			if (GridObject.TryGetValue(gridID + i, out value))
			{
				value.DelayShow();
			}
		}
	}

	private void OnLevelClick()
	{
		if (!MonoSingleton<GuideManager>.Instance.ButtonTouch)
		{
			CloseViewAin();
			ObjectManager.GetInstance().gameLevelModel.CheckGameBagLimitOpenNum();
			AutoPopBagLimitExpireView();
			AudioManager.Instance.StopInstrumentSound();
			EventManager.GetInstance().DispatchEvent(100201);
			Singleton<GameLevelManager>.Instance.OnAnalyticBagView("숙끖抶愚捑\r\u008e厍숏끥犫渐杀'Î反녟䝢㈰\0途\ud95b");
			Singleton<GameLevelManager>.Instance.IsCloseFromBagView = false;
		}
	}

	private void OnBackClick()
	{
		EventManager.GetInstance().DispatchEvent(100046, arg: false);
		CloseViewAin();
		AudioManager.Instance.StopInstrumentSound();
		Singleton<PopupManager>.Instance.ResetShowPopups(EPopupFromScene.S_MainUIView);
		Singleton<GameLevelManager>.Instance.OnAnalyticBagView("숙끖抶愚捑\r\u008e厍숏끥犫渐杀'Î反医橨ā讵靥");
		Singleton<GameLevelManager>.Instance.IsCloseFromBagView = true;
	}

	private bool CheckCanSellGoods(int goodsID)
	{
		if (IGoodsBaseVo.CannotDrag(CurrentSelectGrid.GetGameGoodsVo().GoodsState))
		{
			return false;
		}
		if (CurrentSelectGrid.GetGameGoodsVo().GoodsState == GameGoodsState.Bubble)
		{
			return false;
		}
		if (CurrentSelectGrid.GetGameGoodsVo().GoodsState == GameGoodsState.Working)
		{
			return false;
		}
		if (CurrentSelectGrid.GetGameGoodsVo().MakeMaterials.Count > 0)
		{
			return false;
		}
		IGoodsPriceVo goodsPriceVoById = Singleton<GameLevelManager>.Instance.GetGoodsPriceVoById(goodsID);
		if (goodsPriceVoById != null && goodsPriceVoById.sell >= 0 && Singleton<GameLevelManager>.Instance.CheckGoodsCanSell(goodsID))
		{
			return true;
		}
		return false;
	}

	public override bool OnBackPressed()
	{
		OnLevelClick();
		return true;
	}

	public override void OnAutoClose()
	{
		CloseView();
	}

	private void RecoveryGridBg()
	{
		if (mMapBgGo == null)
		{
			return;
		}
		for (int i = 0; i < mMapBgGo.Count; i++)
		{
			if ((Object)(object)mMapBgGo[i] != (Object)null)
			{
				mMapBgGo[i].Recovery();
			}
		}
	}

	private void RecoveryGrid()
	{
		Dictionary<int, BagGrid>.Enumerator enumerator = GridObject.GetEnumerator();
		while (enumerator.MoveNext())
		{
			BagGrid value = enumerator.Current.Value;
			if ((Object)(object)value != (Object)null)
			{
				value.Recovery();
			}
		}
	}

	public void GoodsFlyToGame(Transform startTrans, Transform endTrans, int goodsId)
	{
		//IL_0030: Unknown result type (might be due to invalid IL or missing references)
		//IL_0036: Expected Obj, but got Unknown
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bf: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c9: Expected Obj, but got Unknown
		if ((Object)(object)startTrans == (Object)null || (Object)(object)endTrans == (Object)null)
		{
			return;
		}
		IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsId);
		if (goodsBaseVoById != null)
		{
			GameObject val = new GameObject();
			Image flyImage = val.AddComponent<Image>();
			((Component)flyImage).transform.SetParent(((Component)this).transform);
			flyImage.LocalIdentity<Image>();
			Singleton<GameLevelManager>.Instance.SetGoodsIcon(flyImage, goodsBaseVoById, resLoader);
			((Component)flyImage).transform.position = startTrans.position;
			TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOMove(((Component)flyImage).transform, endTrans.position, 0.3f, false)), (TweenCallback)(() =>
			{
				Object.Destroy((Object)(object)((Component)flyImage).gameObject);
				flyImage = null;
				bagButtonAni.PlayBagPutOutEffect();
			})), true);
		}
	}

	private void IapSuccessClaimRewardCall()
	{
		UpdateGameBag();
		UpdateCapacity();
		UpdateTagView();
		EventManager.GetInstance().DispatchEvent(100047);
	}

	public void OnClickBagGift()
	{
		EBagGiftType eBagGiftType = EBagGiftType.Null;
		IBagGiftABGroupVO currentBagLimitABGroupVO = ObjectManager.GetInstance().bagGiftModel.GetCurrentBagLimitABGroupVO();
		if ((Object)(object)UsingNode != (Object)null && UsingNode.gameObject.activeSelf)
		{
			eBagGiftType = EBagGiftType.Extend;
			if (StaticDataBase<StaticDataManager>.GetInstance().getConfigConstant("숦끛榾琧䉝?ª厩숞끓斿渟䝻\"\u009a厙").ToInt() == 0)
			{
				ViewManager.Instance.ShowTip("숁끛掺欂扄3\u0092厑숌끕徿挍彑 \u0082厁숈끔徭琉慁+\u0082厁냘û赴");
				return;
			}
			if (currentBagLimitABGroupVO != null && currentBagLimitABGroupVO.limitTime <= 0 && currentBagLimitABGroupVO.isCanExtend == 0)
			{
				ViewManager.Instance.ShowTip("숁끛掺欂扄3\u0092厑숌끕徿挍彑 \u0082厁숈끔徭琉慁+\u0082厁냘û赴");
				return;
			}
		}
		if (ObjectManager.GetInstance().gameLevelModel.GetBagLimitIsShow() && !ObjectManager.GetInstance().bagGiftModel.IsPayLimitBag())
		{
			ViewManager.Instance.ShowTip("숁끛掺欂扄3\u0092厑숌끕徿挍彑 \u0082厁숈끔徭琉慁+\u0082厁냘û赴");
		}
		else
		{
			BagGiftViewLogic.Show(autoPop: false, eBagGiftType);
		}
	}

	public void EnterAnimation(Action onComplete)
	{
		DOTweenUITools.DoEnterPopPlayAudio();
		onComplete.InvokeGracefully();
	}

	public void ExitAnimation(Action onComplete)
	{
		DOTweenUITools.DoExitPopPlayAudio();
		onComplete.InvokeGracefully();
	}

	public virtual void ShowDragHint(int pageIndex)
	{
	}

	public virtual void HideDragHint()
	{
	}
}
