using System;
using Merge;
using UnityEngine;

namespace UI.GameEvents
{
	[CreateAssetMenu(fileName = "ShortLeaderboardEventPrefabsLibrary", menuName = "ScriptableObjects/EventPrefabs/ShortLeaderboardEventPrefabsLibrary", order = 13)]
	public class ShortLeaderboardEventPrefabsLibrary : EventPrefabsLibraryBase<ShortLeaderboardEventPrefabs>
	{
		[Serializable]
		public struct BoardBackgroundData
		{
			public string BoardId;

			public GameObject BoardBackground;
		}

		public BoardBackgroundData[] BoardBackgrounds;

		public GameObject FallbackBoardBackground;

		public GameObject GetBoardBackground(MergeBoardId boardId)
		{
			return null;
		}
	}
}
