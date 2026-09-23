using System;
using Framework.Core.Command;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.MergeBoard.PowerBoost.Services;
using Merger.MergeBoard.PowerBoost.Signals;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Commands
{
	public class PowerBoostInitializeOnEventActivationCommand : CommandBase<PowerBoostInitializeOnEventActivationSignal>
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostPersistanceService _powerBoostPersistanceService;

		[Inject]
		[NonSerialized]
		public IPowerBoostModesCalculator _powerBoostModesCalculator;

		public override void Execute(PowerBoostInitializeOnEventActivationSignal signal)
		{
		}
	}
}
