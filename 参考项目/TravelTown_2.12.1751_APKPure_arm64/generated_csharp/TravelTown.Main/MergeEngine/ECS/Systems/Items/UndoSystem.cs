using System;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using Merger.Game.Signal;

namespace MergeEngine.ECS.Systems.Items
{
	public class UndoSystem : SystemBase
	{
		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public IUndoOperation _operation;

		public MutableBindableProperty<IMergeItem> UndoItem;

		public MutableBindableProperty<string> UndoLocalisationId;

		public MutableBindableProperty<string[]> UndoLocalisationParameters;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public void SetUndo(SetUndoOperationSignal signal)
		{
		}

		public void PerformUndo()
		{
		}

		public void ClearUndo()
		{
		}

		public void ItemSelected(BoardItemSelectedSignal signal)
		{
		}
	}
}
