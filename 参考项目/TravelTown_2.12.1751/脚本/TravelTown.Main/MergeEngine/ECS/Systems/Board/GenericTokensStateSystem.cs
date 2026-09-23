using System;
using Framework.Core.Services.Backend.Remote.Payloads;
using GameCore.Model;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Systems.State;
using Merger.Game.Model;
using Merger.Rewards.Interfaces;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class GenericTokensStateSystem : StateSystemBase<GenericTokenState>
	{
		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IResourceReplenishmentModel _resourceReplenishmentModel;

		public ResourceReplenishmentSystem ResourceReplenishmentSystem => null;

		public override void LoadState(GenericTokenState newState)
		{
		}

		public void UpdateRefillData(IRewardType rewardType, RewardRefillData rewardRefillData)
		{
		}
	}
}
