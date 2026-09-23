using GameLogic.Player.Items;
using Merge;
using UnityEngine;

public class ItemEffectUILevelUpMergeChain : MonoBehaviour, IItemEffectUIObject
{
	[SerializeField]
	public GameObject levelUpArrow;

	public bool Initialised { get; set; }

	public BoardItemHandler BoardItemHandler { get; set; }

	public void Initialise()
	{
	}

	public void SetLevel(int level)
	{
	}

	public void SetMergeItem(MergeItem mergeItem, BoardItemHandler boardItemHandler, object context)
	{
	}

	public void SetMinLevel(int level)
	{
	}

	public void SetPreviewValue(float value)
	{
	}

	public void SetValue(float value)
	{
	}

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
	{
	}

	public void SetLevelUpArrowActive(bool active)
	{
	}
}
