using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Merger.MergeBoard.Data
{
	[CreateAssetMenu(fileName = "BlockerItemViewConfiguration", menuName = "Game/MergeBoard/Blocker Item View Configuration")]
	public class BlockerItemViewConfiguration : SerializedScriptableObject
	{
		[SerializeField]
		public List<BlockerItemConfiguration> BlockersConfig;

		[NonSerialized]
		public Dictionary<string, BlockerItemConfiguration> _blockersConfig;

		public Dictionary<string, BlockerItemConfiguration> BlockerAssetsConfiguration => null;
	}
}
