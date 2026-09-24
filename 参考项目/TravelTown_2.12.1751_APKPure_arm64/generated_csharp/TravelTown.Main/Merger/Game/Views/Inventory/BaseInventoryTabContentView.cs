using System.Collections.Generic;
using Merger.Game.ViewModel;
using UnityEngine;

namespace Merger.Game.Views.Inventory
{
	public abstract class BaseInventoryTabContentView<TViewModel> : GameViewBase<TViewModel>, IBaseInventoryTabContentView<TViewModel> where TViewModel : GameBaseViewModel
	{
		[SerializeField]
		public int _itemsInRow;

		[SerializeField]
		public List<float> _viewportSizes;

		[SerializeField]
		public float _defaultViewportSize;

		public virtual int ItemsCount => 0;

		public float GetViewportHeight()
		{
			return 0f;
		}

		public BaseInventoryTabContentView()
		{
		}
	}
}
