using System;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.InfoBar.ViewModel
{
	public class PowerBoostInfoBarTextModifierViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		public BindableProperty<int> PowerBoostMode => null;

		public bool IsPowerBoostAvailable => false;

		public bool IsPowerBoostActive => false;

		public bool IsMaxBoostActive => false;
	}
}
