using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Activation
{
	public class ActivationReEngagementSettingsSource : IItemConfigPart<ActivationReEngagementSettings>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public MetaDuration? ReEngagementStarts;

		public MetaDuration? ReEngagementEvery;

		public int? ReEngagementMax;

		public MetaDuration? AddsDelayBetweenCycles;

		public F64? AddsTimerSkipMultiplier;

		public int? AddsActivationAmountInCycle;

		public int? AddsHowManyAreGeneratedInCycle;

		public string ConfigKey => null;

		public ActivationReEngagementSettings ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
