using System;
using Merger.MergeBoard.PowerBoost.Data;
using Merger.MergeBoard.PowerBoost.Services;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.ViewModel
{
	public class MergeBoardPowerBoostUnlockedPopupViewModel : MergeBoardPowerBoostViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostPersistanceService _powerBoostPersistance;

		public MergeBoardPowerBoostUnlockedPopupPayload Payload { get; set; }

		public MergeBoardPowerBoostUnlockedPopupViewModel(MergeBoardPowerBoostUnlockedPopupPayload payload)
		{
		}

		public bool IsMaxBoostUnlocked(int unlockedBoost)
		{
			return false;
		}

		public void OnPopupOpened()
		{
		}

		public void OnPopupClosed()
		{
		}

		public void MarkUnlockedBoosts()
		{
		}
	}
}
