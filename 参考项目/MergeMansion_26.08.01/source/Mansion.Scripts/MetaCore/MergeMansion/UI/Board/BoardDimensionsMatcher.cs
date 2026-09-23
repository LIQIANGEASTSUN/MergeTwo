using System;
using Metacore.MergeMansion.Common.Options;
using UnityEngine;

namespace Metacore.MergeMansion.UI.Board
{
	public class BoardDimensionsMatcher : MonoBehaviour
	{
		[SerializeField]
		public RectTransform _container;

		[SerializeField]
		public RectTransform _padding;

		[NonSerialized]
		public Option<Vector2> _originalSizeOption;

		public void SetDimensions((int width, int height) dimensions, int offset)
		{
		}
	}
}
