using TLF;
using UnityEngine;
using UnityEngine.UI;

public class BagGridItem : ResBase
{
	public Image ItemIcon;

	public Image RightIcon;

	public Image BingoIcon;

	public Graphic DragIcon;

	public Image CanWorkingIcon;

	public GameObject WorkingIcon;

	public GameObject WorkingComplete;

	public GameObject MaterialInNoMaking;

	public Transform EffectParent;

	public Transform EffectFeverParent;

	public Text ItemNum;

	public Animation ItemIconAnim;

	public Transform GridItem;

	private GameGoodsVo mGameGoodsVo;

	private BagGrid mBagGrid;

	private IGoodsBaseVo mGoodsBaseVo;

	private GameObject mWorkingEffect;

	private BagGridType mGridType;

	private ItemAdditionalWidget mAdditionalWidget;

	private GridItemAni mItemAni;

	public void Init(GameGoodsVo goodsVo, BagGrid grid, BagGridType gridType)
	{
		mGameGoodsVo = goodsVo;
		mBagGrid = grid;
		mGridType = gridType;
		if (mGameGoodsVo == null)
		{
			Log.E("䉿\u033fꦊ\uef1e찫畂쩩\ud8b9");
		}
		else
		{
			InitItem();
		}
	}

	private void InitItem()
	{
		mGoodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(mGameGoodsVo.goodsID);
		if (mGoodsBaseVo != null)
		{
			UpdateIcon();
			UpdateItemNum();
		}
	}

	public void UpdateItemNum()
	{
		((Component)ItemNum).gameObject.SetSelfActive(active: false);
		if (mGameGoodsVo != null && mGridType == BagGridType.Generator)
		{
			int showBagAnimationRecord = ObjectManager.GetInstance().bagGeneratorStorageModel.GetShowBagAnimationRecord(mGameGoodsVo.goodsID);
			int gameGoodsVoNumById = ObjectManager.GetInstance().bagGeneratorStorageModel.GetGameGoodsVoNumById(mGameGoodsVo.goodsID);
			ItemNum.text = string.Format("勡㏗\ud9d0ŉ", gameGoodsVoNumById - showBagAnimationRecord);
			((Component)ItemNum).gameObject.SetSelfActive(gameGoodsVoNumById - showBagAnimationRecord > 1);
			if (showBagAnimationRecord > 0)
			{
				ShowItemAni();
			}
		}
	}

	public void UpdateIcon()
	{
		RightIcon.SetSelfActive<Image>(false);
		BingoIcon.SetSelfActive<Image>(false);
		Singleton<GameLevelManager>.Instance.SetGoodsIcon(ItemIcon, mGoodsBaseVo, resLoader);
		if ((Object)(object)mBagGrid != (Object)null && mBagGrid.CheckInTaskGoods(mGameGoodsVo.goodsID))
		{
			RightIcon.SetSelfActive<Image>(true);
		}
		if ((Object)(object)mBagGrid != (Object)null && mBagGrid.CheckInBingoGoods(mGameGoodsVo.goodsID))
		{
			BingoIcon.SetSelfActive<Image>(true);
		}
		if (GameLevelDefine.IsShowGoodsStackable(mGoodsBaseVo, mGameGoodsVo) && mGameGoodsVo.GoodsUses > 0)
		{
			showAdditionalNode(2, mGameGoodsVo.GoodsUses);
		}
		switch (mGameGoodsVo.GoodsState)
		{
		case GameGoodsState.CanWork:
			CanWorkingIcon.SetSelfActive<Image>(true);
			break;
		case GameGoodsState.Working:
			WorkingIcon.SetSelfActive(active: true);
			PlayMakingEffect();
			break;
		case GameGoodsState.InitiativeProduce:
			UpdateProduce();
			break;
		}
		if (mGameGoodsVo.MakeMaterials.Count > 0 && mGameGoodsVo.GoodsState != GameGoodsState.Working && mGoodsBaseVo.type != 25)
		{
			MaterialInNoMaking.SetSelfActive(active: true);
		}
		else
		{
			MaterialInNoMaking.SetSelfActive(active: false);
		}
	}

	public BagGrid GetGameLevelGrid()
	{
		return mBagGrid;
	}

	public void OnItemClick()
	{
		if (mGameGoodsVo != null && !IGoodsBaseVo.CannotMerge(mGameGoodsVo.GoodsState))
		{
			mBagGrid.OnSelectGrid(clickToGame: true);
		}
	}

	private void UpdateProduce()
	{
		if (mGoodsBaseVo != null && IGoodsBaseVo.IsInstrument(mGoodsBaseVo.type))
		{
			WorkingComplete.SetSelfActive(active: true);
		}
	}

