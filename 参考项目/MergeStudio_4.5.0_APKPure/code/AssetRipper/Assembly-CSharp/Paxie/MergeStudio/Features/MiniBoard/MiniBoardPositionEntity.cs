using System;
using JetBrains.Annotations;
using MergePuzzle;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class MiniBoardPositionEntity
	{
		public Coordinate Index;

		public CellEntity Cell;

		[CanBeNull]
		public MiniBoardItemEntity Item;

		public MiniBoardPositionEntity()
		{
		}

		public MiniBoardPositionEntity(Coordinate index)
		{
		}

		public MiniBoardPositionEntity(Coordinate index, CellEntity cell, MiniBoardItemEntity item)
		{
		}

		public void Clear()
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
