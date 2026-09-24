using System;
using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using Framework.Core.MVVM.Model;
using Merger.MergeBoard.Handlers;

namespace Merger.MergeBoard.Models
{
	public class ViewportMergeBoardModel : ModelBase, IMergeBoardModel
	{
		[NonSerialized]
		public readonly MergeBoardModel _outerModel;

		[NonSerialized]
		public readonly ViewportEntitiesHolder _viewportEntitiesHolder;

		public IEntitiesHolder BoardState => null;

		public IEnumerable<Entity> Entities => null;

		public bool IsInitialized
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public long LastBoardTimeSyncTimestamp
		{
			get
			{
				return 0L;
			}
			set
			{
			}
		}

		public ViewportMergeBoardModel(MergeBoardModel outerModel, IActiveTilesModel activeTilesModel)
		{
		}

		public override void DisposeModel()
		{
		}
	}
}
