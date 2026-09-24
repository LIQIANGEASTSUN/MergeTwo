using System;
using TLF;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MiniGame.CupMerge;

public class MGCupMergeGameOrderItem : MonoBehaviour
{
	public RTLTextMeshPro textTitle;

	public RTLTextMeshPro textOrderCash;

	public Image imageIcon;

	public GameObject imageSuccess;

	private MGCupMergeGameOrderView viewCmp;

	private MGCupMergeOrderItem orderVO;

	private bool isComplete;

	public void Init(MGCupMergeOrderItem itemVO, MGCupMergeGameOrderView cmp)
	{
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0070: Unknown result type (might be due to invalid IL or missing references)
		viewCmp = cmp;
		orderVO = itemVO;
		((TMP_Text)textTitle).text = MGCupMergeDataManager.GetInstance().GetLocalizedText("숨끽斆爩䵑$\u009a厙숧끝枼攨慑 ¢厡勪㳾\ud9f7Ą");
		((TMP_Text)textOrderCash).text = "뺷" + itemVO.cash;
		MGCupMergeBeverageItem cupItemById = MGCupMergeDataManager.GetInstance().GetCupItemById(itemVO.beverageId);
		((Component)imageIcon).transform.localScale = cupItemById.orderScale * Vector3.one;
		MGBaseGameManager.GetInstance().LoadAssetAsync<Sprite>(cupItemById.icon, (Action<bool, Sprite>)((bool success, Sprite sprite) =>
		{
			if (success)
			{
				imageIcon.sprite = null;
				imageIcon.sprite = sprite;
				((Graphic)imageIcon).SetNativeSize();
			}
		}));
	}

	public MGCupMergeOrderItem GetOrderVO()
	{
		return orderVO;
	}

	public void SetOrderComplete(bool bComplete)
	{
		isComplete = bComplete;
		if (!bComplete)
		{
			imageSuccess.gameObject.SetActive(false);
		}
	}

	public bool GetOrderComplete()
	{
		return isComplete;
	}

	public void PlayCompleteAni()
	{
		imageSuccess.gameObject.SetActive(true);
	}
}
