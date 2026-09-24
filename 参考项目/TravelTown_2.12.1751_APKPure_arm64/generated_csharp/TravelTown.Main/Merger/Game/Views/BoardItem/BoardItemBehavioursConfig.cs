using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Merger.Game.Views.BoardItem
{
	[Serializable]
	[CreateAssetMenu(fileName = "BoardItemBehavioursConfig.asset", menuName = "Game/BoardItemBehavioursConfig")]
	public class BoardItemBehavioursConfig : SerializedScriptableObject
	{
		[NonSerialized]
		public string _filter;

		[NonSerialized]
		[NonSerialized]
		public List<BehaviourPrefabData> _filteredBehaviourConfigs;

		[SerializeField]
		public List<BehaviourPrefabData> _behaviourConfigs;

		public IReadOnlyList<BehaviourPrefabData> BehaviourConfigs => null;
	}
}
