using System;
using ContextualizedECS;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Models;
using Merger.MergeBoard.View.Layout;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardItemCreatorViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public new DiContainer _container;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _boardLayout;

		[Inject]
		[NonSerialized]
		public ITileConfigurationModel _tileConfigurationModel;

		public VisualAdapter GetVisualAdapter(Entity entity)
		{
			return null;
		}

		public Transform GetTransformForIndex(int index)
		{
			return null;
		}

		public bool HasTileConfiguration(int index)
		{
			return false;
		}

		public DynamicBoardCellConfiguration GetTileConfiguration(int index)
		{
			return null;
		}
	}
}
