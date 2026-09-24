using System;
using UnityEngine;

namespace Framework.Core.View
{
	public class ViewComponent : MonoBehaviour, IViewComponent
	{
		[NonSerialized]
		public RectTransform _rectTransform;

		public RectTransform RectTransform => null;

		GameObject IViewComponent.gameObject => null;

		public virtual void Dispose()
		{
		}
	}
}
