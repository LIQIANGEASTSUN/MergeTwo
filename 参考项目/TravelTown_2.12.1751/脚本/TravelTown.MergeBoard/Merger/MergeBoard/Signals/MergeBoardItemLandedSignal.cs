using ContextualizedECS;
using Merger.Game.Views;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Signals
{
	public class MergeBoardItemLandedSignal
	{
		public Entity ItemEntity { get; }

		public Entity SourceEntity { get; }

		public IBoardItemView ItemView { get; }

		public ItemCreatedSource ItemCreatedSource { get; }

		public MergeBoardItemLandedSignal(Entity sourceEntity, Entity itemEntity, IBoardItemView itemView, ItemCreatedSource spawnedItemCreatedBy)
		{
		}
	}
}
