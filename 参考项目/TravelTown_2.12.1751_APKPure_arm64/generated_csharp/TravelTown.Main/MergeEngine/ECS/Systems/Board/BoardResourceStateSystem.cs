using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Systems.State;
using MergeEngine.ECS.Util;

namespace MergeEngine.ECS.Systems.Board
{
	public class BoardResourceStateSystem : StateSystemBase<CoreBoardResources>
	{
		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		public override void LoadState(CoreBoardResources newState)
		{
		}
	}
}
