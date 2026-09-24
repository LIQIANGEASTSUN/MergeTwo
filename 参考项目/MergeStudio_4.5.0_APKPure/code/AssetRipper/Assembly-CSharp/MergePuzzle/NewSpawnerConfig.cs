using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "NewSpawnerConfig", menuName = "Scriptable/NewSpawner/NewSpawnerConfig", order = 2)]
	public class NewSpawnerConfig : FeatureConfigBase
	{
		public List<ItemChainScriptableData> ItemChains;
	}
}
