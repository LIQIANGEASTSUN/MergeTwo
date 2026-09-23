using System;
using ContextualizedECS.Context;
using DG.Tweening;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Handlers;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoardQueue.Data.TickResultArgs;
using Merger.MergeBoardQueue.ViewModels;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.MergeBoardQueue.Views
{
	public class DequeueAnimationView : ViewBase<DequeueAnimationViewModel>, IPostTickBoardItemAnimationHandler
	{
		[SerializeField]
		public RectTransform _boardQueueRectTransform;

		[SerializeField]
		public float _dequeueDuration;

		[SerializeField]
		public string _ItemSpawnedImmediatelyFromQueueToBoardAnimationName;

		[NonSerialized]
		public Transform _overlayLayer;

		[NonSerialized]
		public BoardItemAnimationHelper _animationHelper;

		public Transform OverlayLayer => null;

		public void Awake()
		{
		}

		public bool CanHandle(TickArgs tickArgs)
		{
			return false;
		}

		public IPromise HandleAnimation(TickArgs tickArgs, PostTickBoardItemAnimationContext context)
		{
			return null;
		}

		public void PlayItemDequeuedAnimation(IBoardItemView itemView, ItemDequeuedResult itemDequeuedResult, PostTickBoardItemAnimationContext context)
		{
		}

		public IPromise SlideItem(IBoardItemView itemView, int boardTargetPosition, float tweenDuration, Ease ease, IMergeBoardLayout layout)
		{
			return null;
		}
	}
}
