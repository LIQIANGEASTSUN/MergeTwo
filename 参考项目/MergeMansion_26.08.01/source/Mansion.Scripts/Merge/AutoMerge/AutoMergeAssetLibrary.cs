using UnityEngine;

namespace Merge.AutoMerge
{
	[CreateAssetMenu(fileName = "AutoMergeAssetLibrary", menuName = "ScriptableObjects/AutoMergeAssetLibrary")]
	public class AutoMergeAssetLibrary : ScriptableObject
	{
		[SerializeField]
		public AutoMergeEffectHandler autoMergeEffectHandlerPrefab;

		public AutoMergeEffectHandler AutoMergeEffectHandlerPrefab => null;
	}
}
