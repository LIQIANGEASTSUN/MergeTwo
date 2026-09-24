using NaughtyAttributes;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[CreateAssetMenu(fileName = "MiniBoardCellData", menuName = "Scriptable/MiniBoard/MiniBoardCellData", order = 1)]
	public class MiniBoardCellData : ScriptableObject
	{
		[ShowAssetPreview(40, 40)]
		[BoxGroup("Sprites")]
		public Sprite BackgroundDark;

		[BoxGroup("Sprites")]
		[ShowAssetPreview(40, 40)]
		public Sprite BackgroundWarm;

		[ShowAssetPreview(40, 40)]
		[BoxGroup("Sprites")]
		public Sprite SelectedImage;

		[BoxGroup("Sprites")]
		[ShowAssetPreview(40, 40)]
		public Sprite BackgroundDarkSquare;

		[ShowAssetPreview(40, 40)]
		[BoxGroup("Sprites")]
		public Sprite BackgroundWarmSquare;

		[BoxGroup("Coloring")]
		public Color DoneableColor;
	}
}
