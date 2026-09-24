using System;
using System.Collections.Generic;
using Framework.Core.MVVM.ViewModel;
using MergeEngine.Model.Configuration;
using Merger.Data.Assets;
using Merger.Game.Views.BoardItem;
using Merger.RemoteContentManager.Services;
using Merger.Services.User;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class BoardItemBehavioursHandlerViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IBoardItemBehavioursConfigurationModel _boardItemBehavioursConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IRemoteContentService _remoteContentService;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IAnimatedBoardItemSpritesConfigurationModel _animatedBoardItemSpritesConfigurationModel;

		public readonly string BehavioursPoolIdStringFormat;

		public void InitializeBehaviourPools(Transform behaviourPoolsHolder, IEnumerable<BehaviourPrefabData> combinedBehaviourConfig)
		{
		}

		public Dictionary<string, BehaviourPrefabData> GetCombinedBehaviourConfig(List<BehaviourPrefabData> behaviourOverrides)
		{
			return null;
		}

		public void PrepareBehaviours(BoardItemView2 boardItemView2)
		{
		}

		public void AttachDefaultBehaviours(BoardItemView2 boardItemView2)
		{
		}

		public void PrepareAnimatedSpriteAssets(BoardItemView2 boardItemView2)
		{
		}

		public bool TryGetBundlePath(IEnumerable<ClientAsset> assets, out string path)
		{
			path = null;
			return false;
		}
	}
}
