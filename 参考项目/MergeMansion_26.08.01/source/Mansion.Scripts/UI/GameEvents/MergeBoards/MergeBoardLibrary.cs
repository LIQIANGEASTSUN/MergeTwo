using System;
using System.Collections.Generic;
using GameLogic.ConfigPrefabs;
using GameLogic.Player;
using Merge;
using UnityEngine;

namespace UI.GameEvents.MergeBoards
{
	[CreateAssetMenu(fileName = "MergeBoardLibrary", menuName = "ScriptableObjects/Libraries/Merge Boards", order = 0)]
	public class MergeBoardLibrary : ScriptableObject
	{
		[Serializable]
		public class ConfigPrefabEntry
		{
			public string assetPackId;

			public GameObject boardBackgroundPrefab;
		}

		[SerializeField]
		public GameObject fallbackBoardBackground;

		[SerializeField]
		public ScreenTransition.Preset screenTransitionPreset;

		[SerializeField]
		public List<ConfigPrefabEntry> configPrefabEntries;

		public GameObject GetBackgroundPrefab(MergeBoardId mergeBoardId, PlayerModel player)
		{
			return null;
		}

		public ScreenTransition.Preset GetScreenTransitionPreset()
		{
			return null;
		}

		public ConfigPrefabId GetPrefabId(MergeBoardId mergeBoardId, PlayerModel player)
		{
			return null;
		}

		public ConfigPrefabEntry GetEntry(ConfigPrefabId assetPackId)
		{
			return null;
		}

		public ConfigPrefabEntry GetEntry(MergeBoardId mergeBoardId, PlayerModel player)
		{
			return null;
		}
	}
}
