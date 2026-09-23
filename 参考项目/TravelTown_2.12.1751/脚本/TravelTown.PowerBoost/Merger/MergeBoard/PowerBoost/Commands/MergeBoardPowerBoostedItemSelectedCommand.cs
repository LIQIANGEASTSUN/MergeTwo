using System;
using Framework.Core.Command;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.MergeBoard.PowerBoost.Services;
using Merger.MergeBoard.Signals;
using Merger.Models;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Commands
{
	public class MergeBoardPowerBoostedItemSelectedCommand : CommandBase<MergeBoardItemSelectedSignal>
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModesCalculator _powerBoostModesCalculator;

		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public override void Execute(MergeBoardItemSelectedSignal signal)
		{
		}
	}
}
