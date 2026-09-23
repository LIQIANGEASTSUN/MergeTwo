using System;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;
using UnityEngine;

public class ItemEffectUIAuxEnergyAttachment : MonoBehaviour, IItemEffectUIObject
{
	[Serializable]
	public struct EnergyIconData
	{
		public EnergyType EnergyType;

		public GameObject Icon;
	}

	[SerializeField]
	public EnergyIconData[] energyIconDatas;

	public bool Initialised { get; set; }

	public EnergyType? EnergyType { get; set; }

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

	public void SetEnergyType(EnergyType energyType)
	{
	}

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
	{
	}
}
