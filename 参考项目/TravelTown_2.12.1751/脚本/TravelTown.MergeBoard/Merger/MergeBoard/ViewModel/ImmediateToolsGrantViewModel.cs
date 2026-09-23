using System;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.MergeBoard.Logic;
using Merger.Rewards.Interfaces;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class ImmediateToolsGrantViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IInventoryModel _inventoryModel;

		[Inject]
		[NonSerialized]
		public IToolSpawnHandler _toolSpawnHandler;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		public void UpdateToolProgress(IMergeItem tool, PlayerResourceEnum toolResource)
		{
		}

		public PlayerResourceEnum GetToolResource(string toolUniqueId)
		{
			return default(PlayerResourceEnum);
		}

		public float GetToolProgressPercentage(PlayerResourceEnum toolResource)
		{
			return 0f;
		}

		public void GrantResource(IRewardType rewardType, int amount, bool delay, ResourceSource resourceSource, bool shouldChangeRealValue)
		{
		}

		public void SetToolProgress(PlayerResourceEnum toolResource, float currentProgress)
		{
		}
	}
}
