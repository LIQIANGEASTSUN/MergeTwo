using ContextualizedECS;
using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using Merger.MergeBoard.PowerBoost.ViewModel;
using Merger.MergeBoard.Signals;
using UnityEngine;

namespace Merger.MergeBoard.PowerBoost.Views
{
	public class MergeBoardPowerBoostButtonView : ViewBase<MergeBoardPowerBoostButtonViewModel>
	{
		[SerializeField]
		public ReactiveButton _button;

		[SerializeField]
		public Animator _animator;

		[SerializeField]
		public ReactiveText _boostModeText;

		[SerializeField]
		public MergeBoardPowerBoostTooltipView _tooltipView;

		public static readonly int IsMaxBoostBoolean;

		public static readonly int CurrentBoostMode;

		public static readonly int BoostUnlockedClaimed;

		public void Awake()
		{
		}

		public void Setup()
		{
		}

		public void OnDisable()
		{
		}

		public override void OnDestroy()
		{
		}

		public void OnBoostUnlockFinished()
		{
		}

		public void UpdateBoostCompleted()
		{
		}

		public void OnMergeBoardItemSelected(MergeBoardItemSelectedSignal signal)
		{
		}

		public bool TryShowButton(Entity selectedEntity)
		{
			return false;
		}

		public void OnEnergyRefill()
		{
		}

		public void UpdateButtonView()
		{
		}

		public void TryShowTooltip(int boostMode)
		{
		}

		public void OnButtonClicked()
		{
		}

		public void OnBoostModeChanged(int boostMode)
		{
		}

		public void UpdateBoostMode(int boostMode)
		{
		}

		public void UpdateMaxMode()
		{
		}
	}
}
