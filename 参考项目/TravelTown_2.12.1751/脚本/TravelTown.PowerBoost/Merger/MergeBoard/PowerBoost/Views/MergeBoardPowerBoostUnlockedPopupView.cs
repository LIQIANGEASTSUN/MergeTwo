using System;
using Framework.Core.View;
using Framework.Core.View.ReactiveComponents;
using Framework.Localisation.Data;
using Merger.Game.Views.Popups;
using Merger.MergeBoard.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.PowerBoost.Views
{
	public class MergeBoardPowerBoostUnlockedPopupView : PopupAnimationGraphViewBase<MergeBoardPowerBoostUnlockedPopupViewModel>
	{
		[SerializeField]
		public Animator _animator;

		[SerializeField]
		public ReactiveButton _claimButton;

		[Header("Texts")]
		[SerializeField]
		public ReactiveText _powerBoostMode;

		[SerializeField]
		public ReactiveText _subtitleText;

		[SerializeField]
		public ReactiveText _producerTextFormat;

		[SerializeField]
		public ReactiveText _producerText;

		public static readonly int IsMaxBoostBoolean;

		public void Start()
		{
		}

		public override void TransitionInFinished()
		{
		}

		public override void TransitionOut(Action<IViewComponent> onComplete)
		{
		}

		public void SetupTexts()
		{
		}

		public void SetBoost()
		{
		}

		public void SetupSubtitle()
		{
		}

		public LocalisationKey GetSubtitleTextFormat()
		{
			return null;
		}

		public void SetupProducerText()
		{
		}

		public void SetupClaimButton()
		{
		}

		public void OnClaimClicked()
		{
		}
	}
}
