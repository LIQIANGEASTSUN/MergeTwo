using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using GameCore.Model;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using Merger.Rewards.Interfaces;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board.Event
{
	public class EventBoardRefillingStateSystem : StateSystemBase<EventBoardResourcesRefilling>
	{
		[InjectSystem]
		[NonSerialized]
		public ResourceReplenishmentSystem _resourceReplenishmentSystem;

		[Inject]
		[NonSerialized]
		public IResourceReplenishmentModel _resourceReplenishmentConfiguration;

		public override void LoadState(EventBoardResourcesRefilling newState)
		{
		}

		public void UpdateResourceRefill(IRewardType rewardType, BoardResourceRefill refillState)
		{
		}
	}
}
