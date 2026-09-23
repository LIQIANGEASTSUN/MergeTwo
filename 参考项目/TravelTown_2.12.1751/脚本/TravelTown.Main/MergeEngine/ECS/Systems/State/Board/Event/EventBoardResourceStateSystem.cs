using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using Merger.Services.Backend.Sync.Data.Payloads;

namespace MergeEngine.ECS.Systems.State.Board.Event
{
	public class EventBoardResourceStateSystem : StateSystemBase<EventBoardResources>
	{
		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[InjectSystem]
		[NonSerialized]
		public PlayerEventLevelSystem _playerEventLevelSystem;

		public override void LoadState(EventBoardResources newState)
		{
		}

		public void UpdateSpecificResource(Resource resource)
		{
		}

		public void UpdateEventLevel(Resource resource)
		{
		}

		public void UpdateEventXp(Resource resource)
		{
		}

		public void UpdateEventEnergy(Resource resource)
		{
		}
	}
}
