using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace MiniGame.CupMerge;

public class MGCupMergeGameOrderView : MonoBehaviour
{
	public GameObject orderItem;

	private MGCupMergeGameView viewCmp;

	private int orderIndex;

	private List<MGCupMergeGameOrderItem> orderItemList = new List<MGCupMergeGameOrderItem>();

	private List<MGCupMergeGameOrderItem> radomOrderItemList = new List<MGCupMergeGameOrderItem>();

	private MGCupMergeGameOrderItem curOrderItem;

	public void Init(List<MGCupMergeOrderItem> orderList, MGCupMergeGameView cmp)
	{
		viewCmp = cmp;
		for (int i = 0; i < orderList.Count; i++)
		{
			MGCupMergeOrderItem mGCupMergeOrderItem = orderList[i];
			if (mGCupMergeOrderItem.fixedOrRandom == 1)
			{
				GameObject val = Object.Instantiate<GameObject>(orderItem);
				val.SetActive(false);
				val.transform.SetParent(((Component)this).transform, false);
				val.GetComponent<MGCupMergeGameOrderItem>().Init(mGCupMergeOrderItem, this);
				orderItemList.Add(val.GetComponent<MGCupMergeGameOrderItem>());
			}
			else
			{
				GameObject val2 = Object.Instantiate<GameObject>(orderItem);
				val2.SetActive(false);
				val2.transform.SetParent(((Component)this).transform, false);
				val2.GetComponent<MGCupMergeGameOrderItem>().Init(mGCupMergeOrderItem, this);
				radomOrderItemList.Add(val2.GetComponent<MGCupMergeGameOrderItem>());
			}
		}
		if (orderIndex < orderItemList.Count)
		{
			ShowOrder(orderItemList[orderIndex]);
		}
		else if (radomOrderItemList.Count > 0)
		{
			int index = WeightedRandomPickSingle(radomOrderItemList);
			ShowOrder(radomOrderItemList[index]);
		}
	}

	private int WeightedRandomPickSingle(List<MGCupMergeGameOrderItem> weightList)
	{
		int num = 0;
		foreach (MGCupMergeGameOrderItem weight in weightList)
		{
			num += weight.GetOrderVO().weight;
		}
		int num2 = Random.Range(0, num);
		int num3 = 0;
		for (int i = 0; i < weightList.Count; i++)
		{
			num3 += weightList[i].GetOrderVO().weight;
			if (num2 < num3)
			{
				return i;
			}
		}
		return Random.Range(0, weightList.Count);
	}

