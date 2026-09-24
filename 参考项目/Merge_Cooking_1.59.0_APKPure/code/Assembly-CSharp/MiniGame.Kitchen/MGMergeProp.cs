using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace MiniGame.Kitchen;

public class MGMergeProp : MonoBehaviour, IDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IPointerClickHandler
{
	public Image imgIcon;

	public GameObject posNode;

	public GameObject moveNode;

	private int propId;

	private int raw;

	private int col;

	private bool bDrag;

	private Vector3 oriPos;

	private Vector3 startPos;

	private Transform oriParent;

	private MGMergeGrid gridComp;

	private Sequence idleSeq;

	public void InitProp(int id)
	{
		propId = id;
		MGFoodMaterialItem materialItemById = MGKitchenStaticDataManager.GetInstance().foodMaterialStaticData.GetMaterialItemById(id);
		MGKitchenGameManager.GetInstance().LoadAssetAsync<Sprite>(materialItemById.icon, (Action<bool, Sprite>)((bool success, Sprite sprite) =>
		{
			if (success)
			{
				((Component)this).gameObject.SetActive(true);
				imgIcon.sprite = null;
				imgIcon.sprite = sprite;
				((Graphic)imgIcon).SetNativeSize();
			}
		}));
		oriParent = ((Component)this).transform.parent;
	}

	public void SetRawAndCol(int raw, int col)
	{
		this.raw = raw;
		this.col = col;
	}

	public int GetRaw()
	{
		return raw;
	}

	public int GetCol()
	{
		return col;
	}

	public void SetGridComp(MGMergeGrid gridComp)
	{
		this.gridComp = gridComp;
	}

	public int GetPropId()
	{
		return propId;
	}

	public void OnBeginDrag(PointerEventData eventData)
	{
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_0030: Unknown result type (might be due to invalid IL or missing references)
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_003a: Unknown result type (might be due to invalid IL or missing references)
		//IL_005d: Unknown result type (might be due to invalid IL or missing references)
		if (!bDrag && !gridComp.isFinished())
		{
			oriPos = ((Component)this).transform.position;
			bDrag = true;
			startPos = eventData.pointerCurrentRaycast.worldPosition;
			((Component)this).transform.SetParent(moveNode.transform, false);
			((Component)this).transform.position = oriPos;
			gridComp.OnOperate();
		}
	}

	public void OnDrag(PointerEventData eventData)
	{
		//IL_000a: Unknown result type (might be due to invalid IL or missing references)
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0014: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_0028: Unknown result type (might be due to invalid IL or missing references)
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		if (bDrag)
		{
			Vector3 worldPosition = eventData.pointerCurrentRaycast.worldPosition;
			((Component)this).transform.position = oriPos + worldPosition - startPos;
			gridComp.OnPropMove(this);
		}
	}

	public void OnEndDrag(PointerEventData eventData)
	{
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		//IL_005d: Expected Obj, but got Unknown
		if (!bDrag || gridComp.OnPropMoveEnd(this))
		{
			return;
		}
		bool bGuide = gridComp.IsGuiding();
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, oriPos, 0.3f, false), (TweenCallback)(() =>
		{
			//IL_0035: Unknown result type (might be due to invalid IL or missing references)
			if (!bGuide)
			{
				((Component)this).transform.SetParent(oriParent, false);
				((Component)this).transform.position = oriPos;
			}
			bDrag = false;
			gridComp.OnPropClick(this);
		}));
	}

	public void MoveToTargetPos(Vector3 targetPos)
	{
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		//IL_006b: Expected Obj, but got Unknown
		Vector3 localPosition = ((Component)this).transform.localPosition;
		((Component)this).transform.SetParent(moveNode.transform, false);
		((Component)this).transform.localPosition = localPosition;
		TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOLocalMove(((Component)this).transform, targetPos, 0.3f, false), (TweenCallback)(() =>
		{
			//IL_0028: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.SetParent(oriParent, false);
			((Component)this).transform.localPosition = targetPos;
		}));
	}

	public void OnUpdateEndPos()
	{
		bDrag = false;
		gridComp.OnPropClick(this);
	}

	public void OnPointerClick(PointerEventData eventData)
	{
		if (!bDrag)
		{
			gridComp.OnPropClick(this);
		}
	}

	public void PlayNoticeAni()
	{
		if (idleSeq == null)
		{
			Sequence val = DOTween.Sequence();
			TweenSettingsExtensions.Append(val, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, 1.07f, 0.35f));
			TweenSettingsExtensions.Append(val, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, 1f, 0.35f));
			TweenSettingsExtensions.SetLoops<Sequence>(val, -1, (LoopType)0);
			idleSeq = val;
		}
	}

	public void StopNoticeAni()
	{
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		if (idleSeq != null)
		{
			TweenExtensions.Kill((Tween)(object)idleSeq, false);
			idleSeq = null;
			((Component)this).transform.localScale = Vector3.one;
		}
	}

	public void PlayShowAni()
	{
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		((Component)this).transform.localScale = Vector3.zero;
		TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, 1.2f, 0.2f)), (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, 1f, 0.1f));
	}
}
