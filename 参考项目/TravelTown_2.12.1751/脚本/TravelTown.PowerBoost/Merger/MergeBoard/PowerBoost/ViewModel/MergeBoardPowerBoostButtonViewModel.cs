using System;
using ContextualizedECS;
using Framework.Core.DataBinding;
using Merger.Game.Model;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.PowerBoost.Services;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.ViewModel
{
	public class MergeBoardPowerBoostButtonViewModel : MergeBoardPowerBoostViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostPersistanceService _powerBoostPersistanceService;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		public BindableProperty<int> EnergyResource => null;

		public int DefaultPowerBoostMode => 0;

		public bool ShouldShowTooltip(int tooltipBoost)
		{
			return false;
		}

		public void OnButtonClicked()
		{
		}

		public void HandleButtonClickedAnalytics()
		{
		}

		public bool IsItemBoostable(Entity item)
		{
			return false;
		}

		public bool ShouldShowButton()
		{
			return false;
		}

		public void OnPowerBoostChanged(int boostMode)
		{
		}
	}
}
