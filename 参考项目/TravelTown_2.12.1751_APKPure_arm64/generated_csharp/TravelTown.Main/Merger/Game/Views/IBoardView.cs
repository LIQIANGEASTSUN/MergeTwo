using System;
using DG.Tweening;
using Framework.Core.View;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using Merger.Game.Data;
using Merger.Game.Views.Components;
using Merger.Rewards.Interfaces.Datas;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.Game.Views
{
	public interface IBoardView : IViewComponent
	{
		SelectorMode SelectorMode { set; }

		float GridCellSize { get; }

		IBoardUIView BoardUIView { get; }

		RectTransform BoardContainer { get; }

		event Action<BoardItemPosition, bool> ItemTapped;

		event Action<BoardItemPosition> ItemDragStarted;

		event Action<Vector2> ItemDragged;

		event Action<Vector2, Vector2> ItemDragEnded;

		event Action ItemDragCancelled;

		event Action Destroyed;

		void InitializeBoard(int cols, int rows);

		IBoardItemView CreateItem(VisualComponent visualComponent, Transform container);

		void CreateItemAndAddToBoard(BoardItemPosition position, VisualComponent visualComponent, bool transitionIn, BlockerItemView blockerArtOverride = null);

		BlockerItemView GetBoardItemAsset(BoardItemPosition position, string blockerArtFromAdmin);

		void RemoveItem(BoardItemPosition position, IPromise delayedViewRemovePromise = null);

		void StartDragging(BoardItemPosition itemAtPosition);

		void MoveItem(BoardItemPosition oldPosition, BoardItemPosition newPosition);

		IBoardItemView GetItemAtPosition(BoardItemPosition position);

		bool IsPlayingOutAnimation(BoardItemPosition position);

		void SwapItems(BoardItemPosition firstBoardPosition, BoardItemPosition secondBoardPosition);

		void SlideItem(BoardItemPosition itemAtPosition, BoardItemPosition fromPosition, BoardItemPosition toPosition, float tweenDuration, Ease ease = Ease.InOutQuad);

		void SlideItem(BoardItemPosition itemAtPosition, BoardItemPosition toPosition, float tweenDuration, Ease ease = Ease.InOutQuad);

		void SlideItemOut(BoardItemPosition itemAtPosition, Vector2 pointInRoot, float tweenDuration, TweenCallback slideCompleted, Ease ease = Ease.InOutQuad);

		void SlideItemInWithFlyingRewards(BoardItemPosition itemAtPosition, Vector2 worldPosition, ResourceSource source);

		void SlideItemIn(BoardItemPosition itemAtPosition, Vector2 pointInRoot, float tweenDuration, TweenCallback slideCompleted, Ease ease = Ease.InOutQuad);

		void SlideBoosterIn(BoardItemPosition itemAtPosition, Vector2 pointInRoot, float tweenDuration, TweenCallback slideCompleted, float jumpPower, Ease ease = Ease.InOutQuad);

		Vector2 GetTileCoordinates(BoardItemPosition position, RectTransform otherRectTransform = null);

		Vector2 GetTileCoordinatesGlobal(BoardItemPosition position);

		bool MoveItemToTopContainer(BoardItemPosition itemAtPosition, bool overrideSorting, bool setSecondLastSiblingIndex = false);

		void MoveItemBackToOwnContainer(BoardItemPosition itemAtPosition);

		void HideSelector();

		void MoveSelector(BoardItemPosition tappedItemPosition);

		void HideItem(BoardItemPosition position);

		void ShowItem(BoardItemPosition position);

		void ForceDeselectItem();

		IPromise PlayUnlockSurpriseBoxOnBoard(BoardItemPosition position);

		BoardCellView GetTile(BoardItemPosition position);

		void BoardItemFlyInAnimationStarted(IBoardItemView flyingItem, IRewardViewData rewardData);

		void PlayStackingAnimation(BoardItemPosition position, int stackSizeAdded);
	}
}
