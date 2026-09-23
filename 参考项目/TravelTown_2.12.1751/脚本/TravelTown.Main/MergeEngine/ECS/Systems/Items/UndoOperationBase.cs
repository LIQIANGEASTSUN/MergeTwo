using System;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Systems.Items
{
	public abstract class UndoOperationBase<T> : IUndoOperation where T : UndoDataBase
	{
		[NonSerialized]
		public T _data;

		[NonSerialized]
		public Action<T> _performUndoCallback;

		public UndoOperationBase(T data, Action<T> performUndoCallback)
		{
		}

		public void PerformUndo()
		{
		}

		public IMergeItem GetMergeItem()
		{
			return null;
		}

		public Entity GetEntity()
		{
			return null;
		}

		public abstract bool ShouldClearUndoOnSelection(PositionComponent selectedItem);

		public abstract string GetLocalisationString();

		public abstract string[] GetLocalisationParameters();
	}
}
