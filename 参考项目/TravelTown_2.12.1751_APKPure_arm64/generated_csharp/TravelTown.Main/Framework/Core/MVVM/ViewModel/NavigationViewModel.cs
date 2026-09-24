using System;
using Framework.Core.DataBinding;
using Framework.Core.Services.Analytics;
using Framework.UIFSM.Model;
using Framework.UIFSM.Model.Navigation;
using Framework.Util.BlockingFlags;
using Merger.Models;
using Zenject;

namespace Framework.Core.MVVM.ViewModel
{
	public class NavigationViewModel : Base
	{
		[Inject]
		[NonSerialized]
		public IUIModel _uiModel;

		[Inject]
		[NonSerialized]
		public IBlockingFlags<BackButtonDisableFlag> _backButtonBlockingFlagsModel;

		[NonSerialized]
		public INavigationModel _navigationModel;

		public string CurrentStateName => null;

		public string PreviousStateName => null;

		public AnalitycsState CurrentAnalyticsState => default(AnalitycsState);

		public BindableProperty<bool> UiEnabled => null;

		public bool BackButtonHasBlockingFlags => false;

		[Inject]
		public INavigationModel NavigationModel
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public event Action<string> StateChanged
		{
			add
			{
			}
			remove
			{
			}
		}

		public virtual void NavigationModelSet()
		{
		}

		public bool CanGoBack()
		{
			return false;
		}

		public bool CanTransitionTo(string transition)
		{
			return false;
		}

		public void EnableUI(BlockUIFlag flagToClear)
		{
		}

		public void DisableUI(BlockUIFlag flagToRaise)
		{
		}

		public void RequestTransition(string transition, object payload = null)
		{
		}

		public void Back()
		{
		}

		public void SetNavigationBackAction(Action action)
		{
		}

		public void BlockBackButton()
		{
		}

		public void UnblockBackButton()
		{
		}

		public void BlockBackButton(BackButtonDisableFlag flagToRise)
		{
		}

		public void UnblockBackButton(BackButtonDisableFlag flagToRemove)
		{
		}
	}
}
