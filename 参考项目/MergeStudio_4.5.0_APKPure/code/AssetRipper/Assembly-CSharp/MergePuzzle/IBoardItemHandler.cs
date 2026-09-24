using System.Collections.Generic;
using Paxie;

namespace MergePuzzle
{
	public interface IBoardItemHandler : IFeatureHandler
	{
		SerializableDictionary<int, BoardItemSetData> GetBoardItemDictionary();

		List<BoardItemData> GetBoardItemSetItems(int setID);

		void AddItemsToItemCollection();

		bool HasBoardItem()
		{
			return false;
		}
	}
}
