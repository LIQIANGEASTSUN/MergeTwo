using System;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;
using Metacore.MergeMansion.UI.Libraries;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ItemEffectUIEnergyDisplay : MonoBehaviour, IItemEffectUIObject
{
	[SerializeField]
	public TextMeshProUGUI amountText;

	[SerializeField]
	public GameObject infinityIcon;

	[SerializeField]
	public Image energyIconImage;

	[SerializeField]
	public IconLibrary iconLibrary;

	[NonSerialized]
	public bool _ignoreUpdates;

	public bool Initialised { get; set; }

	public BoardItemHandler BoardItemHandler { get; set; }

	public void Initialise()
	{
	}

	public void SetLevel(int level)
	{
	}

	public void SetEnergyIcon(EnergyType energyType)
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

	public void SetUpdateStatus(bool ignoreUpdates)
	{
	}

	public void AnimateObjectScale()
	{
	}

	public void SetLimitedItemCount(IItemDefinition itemDefinition, int count, int limit)
	{
	}

	public void SetCoreSupportEventTokenIcon(IPlayer player, CoreSupportEventTokenId tokenId)
	{
	}
}
