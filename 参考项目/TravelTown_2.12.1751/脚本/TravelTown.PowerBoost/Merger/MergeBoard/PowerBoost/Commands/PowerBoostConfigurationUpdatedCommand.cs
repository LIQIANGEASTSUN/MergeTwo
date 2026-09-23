using System;
using Framework.Core.Command;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.MergeBoard.PowerBoost.Services;
using Merger.MergeBoard.PowerBoost.Signals;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Commands
{
	public class PowerBoostConfigurationUpdatedCommand : CommandBase<PowerBoostConfigurationUpdatedSignal>
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostModesCalculator _powerBoostModesCalculator;

		public override void Execute(PowerBoostConfigurationUpdatedSignal signal)
		{
		}
	}
}
