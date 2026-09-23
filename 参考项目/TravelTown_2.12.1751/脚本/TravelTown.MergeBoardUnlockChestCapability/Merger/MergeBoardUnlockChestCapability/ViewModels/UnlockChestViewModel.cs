using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Models;
using Zenject;

namespace Merger.MergeBoardUnlockChestCapability.ViewModels
{
	public class UnlockChestViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardSelectedItemModel _mergeBoardSelectedItemModel;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		public Entity SelectedEntity => null;

		public void UnlockItem(Entity entity)
		{
		}
	}
}
