using System;
using Framework.Core.MVVM.ViewModel;
using Framework.Core.View;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardInfoBar.Views.Modifiers
{
	public abstract class InfoBarModifierBaseView<TViewModel> : ViewComponent, IInfoBarModifier where TViewModel : ViewModelBase
	{
		[InjectOptional]
		[NonSerialized]
		public TViewModel _viewModel;

		[SerializeField]
		public int _order;

		[NonSerialized]
		public bool _isDirty;

		public int Order => 0;

		public TViewModel ViewModel => null;

		public void Awake()
		{
		}

		public virtual void OnDestroy()
		{
		}

		public virtual void Apply(InfoBarModifierContext context)
		{
		}

		public virtual bool IsValid()
		{
			return false;
		}

		public void Reset()
		{
		}

		public abstract bool ShouldApply(InfoBarModifierContext context);

		public abstract void OnReset();

		public InfoBarModifierBaseView()
		{
		}
	}
}
