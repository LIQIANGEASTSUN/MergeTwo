using Framework.Core.View;
using Framework.Core.View.ReactiveComponents;
using JetBrains.Annotations;
using MergeEngine.Configuration;
using UnityEngine;
using UnityEngine.UI;

namespace Merger.Game.Views.Components
{
	public class MergeItemView : ViewComponent
	{
		[CanBeNull]
		[SerializeField]
		public Image _backgroundImage;

		[SerializeField]
		public AddressableImage _iconImage;

		[SerializeField]
		public Sprite[] _emptyBackgroundIcons;

		[SerializeField]
		public Sprite[] _filledBackgrundIcons;

		[SerializeField]
		public Sprite _emptyIconSprite;

		public Sprite EmptyIconSprite => null;

		public virtual IMergeItem MergeItem
		{
			set
			{
			}
		}

		public void Awake()
		{
		}
	}
}
