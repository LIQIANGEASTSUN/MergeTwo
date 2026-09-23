using ContextualizedECS;
using MergeEngine.Configuration;
using Merger.Game.ItemInfoData;

namespace Merger.MergeBoardInfoBar.Logic.ItemInfoPopup.Strategy
{
	public class ItemInfoPopupOpenData
	{
		public IMergeItem MergeItem { get; }

		public Entity Entity { get; }

		public IItemInfoData ItemInfoData { get; }

		public string Reason { get; }

		public ItemInfoPopupOpenData(IMergeItem mergeItem, Entity entity, IItemInfoData itemInfoData, string reason)
		{
		}
	}
}
