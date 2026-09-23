using System;
using DG.Tweening;
using MergeEngine.Data;
using Merger.Game.Views;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.MergeBoard.Handlers
{
	public class BoardItemAnimationHelper
	{
		[NonSerialized]
		public readonly Vector2 _tileSize;

		public BoardItemAnimationHelper(Vector2 tileSize)
		{
		}

		public float GetDurationByDistance(RectTransform sourceRectTransform, RectTransform targetRectTransform, float baseDuration)
		{
			return 0f;
		}

		public IPromise SlideItemToBoardPositionByDistance(IBoardItemView item, RectTransform sourceRectTransform, RectTransform targetRectTransform, BoardItemPosition targetBoardItemPosition, float baseDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public IPromise SlideItemToBoardPositionByDuration(IBoardItemView item, Vector3 targetPosition, BoardItemPosition targetBoardItemPosition, float tweenDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public IPromise SlideRectTransformByDuration(IBoardItemView item, Vector2 targetPosition, float tweenDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public IPromise SlideTransformByDistance(IBoardItemView item, RectTransform sourceRectTransform, RectTransform targetRectTransform, float baseDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public IPromise SlideTransformByDuration(IBoardItemView item, Vector3 targetPosition, float tweenDuration, Ease ease = Ease.InOutQuad)
		{
			return null;
		}

		public IPromise PlayTweenForBoardItemView(IBoardItemView boardItemView, Tweener tween)
		{
			return null;
		}
	}
}
