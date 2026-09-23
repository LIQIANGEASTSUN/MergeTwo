using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using GameCore.Model;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Systems.State;
using MergeEngine.ECS.Util;
using Merger.Rewards.Interfaces;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class ResourcesRefillingStateSystem : StateSystemBase<CoreBoardResourcesRefilling>
	{
		[Inject]
		[NonSerialized]
		public IResourceReplenishmentModel _resourceReplenishmentModel;

		[InjectSystem]
		[NonSerialized]
		public ResourceReplenishmentSystem _resourceReplenishmentSystem;

		public override void LoadState(CoreBoardResourcesRefilling newState)
		{
		}

		public void UpdateResourceRefill(IRewardType rewardType, BoardResourceRefill refillState)
		{
		}
	}
}
