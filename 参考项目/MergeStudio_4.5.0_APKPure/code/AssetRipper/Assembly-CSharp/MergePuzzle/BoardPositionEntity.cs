using System;
using JetBrains.Annotations;

namespace MergePuzzle
{
	[Serializable]
	public class BoardPositionEntity
	{
		public Coordinate Index;

		public CellEntity Cell;

		[CanBeNull]
		public ItemEntity Item;

		public BoardPositionEntity(Coordinate index, CellEntity cell, ItemEntity item)
		{
		}

		public BoardPositionEntity(Coordinate index)
		{
		}

		public BoardPositionEntity()
		{
		}

		public void Clear()
		{
		}

		public void SetItem(ItemEntity itemEntity)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
