using System;
using Framework.Core.Services;
using Framework.Core.Services.ServerTime;
using Merger.Game.Data;
using Merger.LevelAndMeta.Interfaces;
using Merger.Timers.Interfaces;
using Zenject;

namespace Merger.PowerBoost.Services
{
	public class PowerBoostService : ServiceBase, IPowerBoostService
	{
		[Inject]
		[NonSerialized]
		public ILevelAndMetaService _levelAndMetaService;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public ITimerService _timerService;

		public PowerBoostMultiModesConfig CoreBoardPowerBoostConfig => null;

		public PowerBoostMultiModesConfig[] CoreBoardScheduledPowerBoosts => null;

		public ITimer CurrentPowerBoostTimer { get; set; }

		public ITimer CountDownTimer { get; set; }

		public PowerBoostMultiModesConfig CurrentScheduledPowerBoostConfig => null;

		public PowerBoostMultiModesConfig GetCorePowerBoostConfig()
		{
			return null;
		}

		public override void InitializeService()
		{
		}

		public override void DisposeService()
		{
		}

		public void TryRegisterTimers()
		{
		}

		public bool TryRegisterCurrentTimer()
		{
			return false;
		}

		public void TryRegisterNewTimers()
		{
		}

		public int SortComparison(PowerBoostMultiModesConfig x, PowerBoostMultiModesConfig y)
		{
			return 0;
		}
	}
}
