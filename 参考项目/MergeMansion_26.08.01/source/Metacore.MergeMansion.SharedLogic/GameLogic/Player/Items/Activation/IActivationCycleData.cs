using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializable]
	public interface IActivationCycleData
	{
		int CycleCount { get; }

		IReadOnlyList<MetaDuration> GetDelaysBetweenCycles { get; }

		IReadOnlyList<F64> GetTimerSkipMultiplier { get; }

		IReadOnlyList<int> GetActivationAmountInCycle { get; }

		IReadOnlyList<int> GetHowManyAreGeneratedInCycle { get; }

		void Validate(GameConfigValidationResult variantEntries, string sheetName, string configKey);
	}
}
