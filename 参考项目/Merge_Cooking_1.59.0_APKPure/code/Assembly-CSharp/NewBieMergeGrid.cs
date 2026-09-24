using System;
using TLF;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

public class NewBieMergeGrid : MonoBehaviour, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler
{
	public GameObject SelectGo;

	public Transform EffectParent;

	public NewBieMergeItem MergeItem;

	public GameObject finishBg;

	private int gridId;

	private bool canTouch;

	private NewBieMergeViewLogic parentLogic;

	private int goodId;

	private NewBieMergeGrid lastPlayEffectGrid;

	public void Init(int gridId, int goodId, NewBieMergeViewLogic logic)
	{
		this.gridId = gridId;
		this.goodId = goodId;
		parentLogic = logic;
		MergeItem.Init(this, goodId, logic.resLoader);
	}

	public void SetTouchEnabled(bool bEnable)
	{
		canTouch = bEnable;
	}

	public void OnBeginDrag(PointerEventData eventData)
	{
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		if (canTouch && !((Object)(object)parentLogic == (Object)null))
		{
			parentLogic.SetStartNoOperate(bStart: false);
			Vector3 worldPosition = eventData.pointerCurrentRaycast.worldPosition;
			parentLogic.TryCloseWeekGuide();
			MergeItem.OnBeginDrag(worldPosition);
		}
	}

	public void OnDrag(PointerEventData eventData)
	{
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		if (canTouch && !((Object)(object)parentLogic == (Object)null))
		{
			Vector3 worldPosition = eventData.pointerCurrentRaycast.worldPosition;
			MergeItem.OnDrag(worldPosition);
			NewBieMergeGrid gridByWorldPos = parentLogic.GetGridByWorldPos(worldPosition);
			if ((Object)(object)gridByWorldPos == (Object)null || !gridByWorldPos.IsValid())
			{
				HideMergeHintEffect();
			}
			else if (gridByWorldPos.GetGridId() == gridId)
			{
				HideMergeHintEffect();
			}
			else if (gridByWorldPos.GetGoodId() != goodId)
			{
				HideMergeHintEffect();
			}
			else
			{
				ShowMergeHintEffect(gridByWorldPos);
			}
		}
	}

	public void OnEndDrag(PointerEventData eventData)
	{
		//IL_001e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0023: Unknown result type (might be due to invalid IL or missing references)
		//IL_0028: Unknown result type (might be due to invalid IL or missing references)
		//IL_002f: Unknown result type (might be due to invalid IL or missing references)
		HideMergeHintEffect();
		if (!canTouch || (Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		Vector3 worldPosition = eventData.pointerCurrentRaycast.worldPosition;
		int gridIdByWorldPos = parentLogic.GetGridIdByWorldPos(worldPosition);
		if (gridIdByWorldPos > 0 && gridIdByWorldPos != gridId)
		{
			NewBieMergeGrid gridById = parentLogic.GetGridById(gridIdByWorldPos);
			if (gridById.IsValid())
			{
				parentLogic.TryMergeGrid(this, gridById);
				return;
			}
		}
		parentLogic.SetStartNoOperate(bStart: true);
		MergeItem.ResetIconParent();
	}

	public int GetGoodId()
	{
		return goodId;
	}

	public int GetGridId()
	{
		return gridId;
	}

	public Transform GetDragParent()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			return parentLogic.dragParent;
		}
		return null;
	}

	public bool IsValid()
	{
		return MergeItem.IsValid();
	}

	public void ChangeGoodId(int id)
	{
		SetTouchEnabled(id > 0);
		goodId = id;
		MergeItem.UpdateGoodId(id);
	}

	public void PlayBoxBrokenAni(bool canClick = true, Action callback = null)
	{
		MergeItem.PlayBoxBrokenAni(() =>
		{
			canTouch = canClick;
			callback?.Invoke();
		});
	}

	public void ResetItemIcon()
	{
		MergeItem.ResetIconParent();
	}

	public void PlayGreatAni()
	{
		//IL_0038: Unknown result type (might be due to invalid IL or missing references)
		//IL_0042: Expected Obj, but got Unknown
		//IL_006f: Unknown result type (might be due to invalid IL or missing references)
		//IL_009c: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		GameObject val = parentLogic.resLoader.LoadSync<GameObject>("숏끜徿唐䕗&\u0082厁숝끴於䴞䥶;\u009a厙숏끈斾眐敢;\u009a厙녟噇㘊\0逤\ud97a");
		if ((Object)(object)val != (Object)null)
		{
			GameObject node = new GameObject();
			node.transform.SetParent(parentLogic.dragParent, false);
			node.transform.position = ((Component)this).transform.position;
			GameObject val2 = Object.Instantiate<GameObject>(val);
			val2.transform.SetParent(node.transform, false);
			val2.transform.localPosition = Vector3.zero;
			TextMeshProUGUI[] componentsInChildren = val2.GetComponentsInChildren<TextMeshProUGUI>();
			for (int i = 0; i < componentsInChildren.Length; i++)
			{
				LocalizedLang.SetUITextLocalization(componentsInChildren[i], "숹끽掆欺䵚3\u0092厑숂끕玭弃彑 Ò发╡\u0c48");
			}
			TimeManager.GetInstance().Schedule(parentLogic, (float dt) =>
			{
				Object.Destroy((Object)(object)node);
			}, 3f, 0, 0f);
			Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉수끗徼朙当7\u0082厁划撯\ud9daŀ");
		}
		finishBg.SetSelfActive(active: true);
		MergeItem.SetFinsihed(bFinished: true);
	}

