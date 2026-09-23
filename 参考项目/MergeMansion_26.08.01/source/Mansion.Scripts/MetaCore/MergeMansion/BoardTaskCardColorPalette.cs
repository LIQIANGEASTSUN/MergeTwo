using UnityEngine;

namespace Metacore.MergeMansion
{
	[CreateAssetMenu(fileName = "BoardTaskCardColorPalette", menuName = "ScriptableObjects/BoardTaskCardColorPalette")]
	public class BoardTaskCardColorPalette : ScriptableObject
	{
		public Color[] TaskCardColors;

		public Color GetColorForIndex(int areaPriority)
		{
			return default(Color);
		}
	}
}
