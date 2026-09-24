using NaughtyAttributes;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardEventBoardData", menuName = "Scriptable/Board/BoardEventBoardData", order = 4)]
	public class BoardEventBoardData : BoardData
	{
		[ShowAssetPreview(40, 40)]
		[BoxGroup("Board Event")]
		public Sprite TaskXPImage;

		[BoxGroup("Board Event")]
		[ShowAssetPreview(40, 40)]
		public Sprite EnergyPopupEnergy;

		[BoxGroup("Board Event")]
		public float LockItemExtraOffset;
	}
}