	public void PlayMergeAni()
	{
		//IL_006d: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)parentLogic == (Object)null)
		{
			return;
		}
		MergeItem.PlayMergeAnim();
		GameObject val = parentLogic.resLoader.LoadSync<GameObject>("숏끜徿唐䕗&\u0082厁숝끴於䴞䥶;\u009a厙숏끈斾眐敢;\u009a厙숚끋榰挛录<ª厩숌끔殆甍潕<²厱뻵");
		if ((Object)(object)val != (Object)null)
		{
			GameObject effectNode = Object.Instantiate<GameObject>(val);
			effectNode.transform.SetParent(EffectParent, false);
			effectNode.transform.localPosition = Vector3.zero;
			TimeManager.GetInstance().Schedule(parentLogic, (float dt) =>
			{
				Object.Destroy((Object)(object)effectNode);
			}, 2f, 0, 0f);
		}
	}

	public void OnSubminit()
	{
		finishBg.SetSelfActive(active: false);
		MergeItem.SetFinsihed(bFinished: false);
	}

	public void PlayCreateMilkAni(Vector3 startPos, Action callbak = null)
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		canTouch = false;
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			//IL_005d: Unknown result type (might be due to invalid IL or missing references)
			GameObject val = parentLogic.resLoader.LoadSync<GameObject>("숏끜徿唐䕗&\u0082厁숝끴於䴞䥶;\u009a厙숏끈斾眐敢;\u009a厙숅끖徬樆彐;\u0082厁捩j4끮d\ude33㯆");
			if ((Object)(object)val != (Object)null)
			{
				GameObject effectNode = Object.Instantiate<GameObject>(val);
				effectNode.transform.SetParent(EffectParent, false);
				effectNode.transform.localPosition = Vector3.zero;
				TimeManager.GetInstance().Schedule(parentLogic, (float num) =>
				{
					Object.Destroy((Object)(object)effectNode);
				}, 3f, 0, 0f);
			}
		}, 0.4f, 1, 0f);
		MergeItem.PlayCreateMilkAni(startPos, () =>
		{
			canTouch = true;
			parentLogic.SetStartNoOperate(bStart: true);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				parentLogic.PlayCanMergeAni(11);
			}, 0.1f, 1, 0f);
			callbak?.Invoke();
		});
	}

	public void CreateOneMilk()
	{
		if ((Object)(object)parentLogic != (Object)null)
		{
			parentLogic.TryCloseWeekGuide();
			parentLogic.SetStartNoOperate(bStart: false);
			parentLogic.CreateOneMilk(this);
		}
	}

	private void ShowMergeHintEffect(NewBieMergeGrid targetGrid)
	{
		if ((Object)(object)lastPlayEffectGrid != (Object)null)
		{
			if (lastPlayEffectGrid.GetGridId() != targetGrid.GetGridId())
			{
				HideMergeHintEffect();
				targetGrid.PlayItemMergeHint();
				lastPlayEffectGrid = targetGrid;
			}
		}
		else
		{
			targetGrid.PlayItemMergeHint();
			lastPlayEffectGrid = targetGrid;
		}
	}

	private void HideMergeHintEffect()
	{
		if ((Object)(object)lastPlayEffectGrid != (Object)null)
		{
			lastPlayEffectGrid.HideItemMergeHint();
			lastPlayEffectGrid = null;
		}
	}

	private void PlayItemMergeHint()
	{
		if ((Object)(object)MergeItem != (Object)null)
		{
			MergeItem.PlayMergeHint();
		}
	}

	private void HideItemMergeHint()
	{
		if ((Object)(object)MergeItem != (Object)null)
		{
			MergeItem.PlayMergeHintHide();
		}
	}

	public void PlayMergeHintAni(Transform trans)
	{
		if ((Object)(object)MergeItem != (Object)null)
		{
			MergeItem.PlayMergeHintScaleAni(trans);
		}
	}

	public void PlayCreatorEffect()
	{
		if ((Object)(object)MergeItem != (Object)null)
		{
			MergeItem.PlayCreatorEffect();
		}
	}

	public void HideCreatorEffect()
	{
		if ((Object)(object)MergeItem != (Object)null)
		{
			MergeItem.HideCreatorEffect();
		}
	}
}
