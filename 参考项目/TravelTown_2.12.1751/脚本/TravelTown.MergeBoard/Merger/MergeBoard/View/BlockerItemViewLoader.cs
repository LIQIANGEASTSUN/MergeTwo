using Merger.Game.Views.Components;
using Merger.MergeBoard.Data;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class BlockerItemViewLoader : MonoBehaviour
	{
		[SerializeField]
		public BlockerItemView _defaultBlockerAsset;

		[SerializeField]
		public BlockerItemViewConfiguration _configuration;

		public BlockerItemView GetBlockerAsset(string blockerAssetName)
		{
			return null;
		}
	}
}
