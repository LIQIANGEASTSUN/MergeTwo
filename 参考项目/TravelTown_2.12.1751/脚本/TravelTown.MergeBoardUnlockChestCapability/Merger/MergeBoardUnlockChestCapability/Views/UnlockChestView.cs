using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.MergeBoardUnlockChestCapability.ViewModels;
using UnityEngine;

namespace Merger.MergeBoardUnlockChestCapability.Views
{
	public class UnlockChestView : ViewBase<UnlockChestViewModel>
	{
		[SerializeField]
		public ReactiveButton _unlockButton;

		[SerializeField]
		public float _buttonOnClickInvocationDelay;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Update()
		{
		}

		public void UnlockButtonClicked()
		{
		}
	}
}
