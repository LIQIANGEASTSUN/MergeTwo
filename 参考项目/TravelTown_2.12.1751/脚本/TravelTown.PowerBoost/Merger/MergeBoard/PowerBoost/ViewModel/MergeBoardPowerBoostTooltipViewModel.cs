using System;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.PowerBoost.Services;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.ViewModel
{
	public class MergeBoardPowerBoostTooltipViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostPersistanceService _powerBoostPersistanceService;

		[Inject]
		[NonSerialized]
		public IPowerBoostModesCalculator _powerBoostModesCalculator;

		public void OnButtonTooltipShown(int powerBoostMode)
		{
		}
	}
}
