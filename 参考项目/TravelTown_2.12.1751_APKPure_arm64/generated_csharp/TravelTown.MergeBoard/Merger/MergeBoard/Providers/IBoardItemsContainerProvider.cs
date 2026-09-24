using System.Collections.Generic;
using ContextualizedECS;
using Merger.Game.Views;

namespace Merger.MergeBoard.Providers
{
	public interface IBoardItemsContainerProvider
	{
		IEnumerable<KeyValuePair<Entity, IBoardItemView>> GetAllItems();
	}
}
