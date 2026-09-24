using System;
using Framework.Core.MVVM.ViewModel;
using Framework.Core.View;
using Zenject;

namespace Framework.Core.MVVM.View
{
	public class ViewBase<TViewModel> : ViewComponent where TViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public TViewModel _viewModel;

		public TViewModel ViewModel => null;

		public virtual void OnDestroy()
		{
		}
	}
}
