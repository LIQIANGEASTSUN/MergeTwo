using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Zenject;

namespace Merger.MergeBoard.Models
{
	public class ActiveTilesModel : IActiveTilesModel
	{
		[Inject]
		[NonSerialized]
		public ITileConfigurationModel _tileConfigurationModel;

		[NonSerialized]
		public HashSet<int> _activeIndices;

		public IEnumerable<int> ActiveTileIndices => null;

		public event Action ActiveTilesChanged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void SetActiveTiles(IEnumerable<int> indices)
		{
		}

		public void ClearActiveTiles()
		{
		}
	}
}
