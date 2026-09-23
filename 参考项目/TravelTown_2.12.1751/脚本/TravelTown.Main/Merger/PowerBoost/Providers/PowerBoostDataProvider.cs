using System;
using System.Collections.Generic;
using MergeEngine.ECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.PowerBoost.Models;
using Zenject;

namespace Merger.PowerBoost.Providers
{
	public class PowerBoostDataProvider : IPowerBoostDataProvider
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public PowerBoostSystem PowerBoostSystem => null;

		public bool IsPowerBoostAvailable => false;

		public bool IsPowerBoostActive => false;

		public int CurrentPowerBoost => 0;

		public int MaxAvailableBoost => 0;

		public bool IsMaxBoostActive => false;

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
