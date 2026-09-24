using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using Merger.LiveOps.Events.ECS.System;
using Merger.LiveOps.Events.Model.Data;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board.Event
{
	public class EventFreeVouchersStateSystem : StateSystemBase<EventBoardFreeVouchers>
	{
		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[NonSerialized]
		public LiveOpsEventSystem _liveOpsEventSystem;

		public override void InitializeSystem()
		{
		}

		public override void LoadState(EventBoardFreeVouchers newState)
		{
		}

		public void UpdateFreeBurst(int value, LiveOpsEventProgress progress)
		{
		}
	}
}
