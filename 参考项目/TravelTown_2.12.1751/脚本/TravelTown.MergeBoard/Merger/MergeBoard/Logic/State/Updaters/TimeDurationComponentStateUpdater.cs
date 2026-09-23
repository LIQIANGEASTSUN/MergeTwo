using System;
using Framework.Core.Services.ServerTime;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Logic.State.Updaters.Base;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Logic.State.Updaters
{
	public class TimeDurationComponentStateUpdater : ComponentStateUpdaterBase<TimeDurationComponent, ItemPayloadBase>, IBoardItemComponentStateUpdater
	{
		[NonSerialized]
		public readonly IServerTimeService _serverTimeService;

		public long CurrentServerTimeMS => 0L;

		public TimeDurationComponentStateUpdater(IServerTimeService serverTimeService)
		{
		}

		public override void UpdateFromState(ref TimeDurationComponent component, ItemPayloadBase itemState)
		{
		}
	}
}
