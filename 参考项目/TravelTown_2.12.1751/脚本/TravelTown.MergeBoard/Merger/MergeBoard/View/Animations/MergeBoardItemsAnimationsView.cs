using System;
using System.Collections.Generic;
using System.Linq;
using ContextualizedECS;
using ContextualizedECS.Context;
using DG.Tweening;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.MergeBoard.Data.TickResultArgs;
using Merger.MergeBoard.Handlers;
using Merger.MergeBoard.View.Items;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoard.ViewModel;
using UnityEngine;
using strange.extensions.promise.api;
using strange.extensions.promise.impl;

namespace Merger.MergeBoard.View.Animations
{
	public class MergeBoardItemsAnimationsView : ViewBase<MergeBoardItemsAnimationsViewModel>
	{
		[SerializeField]
		public MergeBoardItemsContainer _itemsContainer;

		[SerializeField]
		public MergeBoardLayout _layout;

		[SerializeField]
		public float _jumpPower;

		[SerializeField]
		public float _feedingProduceAnimationDuration;

		[SerializeField]
		public float _feedingProduceParticlesOffDelay;

		[SerializeField]
		public float _boardItemSlideBaseDuration;

		[SerializeField]
		public float _boardItemConsumedSlideBaseDuration;

		[NonSerialized]
		public BoardItemAnimationHelper _animationHelper;

		public void Awake()
		{
		}

		public IPromise PlayItemsAnimations(TickArgs boardResult)
		{
			return null;
		}

		public IPromise HandleBoardResult(TickArgs boardResult)
		{
			return null;
		}

		public void PlayItemsMergedAnimations(TickArgs boardResult)
		{
		}

		public void PlayItemSplitAnimations(TickArgs boardResult)
		{
		}

		public void PlayMovementBlockedAnimations(TickArgs boardResult)
		{
		}

		public void PlayItemMovedAnimations(TickArgs boardResult)
		{
		}

		public void PlayItemSelectionBoxTransformAnimations(TickArgs boardResult)
		{
		}

		public void PlayFeedingCombinationExtractionAnimations(TickArgs boardResult)
		{
		}

		public IEnumerable<IPromise> HandleItemCreationResults(TickArgs boardResult)
		{
			return null;
		}

		public IPromise HandleItemCreationGroup(IGrouping<Entity, ItemSpawnedResult> itemCreatedGroup, Dictionary<Entity, ItemConsumedResult> consumedItemsLookup, IEnumerable<FeedingCombinationItemInsertedResult> feedingInsertedResults)
		{
			return null;
		}

		public void HideAllSpawnedItems(IGrouping<Entity, ItemSpawnedResult> itemCreatedGroup)
		{
		}

		public IPromise GetConsumeItemPromise(Entity sourceEntity, Dictionary<Entity, ItemConsumedResult> consumedItemsLookup)
		{
			return null;
		}

		public List<IPromise> ShowAndAnimateSpawnedItems(IGrouping<Entity, ItemSpawnedResult> itemCreatedGroup)
		{
			return null;
		}

		public void ResolveWhenAllAnimationsComplete(List<IPromise> animationPromises, Promise creationGroupAnimationPromise)
		{
		}

		public void HideFeedingConsumedItemView(Entity feedingEntity, IEnumerable<FeedingCombinationItemInsertedResult> feedingInsertedResults)
		{
		}

		public IEnumerable<IPromise> HandleItemRewardCollectionResults(TickArgs boardResult)
		{
			return null;
		}

		public IPromise PlayConsumeItemAnimation(ItemConsumedResult itemConsumed)
		{
			return null;
		}

		public IPromise AnimateItemCreationResult(ItemSpawnedResult spawnedItem)
		{
			return null;
		}

		public IPromise PlayNewItemCreatedFromFeedingCombinationAnimation(ItemSpawnedResult spawnedItem, IBoardItemView newItem)
		{
			return null;
		}

		public void ToggleOffCombinationParticlesAfterDelay(IBoardItemView itemView)
		{
		}

		public void HandleSplitResult(ItemSplitResult itemSplit)
		{
		}

		public IPromise PlayNewItemOnBoardAnimation(IBoardItemView itemView, bool transitionIn, int sourcePosition, int targetPosition, Ease ease)
		{
			return null;
		}

		public IPromise SlideItemByDuration(IBoardItemView itemView, int targetBoardIndex, float tweenDuration, Ease ease)
		{
			return null;
		}

		public IPromise SlideItemByDistance(IBoardItemView itemView, int sourceBoardIndex, int targetBoardIndex, float baseDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public void Jump(IBoardItemView item, float tweenDuration)
		{
		}

		public void TransitionIn(IBoardItemView item)
		{
		}
	}
}
