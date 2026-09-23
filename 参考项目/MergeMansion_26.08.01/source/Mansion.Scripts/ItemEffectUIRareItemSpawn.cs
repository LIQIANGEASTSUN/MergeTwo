using System;
using System.Collections.Generic;
using DG.Tweening;
using GameLogic.Player.Items;
using Merge;
using UnityEngine;

public class ItemEffectUIRareItemSpawn : MonoBehaviour, IItemEffectUIObject
{
	[SerializeField]
	public GameObject[] animationObjects;

	[NonSerialized]
	public readonly Dictionary<GameObject, DOTweenAnimation[]> animationsByObject;

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

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
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
}
