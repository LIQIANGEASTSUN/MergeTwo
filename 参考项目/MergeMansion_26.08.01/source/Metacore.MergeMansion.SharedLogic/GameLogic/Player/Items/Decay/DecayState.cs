using System;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Decay
{
	[MetaSerializable]
	public sealed class DecayState
	{
		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDuration relativeTimeSpendOnDecay;

		[MetaMember(4, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime lastTimeAddTime;

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaTime EstimatedTime { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime StartTime { get; set; }

		public MetaDuration RemainingDuration(MetaTime timestamp)
		{
			return default(MetaDuration);
		}

		public MetaDuration RemainingDuration()
		{
			return default(MetaDuration);
		}

		public DecayState()
		{
		}

		public DecayState(DecayState existingState)
		{
		}

		public DecayState(MetaTime startTimeInMilliseconds)
		{
		}

		public void CalculateNextEstimatedDecayEndTime(MetacoreDuration lifetime, F32 boostFactor, MetaTime currentTime)
		{
		}

		public void AddRelativeTimeSpendOnDecay(MetaDuration toAdd, MetaTime timestamp)
		{
		}

		public void AddAbsoluteTimeSpendOnDecay(MetaTime timestamp)
		{
		}

		public void SkipGameTime(MetacoreDuration numMillisecond)
		{
		}
	}
}
