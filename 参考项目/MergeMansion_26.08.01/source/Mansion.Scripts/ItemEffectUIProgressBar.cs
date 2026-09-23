using System;
using GameLogic.Player.Items;
using Merge;
using UnityEngine;
using UnityEngine.UI;

public class ItemEffectUIProgressBar : MonoBehaviour, IItemEffectUIObject
{
	[NonSerialized]
	public bool initialised;

	[Header("Slider")]
	[SerializeField]
	public Slider progressBar;

	[SerializeField]
	public RectTransform progressBarIncrease;

	public bool Initialised
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public BoardItemHandler BoardItemHandler { get; set; }

	public void Initialise()
	{
	}

	public void SetValue(float value)
	{
	}

	public void SetPreviewValue(float value)
	{
	}

	public void SetMinLevel(int level)
	{
	}

	public void SetLevel(int level)
	{
	}

	public void SetMergeItem(MergeItem mergeItem, BoardItemHandler boardItemHandler, object context)
	{
	}

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
	{
	}
}
