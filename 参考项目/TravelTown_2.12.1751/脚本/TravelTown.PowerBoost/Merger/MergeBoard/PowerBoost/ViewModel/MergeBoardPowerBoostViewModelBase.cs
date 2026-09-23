using System;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.MergeBoard.PowerBoost.Services;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.ViewModel
{
	public abstract class MergeBoardPowerBoostViewModelBase : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostModesCalculator _powerBoostModesCalculator;

		public BindableProperty<int> CurrentPowerBoostMode => null;

		public int MaxAvailableBoost => 0;

		public bool IsMaxBoostIndicationMode => false;

		public bool IsPowerBoostEnabled => false;

		public MergeBoardPowerBoostViewModelBase()
		{
		}
	}
}
