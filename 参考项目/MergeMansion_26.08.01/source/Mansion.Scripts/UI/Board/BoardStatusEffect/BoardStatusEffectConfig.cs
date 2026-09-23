using UnityEngine;

namespace UI.Board.BoardStatusEffect
{
	[CreateAssetMenu(fileName = "BoardStatusEffectConfig", menuName = "ScriptableObjects/BoardStatusEffectConfig_", order = 10)]
	public class BoardStatusEffectConfig : ScriptableObject
	{
		public BoardStatusEffectType effectType;

		public Sprite icon;

		public Color effectColor;
	}
}
