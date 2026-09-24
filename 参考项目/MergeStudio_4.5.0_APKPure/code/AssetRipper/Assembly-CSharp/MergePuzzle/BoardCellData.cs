using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardCellData", menuName = "Scriptable/BoardCell/BoardCellData", order = 1)]
	public class BoardCellData : ScriptableObject
	{
		public Sprite BackgroundDark;

		public Sprite BackgroundWarm;

		public Sprite SelectedImage;

		public Sprite BackgroundDarkSquare;

		public Sprite BackgroundWarmSquare;

		public Color DoneableColor;
	}
}
