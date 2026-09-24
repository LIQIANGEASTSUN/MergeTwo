using System;
using System.Collections.Generic;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class KiteMiniBoardInitialBoardModel
	{
		public int RowCount;

		public int ColumnCount;

		public List<MiniBoardPositionData> InitialPositionData;
	}
}
