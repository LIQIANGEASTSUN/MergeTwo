using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.MergeBoard.PowerBoost.Models;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Services
{
	public class PowerBoostModesCalculator : IPowerBoostModesCalculator, IDisposable
	{
		public const int MinUnlockablePowerBoost = 2;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostPersistanceService _powerBoostPersistanceService;

		[NonSerialized]
		public List<int> _availableBoostOptionsByEnergy;

		[NonSerialized]
		public List<int> _availableBoostOptionsByLevel;

		[NonSerialized]
		public string _id;

		public BindableProperty<int> EnergyResource => null;

		public int MaxAvailableBoost => 0;

		public void Setup(string id)
		{
		}

		void IDisposable.Dispose()
		{
		}

		public void RebuildBoosts()
		{
		}

		public bool CalculateUnlockableBoost(out int unlockableBoost)
		{
			unlockableBoost = default(int);
			return false;
		}

		public IReadOnlyList<int> GetUnlockableBoosts()
		{
			return null;
		}

		public IReadOnlyList<int> GetPlayablePowerBoosts()
		{
			return null;
		}

		public void OnConfigurationUpdated()
		{
		}

		public void SwitchBoost()
		{
		}

		public int CalculateNextBoost()
		{
			return 0;
		}

		public void ResetCurrentPowerBoost()
		{
		}

		public void ResetToMaxAvailableBoost()
		{
		}

		public void OnEnergyChanged()
		{
		}

		public void CalculatePlayableBoosts()
		{
		}

		public void CalculateAvailableBoostsByLevel()
		{
		}

		public bool IsUnlockableBoost(int boost, List<int> playableBoosts)
		{
			return false;
		}

		public List<BoostModeConfig> GetBoostConfigsForLevel()
		{
			return null;
		}
	}
}
