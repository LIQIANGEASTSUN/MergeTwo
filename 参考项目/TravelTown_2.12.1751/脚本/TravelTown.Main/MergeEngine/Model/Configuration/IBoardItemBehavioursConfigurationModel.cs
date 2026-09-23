using System.Collections.Generic;
using Merger.Game.Views.BoardItem;
using UnityEngine;

namespace MergeEngine.Model.Configuration
{
	public interface IBoardItemBehavioursConfigurationModel
	{
		IReadOnlyDictionary<BehaviourPrefabData, InstantiationType> InstantiationTypeByData { get; }

		IReadOnlyDictionary<string, BehaviourPrefabData> BehaviourDataByType { get; }

		GameObject BoardItemView2Prefab { get; }

		GameObject InitializablePoolPrefab { get; }
	}
}
