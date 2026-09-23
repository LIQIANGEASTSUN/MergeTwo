using System;
using Coffee.UIExtensions;
using UnityEngine;
using UnityEngine.UI;

namespace Merge.AutoMerge
{
	public class AutoMergeEffectHandler : MonoBehaviour
	{
		public const float MIN_ITEMS_DISTANCE = 5f;

		[NonSerialized]
		public AutoMergeAct _currentAutoMergeAct;

		[SerializeField]
		public Image lineImage;

		[SerializeField]
		public float lineHeight;

		[SerializeField]
		public UIParticle fromItemParticleSystsem;

		[SerializeField]
		public UIParticle toItemParticleSystsem;

		public void OnAutoMergeStarted(AutoMergeAct autoMergeAct)
		{
		}

		public void Update()
		{
		}

		public void DrawLine(Vector2 start, Vector2 end)
		{
		}

		public void RemoveEffect(bool playParticleEffect = false)
		{
		}

		public void ClearLine()
		{
		}

		public void OnAutoMergeFinalized()
		{
		}
	}
}
