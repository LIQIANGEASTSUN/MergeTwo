using System;
using System.Collections.Generic;
using ContextualizedECS.Context;
using Framework.Core;
using MergeEngine.Configuration.Definitions;
using Merger.CollectibleItems.Models;
using Merger.Game.Model;
using Merger.MergeBoard.Data.TickResultArgs;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.View.Layout;
using Merger.Rewards.Interfaces;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.Handlers
{
	public class CollectableItemsGrantProcessor : Base, IBoardControllerPostTickProcessor, IDisposable
	{
		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public ICollectableRewardsModel _itemRewardCollectableModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[NonSerialized]
		public Dictionary<string, Action> _pendingUpdateResourceDisplayValueCallbacks;

		public void Process(TickArgs result)
		{
		}

		public override void HandleDisposed()
		{
		}

		public void GrantResource(string itemId, IRewardType rewardType, int amount, ResourceSource resourceSource)
		{
		}

		public Transform GetTransformAtPosition(int positionComponentPosition)
		{
			return null;
		}

		public void PlayResourceGrantAnimation(ItemResourceCollectedResult resourceCollected, Action onComplete = null)
		{
		}

		public void PlayFlyAnimationForCollectableItems(ItemCollectedResult collected, Reward rewardReceivedFromBackend)
		{
		}
	}
}
