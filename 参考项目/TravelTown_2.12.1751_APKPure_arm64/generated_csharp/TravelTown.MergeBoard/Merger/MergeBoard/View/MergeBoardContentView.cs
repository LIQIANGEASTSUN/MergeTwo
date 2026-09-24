using System;
using Framework.Core.View;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.View.Layout;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class MergeBoardContentView : ViewComponent
	{
		[SerializeField]
		public MergeBoardLayout _layout;

		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[NonSerialized]
		public Vector2 _layoutBasePosition;

		[NonSerialized]
		public Vector2 _itemsContainerBasePosition;

		public MergeBoardLayout Layout => null;

		public MergeBoardItemsContainer ItemsContainer => null;

		public Vector2 CurrentOffset { get; set; }

		public void Awake()
		{
		}

		public void SetContentOffset(Vector2 offset)
		{
		}
	}
}
