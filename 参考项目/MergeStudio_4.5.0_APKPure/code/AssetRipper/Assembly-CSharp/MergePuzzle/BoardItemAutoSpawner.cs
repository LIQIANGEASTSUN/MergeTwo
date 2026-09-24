using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemAutoSpawner", menuName = "Scriptable/BoardItem/AutoSpawner", order = 4)]
	public class BoardItemAutoSpawner : BoardItemSpawnerData
	{
		public bool ProcessItemSpawn(ItemController itemController, BoardController board)
		{
			return false;
		}
	}
}
