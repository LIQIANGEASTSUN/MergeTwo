using System;
using Framework.Core.Services.Backend.Remote.Payloads.BalanceState;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;

namespace MergeEngine.ECS.Systems.State
{
	public class BalanceStateSystem : StateSystemBase<BackendBalancePayload>
	{
		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		public override void LoadState(BackendBalancePayload newState)
		{
		}

		public void UpdateResource(PlayerResourceEnum resourceType, int value)
		{
		}
	}
}
