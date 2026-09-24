using System;
using System.Collections.Generic;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.MergeBoard.PowerBoost.Services;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Providers
{
	public class MergeBoardPowerBoostDataProvider : IPowerBoostDataProvider
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostModesCalculator _powerBoostModesCalculator;

		public int CurrentPowerBoost => 0;

		public int MaxAvailableBoost => 0;

		public bool IsPowerBoostActive => false;

		public bool IsMaxBoostActive => false;

		public bool IsPowerBoostAvailable => false;

		public bool IsPowerBoostable(string id)
		{
			return false;
		}

		public IEnumerable<int> GetPlayableBoosts()
		{
			return null;
		}
	}
}
