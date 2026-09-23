using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using JetBrains.Annotations;
using Merger.MergeBoard.PowerBoost.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.PowerBoost.Views
{
	public class MergeBoardPowerBoostBannerView : ViewBase<MergeBoardPowerBoostBannerViewModel>
	{
		[SerializeField]
		public Animator _animator;

		[SerializeField]
		[CanBeNull]
		public ReactiveText _textFormat;

		[SerializeField]
		public ReactiveText _boostModeText;

		public static readonly int IsMaxBoost;

		public static readonly int PowerBoostOff;

		public static readonly int ShowBannerTrigger;

		public static readonly int CurrentBoostMode;

		public void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public void OnBoostModeChanged(int newBoostMode)
		{
		}

		public void ShowBanner(int boostMode)
		{
		}

		public void UpdateBoostMode(int boostMode)
		{
		}
	}
}
