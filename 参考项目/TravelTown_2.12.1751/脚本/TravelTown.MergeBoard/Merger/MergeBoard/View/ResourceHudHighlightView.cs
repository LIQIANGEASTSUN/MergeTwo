using System;
using System.Collections.Generic;
using DG.Tweening;
using Framework.Core.MVVM.View;
using Merger.MergeBoard.Signals;
using Merger.MergeBoard.ViewModel;
using UnityEngine;
using UnityEngine.Events;
using strange.extensions.promise.api;

namespace Merger.MergeBoard.View
{
	public class ResourceHudHighlightView : ViewBase<ResourceHudHighlightViewModel>
	{
		[SerializeField]
		public AnimationTargetView[] _animationTargets;

		[SerializeField]
		public int _highlightSortingOrder;

		[SerializeField]
		public CanvasGroup _highlightOverlay;

		[SerializeField]
		public float _fadeInDuration;

		[SerializeField]
		public float _fadeOutDuration;

		[SerializeField]
		public float _delayBeforeFadeOut;

		[NonSerialized]
		public HashSet<AnimationTargetView> _activeTargets;

		[NonSerialized]
		public bool _isHighlightEnabledOnFly;

		[NonSerialized]
		public bool _isHighlightVisible;

		[NonSerialized]
		public IPromise _hideAnimationPromise;

		[NonSerialized]
		public Tween _fadeTween;

		[NonSerialized]
		public Dictionary<AnimationTargetView, (UnityAction onStart, UnityAction onFinish)> _targetListeners;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void OnHighlightModeChanged(ResourceHudHighlightOnFlySignal signal)
		{
		}

		public void OnAnyFlyStarted(AnimationTargetView target)
		{
		}

		public void OnAnyFlyFinished(AnimationTargetView target)
		{
		}

		public void PlayShowSequence()
		{
		}

		public void PlayHideSequence()
		{
		}

		public void AddHighlight()
		{
		}

		public void RemoveHighlight()
		{
		}
	}
}
