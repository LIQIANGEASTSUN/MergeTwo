using ContextualizedECS;
using Framework.Core.View;
using Merger.MergeBoard.View.Items;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class MergeBoardItemsRenderOrderView : ViewComponent
	{
		[SerializeField]
		public MergeBoardView _mergeBoardView;

		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		public void Awake()
		{
		}

		public void OnDestroy()
		{
		}

		public void SortItemsByRenderOrder()
		{
		}

		public int GetRenderPriority(Entity entity)
		{
			return 0;
		}
	}
}
