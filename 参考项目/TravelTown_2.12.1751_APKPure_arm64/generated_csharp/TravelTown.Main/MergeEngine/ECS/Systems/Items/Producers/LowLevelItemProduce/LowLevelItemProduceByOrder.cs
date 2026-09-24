using System;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.Model.Tasks.RequirementProgress;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce
{
	public class LowLevelItemProduceByOrder : LowLevelProduceStrategyBase
	{
		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		public override int SpawnPercentage => 0;

		public override bool TryGetProduceData(IItemSpawningComponent itemSpawningComponent, out LowLevelItemProduceData result)
		{
			result = null;
			return false;
		}

		public bool ShouldSpawnLowLevelItem(TaskRequirementProgressBase requirement, IItemSpawningComponent itemSpawningComponent)
		{
			return false;
		}
	}
}
