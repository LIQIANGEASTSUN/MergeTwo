using System;
using System.Collections.Generic;
using DG.Tweening;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Fishing;
using Merge;
using UnityEngine;

public class ItemEffectUIFishingRodSpawn : MonoBehaviour, IItemEffectUIObject
{
	[Serializable]
	public struct AnimationObjectsData
	{
		public FishingRodRarity Rarity;

		public GameObject[] AnimationObjects;
	}

	[SerializeField]
	public AnimationObjectsData[] animationObjectsDatas;

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

	public void SetupForRarity(FishingRodRarity rarity)
	{
	}
}
