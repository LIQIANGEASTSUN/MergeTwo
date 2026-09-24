using UnityEngine;

namespace MiniGame.CupMerge;

public class MGCupMergeGameItem : MonoBehaviour
{
	private MGCupMergeGameView viewCmp;

	private MGCupMergeBeverageItem beverageItem;

	private Collider2D thisItem;

	public Rigidbody2D thisRb;

	private bool isRemove;

	public bool isAudio;

	private void Start()
	{
		thisItem = (Collider2D)(object)((Component)((Component)this).transform).GetComponent<PolygonCollider2D>();
		thisRb = ((Component)((Component)this).transform).GetComponent<Rigidbody2D>();
	}

	public void Init(MGCupMergeBeverageItem itemVO, MGCupMergeGameView cmp)
	{
		viewCmp = cmp;
		beverageItem = itemVO;
	}

	public MGCupMergeBeverageItem GetBeverageItem()
	{
		return beverageItem;
	}

	public bool GetIsRemove()
	{
		return isRemove;
	}

	public void SetIsRemove(bool isRemove)
	{
		this.isRemove = isRemove;
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
		MGCupMergeGameItem component = collision.gameObject.GetComponent<MGCupMergeGameItem>();
		if ((Object)(object)component != (Object)null && (Object)(object)thisItem != (Object)null)
		{
			if (!isAudio)
			{
				isAudio = true;
				thisRb.gravityScale = 1f;
				MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈斾渐敫\"\u009a厙뻻");
			}
			if (!component.isAudio)
			{
				component.isAudio = true;
				component.thisRb.gravityScale = 1f;
				MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈斾渐敫\"\u009a厙뻻");
			}
			if (component.GetBeverageItem().id == GetBeverageItem().id && !component.GetIsRemove() && !GetIsRemove())
			{
				if (GetBeverageItem().beverageLevel < viewCmp.GetCurLevelItem().maxBeverageLevel)
				{
					viewCmp.OnMergeCup(this, component);
				}
				return;
			}
		}
		viewCmp.CheckOrderComplete();
	}
}
