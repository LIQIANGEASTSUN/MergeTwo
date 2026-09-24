using System;
using System.Collections.Generic;
using MergePuzzle;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class MiniBoardAreaEntity
	{
		public int BoardIndex;

		public List<MiniBoardPositionEntity> Positions;

		public static MiniBoardAreaEntity Get()
		{
			return null;
		}

		public void ResetEntity()
		{
		}

		public void ChangeBoardIndex(int boardIndex)
		{
		}

		public Coordinate GetItemCoordinate(MiniBoardItemEntity miniBoardItemEntity)
		{
			return default(Coordinate);
		}
	}
}
