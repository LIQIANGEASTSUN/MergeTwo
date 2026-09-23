using System;
using Framework.Core.View;
using Framework.Core.View.ReactiveComponents;
using Framework.UIFSM.View;
using Merger.Game.Views.Popups;
using Merger.Game.Views.Popups.Components;
using Merger.PowerBoost.Payloads;
using Merger.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.PowerBoost.Views
{
	public class PowerBoostModeUnlockedPopupView : PopupAnimationGraphViewBase<PowerBoostViewModel>, IViewWithPayload<PowerBoostModeUnlockedPayload>
	{
		[SerializeField]
		public ReactiveText _powerBoostModeNumber;

		[SerializeField]
		public ReactiveText _energyToTryText;

		[SerializeField]
		public RewardsView _rewardsView;

		[SerializeField]
		public ReactiveButton _claimButton;

		[SerializeField]
		public ReactiveText _producerCoreText;

		[SerializeField]
		public ReactiveText _producerEventText;

		[SerializeField]
		public ReactiveText _subtitleText;

		[SerializeField]
		public Animator _animator;

		[NonSerialized]
		public PowerBoostModeUnlockedPayload _payload;

		public static readonly int IsInBoardEvent;

		public static readonly int IsMaxBoostBoolean;

		public const string ProducerTextCoreKey = "powerboost_unlockboost_bottomtext_normal";

		public const string ProducerTextEventKey = "powerboost_unlockboost_bottomtext_event";

		public const string SubHeadTextKey = "powerboost_unlockboost_subtitle";

		public const string SubHeadTextThresholdKey = "powerboost_unlockboost_threshold_subtitle";

		[NonSerialized]
		public bool _isClaiming;

		public ReactiveText ProducerText => null;

		public ReactiveText SubtitleText => null;

		public string ProducerTextFormat => null;

		public string SubtitleTextFormat => null;

		public string GetSubtitleText()
		{
			return null;
		}

		public override void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public void SetPayload(PowerBoostModeUnlockedPayload payload)
		{
		}

		public void SetBooleans(PowerBoostModeUnlockedPayload payload)
		{
		}

		public bool IsMaxBoostIndication(int unlockedBoost)
		{
			return false;
		}

		public void SetReward(PowerBoostModeUnlockedPayload payload)
		{
		}

		public void SetProducerText(PowerBoostModeUnlockedPayload payload)
		{
		}

		public void SetSubtitleText(PowerBoostModeUnlockedPayload payload)
		{
		}

		public void Claim()
		{
		}

		public override void TransitionOut(Action<IViewComponent> onComplete)
		{
		}

		public override void TransitionInFinished()
		{
		}
	}
}
