using System;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.View.Layout;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardQueue.ViewModels
{
	public class DequeueAnimationViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _mergeBoardLayout;

		public Vector2 TileSize => default(Vector2);
	}
}
