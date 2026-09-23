using System;
using Framework.Core.Command;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Signals;
using Merger.MergeBoard.View.Layout;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Commands
{
	public class MergeBoardPowerBoostedItemLandedCommand : CommandBase<MergeBoardItemLandedSignal>
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _boardLayout;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override void Execute(MergeBoardItemLandedSignal signal)
		{
		}
	}
}
