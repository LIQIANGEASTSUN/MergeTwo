using UnityEngine;

namespace MergePuzzle
{
	public interface IBoardItemCurrencyHandler : IBoardItemAnimationHandler, IBoardItemHandler, IFeatureHandler
	{
		void CurrencyClicked(ItemRuntimeData itemRuntimeData);

		int GetCurrencyProgressPerLevel(int level);

		int GetCurrencySetID();

		BoardItemSetData GetCurrencySet();

		Sprite GetLevelCurrencyImage()
		{
			return null;
		}

		BoardItemData GetLevel1ItemData()
		{
			return null;
		}
	}
}
