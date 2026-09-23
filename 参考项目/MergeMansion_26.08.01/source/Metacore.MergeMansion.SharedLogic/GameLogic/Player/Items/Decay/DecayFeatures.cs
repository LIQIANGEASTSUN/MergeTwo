using System;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Decay
{
	[MetaSerializable]
	public sealed class DecayFeatures : IDecayFeatures
	{
		public static readonly DecayFeatures NoDecay;

		[Obsolete("Doesn't seem to be in use")]
		public static readonly DecayFeatures NoDecayButInherit;

		[Obsolete("Doesn't seem to be in use")]
		public static readonly DecayFeatures NoDecayButInheritAndSum;

		[IgnoreDataMember]
		MetacoreDuration IDecayFeatures.Lifetime => default(MetacoreDuration);

		[IgnoreDataMember]
		MetacoreDuration IDecayFeatures.RemainingDurationForDecayVfx => default(MetacoreDuration);

		[MetaMember(1, MetaMemberFlags.None)]
		public bool DoesDecay { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration Lifetime { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public IItemProducer ItemProducer { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public DecayMergeMode DecayMergeMode { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public bool DoesBoosterAccelerateDecay { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public DecayInheritMode DecayInheritMode { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public bool ShowDecayTimer { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public bool ShowDecayVfx { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public MetaDuration RemainingDurationForDecayVfx { get; set; }

		public bool NeedsDecayState => false;

		public DecayFeatures(MetaDuration lifetime, IItemProducer producer, DecayMergeMode mergeMode, bool boosterAccelerates = true)
		{
		}

		public DecayFeatures(bool doesDecay, MetaDuration lifetime, IItemProducer itemProducer, DecayMergeMode decayMergeMode, DecayInheritMode decayInheritMode, bool showDecayTimer, bool showDecayVfx, MetaDuration remainingDurationForDecayVfx, bool doesBoosterAccelerateDecay = true)
		{
		}

		public DecayFeatures()
		{
		}

		public bool Equals(DecayFeatures other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