	public void PlayMakingEffect()
	{
		if (mGoodsBaseVo == null || !((Object)(object)mWorkingEffect == (Object)null))
		{
			return;
		}
		bool flag = false;
		GameObject val = resLoader.LoadSync<GameObject>(mGoodsBaseVo.GetIcon() + "숌끟璿弍彑1Ö叕扲e4끬c䌱㫍");
		if ((Object)(object)val != (Object)null)
		{
			ItemIcon.SetSelfActive<Image>(false);
			flag = true;
		}
		else
		{
			val = resLoader.LoadSync<GameObject>(mGoodsBaseVo.GetIcon() + "晟e4끦g報㻜");
		}
		if (!((Object)(object)val == (Object)null))
		{
			mWorkingEffect = Object.Instantiate<GameObject>(val);
			if (flag)
			{
				mWorkingEffect.transform.SetParent(EffectParent);
			}
			else
			{
				mWorkingEffect.transform.SetParent(((Component)this).transform);
			}
			mWorkingEffect.transform.LocalIdentity<Transform>();
			mWorkingEffect.SetSelfActive(active: true);
		}
	}

	public void HideMakingEffect()
	{
		if ((Object)(object)mWorkingEffect != (Object)null)
		{
			Object.Destroy((Object)(object)mWorkingEffect);
			mWorkingEffect = null;
		}
		ItemIcon.SetSelfActive<Image>(true);
	}

	public override void Recovery()
	{
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_005f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0064: Unknown result type (might be due to invalid IL or missing references)
		base.Recovery();
		HideMakingEffect();
		MaterialInNoMaking.SetSelfActive(active: false);
		WorkingComplete.SetSelfActive(active: false);
		WorkingIcon.SetSelfActive(active: false);
		((Component)CanWorkingIcon).transform.localScale = Vector3.one;
		((Graphic)CanWorkingIcon).rectTransform.anchoredPosition = Vector2.op_Implicit(new Vector3(14f, -19f, 0f));
		CanWorkingIcon.SetSelfActive<Image>(false);
		destroyAdditionalNode();
		DestroyItemAni();
		GridItem.LocalIdentity<Transform>();
		DOTweenTools.SetUIOpacityCanvasGroup(GridItem, 1f);
	}

	private void showAdditionalNode(int pType, int pNum)
	{
		if ((Object)(object)mAdditionalWidget == (Object)null)
		{
			GameObject val = CreateGameObject("숇끎撼椈䥵6\u0096厕숄끓垶椅瑕>b卡刖梧\ud9ccŀ", ((Component)this).transform);
			if ((Object)(object)val != (Object)null)
			{
				mAdditionalWidget = val.GetComponent<ItemAdditionalWidget>();
			}
		}
		if ((Object)(object)mAdditionalWidget != (Object)null)
		{
			((Component)mAdditionalWidget).gameObject.SetSelfActive(active: true);
			mAdditionalWidget.Init(pType, pNum);
		}
	}

	private void hideAdditionalNode()
	{
		if ((Object)(object)mAdditionalWidget != (Object)null)
		{
			((Component)mAdditionalWidget).gameObject.SetSelfActive(active: false);
		}
	}

	private void destroyAdditionalNode()
	{
		if ((Object)(object)mAdditionalWidget != (Object)null)
		{
			((Component)mAdditionalWidget).gameObject.DestroySelf<GameObject>();
			mAdditionalWidget = null;
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

	private void ShowItemAni()
	{
		if ((Object)(object)mItemAni == (Object)null)
		{
			mItemAni = Singleton<ResCacheManager>.Instance.GetRes<GridItemAni>();
			if ((Object)(object)mItemAni != (Object)null)
			{
				mItemAni.Init(mGameGoodsVo);
				((Component)mItemAni).transform.SetParent(((Component)EffectFeverParent).transform);
				mItemAni.LocalIdentity<GridItemAni>();
			}
		}
		if ((Object)(object)mItemAni != (Object)null)
		{
			((Component)mItemAni).gameObject.SetSelfActive(active: true);
			mItemAni.PlayAni("숇끎澼済䥽1Â叁숏끛徫猐做&\u0082厁扨o4끟c䤾㫁", () =>
			{
				HideItemAni();
			}, 1f);
			TimeManager.GetInstance().Schedule(this, (float arg0) =>
			{
				UpdateItemNum();
			}, 0.366f, 1, 0f);
			AudioManager.Instance.StopEffect("숎끕疶琏杫\"Ú叙蛫\u009f赴");
			AudioManager.Instance.PlayEffect("숎끕疶琏杫\"Ú叙蛫\u009f赴");
		}
		ObjectManager.GetInstance().bagGeneratorStorageModel.ClearBagAnimationRecord(mGameGoodsVo.goodsID);
	}

	private void HideItemAni()
	{
		if ((Object)(object)mItemAni != (Object)null)
		{
			((Component)mItemAni).gameObject.SetSelfActive(active: false);
		}
	}

	private void DestroyItemAni()
	{
		if ((Object)(object)mItemAni != (Object)null)
		{
			mItemAni.Recovery();
			mItemAni = null;
		}
	}

	public void PlayItemPutInEffect()
	{
		if ((Object)(object)ItemIconAnim != (Object)null)
		{
			ItemIconAnim.Stop();
			ItemIconAnim.Play("숣끛涾䤤䉀7º厹숺끕斷渻捕 \u009a厙숂끥循愃瑛%\u0082厁显䥱");
		}
	}
}
