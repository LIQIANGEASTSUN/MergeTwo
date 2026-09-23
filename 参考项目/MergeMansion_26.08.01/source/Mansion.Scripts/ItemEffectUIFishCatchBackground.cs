using System;
using System.Collections.Generic;
using DG.Tweening;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Fishing;
using Merge;
using UnityEngine;
using UnityEngine.UI;

public class ItemEffectUIFishCatchBackground : MonoBehaviour, IItemEffectUIObject
{
	[Serializable]
	public struct ColorData
	{
		public FishRarity Rarity;

		public Color[] ImageColors;
	}

	[SerializeField]
	public Image[] images;

	[SerializeField]
	public ColorData[] colorDatas;

	[SerializeField]
	public GameObject[] animationObjects;

	[SerializeField]
	public ParticleSystem[] particleSystems;

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

	public void UpdateImageColors(FishRarity rarity)
	{
	}

	public void PlayParticles()
	{
	}
}
