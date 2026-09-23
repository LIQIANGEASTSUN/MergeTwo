using System;
using System.Collections.Generic;

namespace Merger.MergeBoard.Models
{
	public interface IActiveTilesModel
	{
		IEnumerable<int> ActiveTileIndices { get; }

		event Action ActiveTilesChanged;

		void SetActiveTiles(IEnumerable<int> indices);

		void ClearActiveTiles();
	}
}
