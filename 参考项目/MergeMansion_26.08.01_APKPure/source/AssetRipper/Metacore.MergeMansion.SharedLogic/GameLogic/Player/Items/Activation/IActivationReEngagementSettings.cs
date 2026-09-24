using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializable]
	public interface IActivationReEngagementSettings
	{
		MetaDuration ReEngagementStarts { get; }

		MetaDuration ReEngagementEvery { get; }

		int ReEngagementMax { get; }

		MetaDuration AddsDelayBetweenCycles { get; }

		F64 AddsTimerSkipMultiplier { get; }

		int AddsActivationAmountInCycle { get; }

		int AddsHowManyAreGeneratedInCycle { get; }

		void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey);
	}
}
