using System;
using DG.Tweening;
using GameLogic.Player.Items;
using UI.Indicators;
using UnityEngine;

namespace Metacore.MergeMansion.UI.Board
{
	public class MergeChainProgressItemView : MonoBehaviour
	{
		public struct TweenArgs
		{
			public float Delay;

			public float Duration;

			public AnimationCurve Curve;

			public TweenArgs(float delay, float duration, AnimationCurve curve)
			{
				Delay = 0f;
				Duration = 0f;
				Curve = null;
			}
		}

		public enum State
		{
			ReachedEarlier = 0,
			ReachedCurrent = 1,
			NotReached = 2
		}

		public enum Position
		{
			NotLast = 0,
			Last = 1
		}

		public static readonly int ACTIVE_NOT_LAST_ANIMATOR_STATE;

		public static readonly int ACTIVE_LAST_ANIMATOR_STATE;

		[SerializeField]
		public SpineInfoItemIndicator _itemIndicator;

		[SerializeField]
		public GameObject[] _activeStateObjects;

		[SerializeField]
		public Animator _animator;

		[SerializeField]
		public RectTransform _itemContainer;

		[SerializeField]
		public RectTransform _nextItemArrowContainer;

		[SerializeField]
		public DOTweenAnimation[] _nextItemArrowAnimations;

		[NonSerialized]
		public Position _position;

		[NonSerialized]
		public State _state;

		public void Init(IItemDefinition itemDefinition, State state, Position position, TweenArgs itemContainerTweenArgs, TweenArgs nextItemArrowContainerTweenArgs)
		{
		}

		public void UpdateState(State state)
		{
		}

		public void SetInitialState(State state)
		{
		}

		public void SetActiveStateObjects(bool active)
		{
		}

		public int GetActiveAnimatorState()
		{
			return 0;
		}

		public void Tween(TweenArgs itemContainerTweenArgs, TweenArgs nextItemArrowContainerTweenArgs)
		{
		}

		public static void Tween(RectTransform target, TweenArgs args)
		{
		}

		public void RefreshNextItemArrowAnimations()
		{
		}

		public void SetNextItemArrowAnimationsEnabled(bool animationsEnabled)
		{
		}
	}
}
