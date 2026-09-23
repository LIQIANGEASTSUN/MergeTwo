using Framework.Core.View;
using Framework.Localisation.Data;
using UnityEngine;

namespace Merger.MergeBoardInfoBar.Views
{
	public class InfoBarItemLabelConfigurationView : ViewComponent
	{
		[SerializeField]
		public LocalisationKey ItemAlreadyUnlockingLocalization;

		[SerializeField]
		public LocalisationKey ItemCollectLocalization;

		[SerializeField]
		public LocalisationKey DoubletapLocalization;

		[SerializeField]
		public LocalisationKey DoubletapPlaygroundLocalization;

		[SerializeField]
		public LocalisationKey ItemLockedLocalization;

		[SerializeField]
		public LocalisationKey ItemMaxLevelLocalization;

		[SerializeField]
		public LocalisationKey PowerBoostedItemMaxLevelLocalization;

		[SerializeField]
		public LocalisationKey ItemTimeLockedLocalization;

		[SerializeField]
		public LocalisationKey ItemUnlockLocalization;

		[SerializeField]
		public LocalisationKey ItemUnlockingLocalization;

		[SerializeField]
		public LocalisationKey MergeToGetNextLevelLocalization;

		[SerializeField]
		public LocalisationKey PowerBoostedMergeToGetNextLevelLocalization;

		[SerializeField]
		public LocalisationKey RechargeEndLocalization;

		[SerializeField]
		public LocalisationKey FeedingCombinationLocalization;

		[SerializeField]
		public LocalisationKey ItemExpiresIn;

		[SerializeField]
		public LocalisationKey ItemTransformsIn;

		[SerializeField]
		public LocalisationKey TimeLimitedItemLifetimeEndsIn;
	}
}
