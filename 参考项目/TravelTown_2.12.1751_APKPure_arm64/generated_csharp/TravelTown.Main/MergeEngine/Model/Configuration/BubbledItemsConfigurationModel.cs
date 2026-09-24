using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems;
using Merger.BubbleBlaster.Configuration;
using Merger.BubbleBlaster.Models;
using Merger.LiveOps.Events.Configuration;
using Merger.LiveOps.Events.Model;
using Merger.RemoteContentManager.Models;
using Merger.RemoteContentManager.Services;
using Merger.RemoteSprite.Services;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.Model.Configuration
{
	public class BubbledItemsConfigurationModel : ConfigurationModelBase<GameConfig>, IBubbledItemsConfigurationModel
	{
		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IRemoteMergeItemsService _remoteMergeItemsService;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IRemoteContentService _remoteContentService;

		[Inject]
		[NonSerialized]
		public IBubbleBlasterFeatureModel _blasterFeatureModel;

		[NonSerialized]
		public BubbledItemsConfig _defaultBubbledItemsConfig;

		[NonSerialized]
		public List<WeightedItemSpawnable> _expiredBubbleSpawns;

		[NonSerialized]
		public List<WeightedItemSpawnable> _removedBubbleSpawns;

		[NonSerialized]
		public RemoteContentBundleHandle _remoteContentBundleHandler;

		public BubbledItemsConfig BubbledItemsConfig => null;

		public NewBubbledItemsConfig NewBubbledItemsConfig => null;

		public NewBubbledItemsConfig CoreBoardNewBubbledItemsConfig => null;

		public List<LiveOpsEventsSharedConfigurationSingleBubbleItemSettings> BubbledItemOverrides => null;

		public IBoardLiveOpsConfiguration LiveOpBoardConfig => null;

		public BubbledItemsConfig LiveOpBubbledItemsConfig => null;

		public List<WeightedItemSpawnable> ExpiredBubbleSpawnedItems => null;

		public List<WeightedItemSpawnable> CompensationForRemovedBubblesItemsSpawnList => null;

		public void SetupExpiredBubbleSpawns()
		{
		}

		public void SetupRemovedBubbleSpawns()
		{
		}

		public NewBubbledItemsConfig GetCoreBoardBubbledItemsConfig()
		{
			return null;
		}

		public NewBubbledItemsConfig GetLiveOpsBubbledItemsConfig()
		{
			return null;
		}

		public BubbleBlasterTierConfig GetBlasterTierForHc(int hcValue)
		{
			return null;
		}

		public override void HandleDataLoaded(GameConfig data)
		{
		}
	}
}
