using UnityEngine;

namespace Framework.Core.View
{
	public interface IViewComponent
	{
		RectTransform RectTransform { get; }

		GameObject gameObject { get; }
	}
}
