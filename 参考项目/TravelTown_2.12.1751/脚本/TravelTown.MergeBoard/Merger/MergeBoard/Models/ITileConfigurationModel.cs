using System.Collections.Generic;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Models
{
	public interface ITileConfigurationModel
	{
		IEnumerable<int> TileIndices { get; }

		DynamicBoardCellConfiguration GetTileConfiguration(int tileIndex);

		bool HasTileConfiguration(int tileIndex);

		void SetTileConfiguration(List<DynamicBoardCellConfiguration> tileConfigurationData);

		List<DynamicBoardCellConfiguration> GetTileConfiguration();
	}
}
