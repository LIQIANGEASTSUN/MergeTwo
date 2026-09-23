using System;
using System.Collections.Generic;
using ContextualizedECS.Context;
using DG.Tweening;
using Framework.Core.MVVM.View;
using Merger.Game.Views;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Handlers;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoardSellItemCapability.Data.TickResultArgs;
using Merger.MergeBoardSellItemCapability.ViewModels;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.MergeBoardSellItemCapability.Views
{
	public class SellItemAnimationsView : ViewBase<SellItemAnimationsViewModel>, IPostTickBoardItemAnimationHandler
	{
		[SerializeField]
		public float _sellItemTweenDuration;

		[SerializeField]
		public float _undoSellItemTweenDuration;

		[NonSerialized]
		public BoardItemAnimationHelper _animationHelper;

		[NonSerialized]
		public IBoardItemView _itemInSellAnimation;

		[NonSerialized]
		public Transform _overlayLayer;

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

		public IEnumerable<IPromise> HandleItemSellAnimations(TickArgs tickArgs, PostTickBoardItemAnimationContext context)
		{
			return null;
		}

		public void HandleItemUndoSellAnimations(TickArgs tickArgs, PostTickBoardItemAnimationContext context)
		{
		}

		public void PlayItemUndoSellAnimations(IBoardItemView itemView, ItemUndoSellResult itemSoldResult, PostTickBoardItemAnimationContext context)
		{
		}

		public void TransitionIn(IBoardItemView item)
		{
		}

		public IPromise SlideItem(IBoardItemView itemView, int boardTargetPosition, float tweenDuration, Ease ease, IMergeBoardLayout layout)
		{
			return null;
		}
	}
}
