using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.Game.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View
{
	public class ResourceView : ViewBaseWithID<IResourceViewModel>
	{
		[SerializeField]
		public ReactiveText _resourceText;

		[SerializeField]
		public string _amountFormat;

		[SerializeField]
		public AddressableImage _resourceIcon;

		public void OnValidate()
		{
		}

		public void OnEnable()
		{
		}

		public void Start()
		{
		}

		public void LoadIcon()
		{
		}
	}
}
