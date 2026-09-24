using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializableDerived(1)]
	public class ActivationReEngagementSettings : IActivationReEngagementSettings
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration ReEngagementStarts { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration ReEngagementEvery { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int ReEngagementMax { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaDuration AddsDelayBetweenCycles { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public F64 AddsTimerSkipMultiplier { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int AddsActivationAmountInCycle { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public int AddsHowManyAreGeneratedInCycle { get; set; }

		public ActivationReEngagementSettings()
		{
		}

		public ActivationReEngagementSettings(MetaDuration reEngagementStarts, MetaDuration reEngagementEvery, int reEngagementMax, MetaDuration addsDelayBetweenCycles, F64 addsTimerSkipMultiplier, int addsActivationAmountInCycle, int addsHowManyAreGeneratedInCycle)
		{
		}

		public void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey)
		{
		}
	}
}
