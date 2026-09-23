using GameLogic.Config.Types;
using GameLogic.Player.Items.Production;

namespace GameLogic.Player.Items.Decay
{
	public interface IDecayFeatures
	{
		bool DoesDecay { get; }

		MetacoreDuration Lifetime { get; }

		IItemProducer ItemProducer { get; }

		DecayMergeMode DecayMergeMode { get; }

		bool DoesBoosterAccelerateDecay { get; }

		DecayInheritMode DecayInheritMode { get; }

		bool ShowDecayTimer { get; }

		bool ShowDecayVfx { get; }

		MetacoreDuration RemainingDurationForDecayVfx { get; }

		bool NeedsDecayState { get; }
	}
}