	public void ChangeToNextOrder(Action callBack)
	{
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Unknown result type (might be due to invalid IL or missing references)
		//IL_009b: Expected Obj, but got Unknown
		//IL_011f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0129: Expected Obj, but got Unknown
		//IL_013a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0144: Expected Obj, but got Unknown
		//IL_0189: Unknown result type (might be due to invalid IL or missing references)
		//IL_0193: Expected Obj, but got Unknown
		//IL_01a4: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ae: Expected Obj, but got Unknown
		if ((Object)(object)curOrderItem == (Object)null)
		{
			return;
		}
		ShortcutExtensions.DOKill((Component)(object)((Component)curOrderItem).transform, false);
		MGCupMergeGameOrderItem preOrderItem = curOrderItem;
		((Component)preOrderItem).transform.localRotation = Quaternion.Euler(0f, 0f, 0f);
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOLocalMoveY(((Component)preOrderItem).transform, -30f, 0.5f, false)), (TweenCallback)(() =>
		{
			preOrderItem.SetOrderComplete(bComplete: false);
		}));
		CanvasGroup component = ((Component)((Component)preOrderItem).transform).GetComponent<CanvasGroup>();
		component.alpha = 1f;
		TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(component, 0f, 0.5f), (Ease)4));
		int num = orderIndex + 1;
		MGCupMergeGameOrderItem nextOrderItem = null;
		if (num < orderItemList.Count)
		{
			nextOrderItem = orderItemList[num];
			TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.3f), (TweenCallback)(() =>
			{
				ShowOrder(nextOrderItem);
				orderIndex++;
			})), 0.6f), (TweenCallback)(() =>
			{
				callBack.InvokeGracefully();
			}));
		}
		else if (radomOrderItemList.Count > 0)
		{
			int index = WeightedRandomPickSingle(radomOrderItemList);
			nextOrderItem = radomOrderItemList[index];
			TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.3f), (TweenCallback)(() =>
			{
				ShowOrder(nextOrderItem);
				orderIndex++;
			})), 0.6f), (TweenCallback)(() =>
			{
				callBack.InvokeGracefully();
			}));
		}
	}

	public void ShowOrder(MGCupMergeGameOrderItem orderItem)
	{
		//IL_005e: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0074: Unknown result type (might be due to invalid IL or missing references)
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c7: Expected Obj, but got Unknown
		if (!((Object)(object)orderItem != (Object)null))
		{
			return;
		}
		curOrderItem = orderItem;
		ShortcutExtensions.DOKill((Component)(object)((Component)orderItem).transform, false);
		((Component)orderItem).gameObject.SetActive(true);
		Vector3 val = new Vector3(0f, 0f, 0f);
		((Component)orderItem).transform.localPosition = new Vector3(val.x, val.y - 30f, val.z);
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOLocalMoveY(((Component)orderItem).transform, val.y, 0.5f, false)), (TweenCallback)(() =>
		{
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			//IL_0068: Unknown result type (might be due to invalid IL or missing references)
			//IL_009f: Unknown result type (might be due to invalid IL or missing references)
			if ((Object)(object)orderItem != (Object)null)
			{
				Sequence val2 = DOTween.Sequence();
				TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalRotate(((Component)orderItem).transform, new Vector3(0f, 0f, -3f), 1f, (RotateMode)0), (Ease)1));
				TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalRotate(((Component)orderItem).transform, new Vector3(0f, 0f, 3f), 2f, (RotateMode)0), (Ease)1));
				TweenSettingsExtensions.Append(val2, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalRotate(((Component)orderItem).transform, new Vector3(0f, 0f, 0f), 1f, (RotateMode)0), (Ease)1));
				TweenSettingsExtensions.SetLoops<Sequence>(val2, -1, (LoopType)0);
				TweenSettingsExtensions.SetAutoKill<Sequence>(val2, false);
				TweenSettingsExtensions.SetUpdate<Sequence>(val2, (UpdateType)0, true);
			}
		}));
		CanvasGroup component = ((Component)((Component)orderItem).transform).GetComponent<CanvasGroup>();
		component.alpha = 0f;
		TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(component, 1f, 0.5f), (Ease)4));
	}

	public bool CheckCurOrderComplete(MGCupMergeGameItem cupItem)
	{
		MGCupMergeGameOrderItem mGCupMergeGameOrderItem = GetCurOrderItem();
		if (mGCupMergeGameOrderItem.GetOrderVO().beverageId == cupItem.GetBeverageItem().id && !mGCupMergeGameOrderItem.GetOrderComplete())
		{
			mGCupMergeGameOrderItem.SetOrderComplete(bComplete: true);
			return true;
		}
		return false;
	}

	public MGCupMergeGameOrderItem GetCurOrderItem()
	{
		return curOrderItem;
	}

	public int GetOrderCount()
	{
		return orderIndex + 1;
	}

	private void OnDestroy()
	{
		if ((Object)(object)curOrderItem != (Object)null)
		{
			ShortcutExtensions.DOKill((Component)(object)curOrderItem, false);
		}
	}

	private void OnDisable()
	{
		if ((Object)(object)curOrderItem != (Object)null)
		{
			ShortcutExtensions.DOKill((Component)(object)curOrderItem, false);
		}
	}
}
