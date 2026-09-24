using TLF;
using UnityEngine;
using UnityEngine.UI;

public class GoodsChoiceItem : MonoBehaviour
{
	public GameObject SelectGo;

	public GameObject UnselectGo;

	public GameObject DetailsGo;

	public Image GoodsIcon;

	public Image bg;

	protected BaseData3VO mBaseData3Vo;

	protected GoodsChoiceViewLogic mParentLogic;

	protected int mIndex = -1;

	public virtual void Init(BaseData3VO data3Vo, int index, GoodsChoiceViewLogic parent)
	{
		//IL_007c: Unknown result type (might be due to invalid IL or missing references)
		//IL_008d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0097: Unknown result type (might be due to invalid IL or missing references)
		mBaseData3Vo = data3Vo;
		mParentLogic = parent;
		if (mBaseData3Vo != null && !((Object)(object)mParentLogic == (Object)null))
		{
			mIndex = index;
			SelectGo.SetSelfActive(active: false);
			UnselectGo.SetSelfActive(active: true);
			GoodsIcon.sprite = ((BaseViewLogic)mParentLogic).Load<Sprite>(mBaseData3Vo.Icon());
			((Graphic)GoodsIcon).SetNativeSize();
			((Component)GoodsIcon).transform.localScale = Vector3.one * mBaseData3Vo.Scale() * 1.35f;
			if (mBaseData3Vo.type == 2)
			{
				DetailsGo.SetSelfActive(active: true);
			}
			else
			{
				DetailsGo.SetSelfActive(active: false);
			}
			SetBgSprite();
		}
	}

	public virtual void OnSelect()
	{
		if (mBaseData3Vo != null && !((Object)(object)mParentLogic == (Object)null))
		{
			mParentLogic.OnSelectReward(this);
		}
	}

	public void OnDetails()
	{
		if (mBaseData3Vo != null)
		{
			Singleton<GameLevelManager>.Instance.ShowGoodsDetails(mBaseData3Vo.id);
		}
	}

	public int GetIndex()
	{
		return mIndex;
	}

	public BaseData3VO GetSelectReward()
	{
		return mBaseData3Vo;
	}

	public void SetSelectState(bool state)
	{
		if (state)
		{
			SelectGo.SetSelfActive(active: true);
			UnselectGo.SetSelfActive(active: false);
		}
		else
		{
			SelectGo.SetSelfActive(active: false);
			UnselectGo.SetSelfActive(active: true);
		}
	}

	protected virtual void SetBgSprite()
	{
	}
}
