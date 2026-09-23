using System;
using Framework.Core.MVVM.View;
using Merger.Game.Data;
using Merger.Game.ViewModel;
using Merger.Rewards.Signals;
using UnityEngine;
using UnityEngine.Events;

namespace Merger.MergeBoard.View
{
	public class AnimationTargetView : ViewBaseWithID<AnimationTargetViewModelBase>
	{
		[SerializeField]
		public RectTransform _animationTarget;

		[SerializeField]
		public UnityEvent OnAnimationStarted;

		[SerializeField]
		public UnityEvent OnIconReached;

		[SerializeField]
		public UnityEvent OnAnimationFinished;

		[NonSerialized]
		public string _accumulationAnimationId;

		public string CurrentAnimationId => null;

		public void OnEnable()
		{
		}

		public void Start()
		{
		}

		public void OnDisable()
		{
		}

		public override void OnDestroy()
		{
		}

		public void SubscribeToSignals()
		{
		}

		public void OnGameStateChanged(GameState _)
		{
		}

		public void UnsubscribeFromSignals()
		{
		}

		public void OnRewardsFlyAnimationStarted(RewardsFlyAnimationStartedSignal signal)
		{
		}

		public void OnIconReachedTarget(RewardFlyIconAnimationFinishedSignal signal)
		{
		}

		public void OnRewardsFlyAnimationFinished(RewardFlyAnimationFinishedSignal signal)
		{
		}
	}
}
