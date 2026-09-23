using UnityEngine;

namespace Metacore.MergeMansion
{
	[CreateAssetMenu(fileName = "BoardVisualEffectConfig", menuName = "ScriptableObjects/BoardVisualEffectConfig_", order = 10)]
	public class BoardVisualEffectConfig : ScriptableObject
	{
		public BoardVisualEffectHandler.BoardVisualEffectType effectType;

		public GameObject[] foregroundEffects;

		public GameObject[] backgroundEffects;

		public string ambientSound;
	}
}
