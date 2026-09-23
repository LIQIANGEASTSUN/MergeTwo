using GameLogic.Player.Items;
using GameLogic.Player.Items.Fishing;
using Merge;
using Metacore.MergeMansion.Common.Options.Unity;
using UI;
using UnityEngine;

public class ItemEffectUIFishRarityTooltip : MonoBehaviour, IItemEffectUIObject
{
	[SerializeField]
	public SerializableUnityOption<FishTag> fishTag;

	public bool Initialised { get; set; }

	public BoardItemHandler BoardItemHandler { get; set; }

	public void Initialise()
	{
	}

	public void SetLevel(int level)
	{
	}

	public void SetMergeItem(MergeItem mergeItem, BoardItemHandler itemHandler, object context)
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

	public void SetupForRarity(FishRarity rarity)
	{
	}
}
