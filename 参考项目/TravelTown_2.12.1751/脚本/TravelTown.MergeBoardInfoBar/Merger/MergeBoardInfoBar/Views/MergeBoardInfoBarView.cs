using System;
using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using JetBrains.Annotations;
using Merger.MergeBoardInfoBar.ViewModels;
using Merger.MergeBoardInfoBar.Views.Modifiers;
using UnityEngine;

namespace Merger.MergeBoardInfoBar.Views
{
	public class MergeBoardInfoBarView : ViewBase<MergeBoardInfoBarViewModel>
	{
		[SerializeField]
		public ReactiveText _infoBarText;

		[SerializeField]
		[CanBeNull]
		public ReactiveButton _infoButton;

		[SerializeField]
		[Tooltip("Used for analytics data")]
		public string boardType;

		[NonSerialized]
		public IInfoBarModifier[] _modifiers;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Update()
		{
		}

		public void ApplyModifiers(InfoBarModifierContext context)
		{
		}

		public void ResetModifiers(InfoBarModifierContext context)
		{
		}

		public void HideInfoBar()
		{
		}

		public void OnInfoButtonClicked()
		{
		}
	}
}
