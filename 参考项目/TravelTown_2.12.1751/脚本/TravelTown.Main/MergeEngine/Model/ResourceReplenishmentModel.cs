using System;
using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using GameCore.Model;
using Merger.Rewards.Interfaces;
using Zenject;

namespace MergeEngine.Model
{
	public class ResourceReplenishmentModel : IResourceReplenishmentModel
	{
		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[NonSerialized]
		public readonly Dictionary<IRewardType, IRewardReplenishment> _replenishmentsCache;

		public IRewardReplenishment GetReplenishmentConfiguraiton(IRewardType rewardType)
		{
			return null;
		}

		public IRewardReplenishment GetResourceReplenishment(IRewardType rewardType)
		{
			return null;
		}

		public void UpdateReplenishments(int playerLevel)
		{
		}
	}
}
