using System;
using System.Collections.Generic;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Models
{
	public class TileConfigurationModel : ITileConfigurationModel
	{
		[NonSerialized]
		public Dictionary<int, DynamicBoardCellConfiguration> _tileConfigurationData;

		public IEnumerable<int> TileIndices => null;

		public int TileCount => 0;

		public void SetTileConfiguration(List<DynamicBoardCellConfiguration> tileConfigurationData)
		{
		}

		public List<DynamicBoardCellConfiguration> GetTileConfiguration()
		{
			return null;
		}

		public DynamicBoardCellConfiguration GetTileConfiguration(int tileIndex)
		{
			return null;
		}

		public bool HasTileConfiguration(int tileIndex)
		{
			return false;
		}
	}
}
