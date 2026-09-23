using System;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.Data;
using Merger.Game.Model;
using Merger.Game.ViewModel;
using Zenject;

namespace Merger.PowerBoost.ViewModel
{
	public class PowerBoostButtonContainerViewModel : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public IBoardSelectionModel _boardSelectionModel;

		[Inject]
		public IPlayerModel PlayerModel;

		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		public PowerBoostSystem PowerBoostSystem => null;

		public BindableProperty<SelectedBoardItem> SelectedItem => null;

		public BindableProperty<int> PlayerLevel => null;

		public bool OutOfEnergyReset => false;

		public bool IsPowerBoostButtonUnlocked => false;

		public bool IsPowerBoostActive => false;

		public bool IsPowerBoostFeatureAvailable => false;

		public bool ShouldPowerBoostButtonBeShown(SelectedBoardItem selectedItem)
		{
			return false;
		}

		public void TryRecalculatePowerBoostAfterOOE()
		{
		}

		public bool IsMergeItemBoostable(IMergeItem mergeItem)
		{
			return false;
		}

		public bool IsSelectedItemBoostable(SelectedBoardItem selectedItem)
		{
			return false;
		}
	}
}
