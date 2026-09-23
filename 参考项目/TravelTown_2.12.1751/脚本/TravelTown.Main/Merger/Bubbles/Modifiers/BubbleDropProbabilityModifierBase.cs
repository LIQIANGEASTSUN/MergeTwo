using System;
using MergeEngine.Configuration;
using Merger.Services.User.Data.Profile.BubblesConfig;

namespace Merger.Bubbles.Modifiers
{
	public abstract class BubbleDropProbabilityModifierBase : IBubbleDropProbabilityModifier
	{
		[NonSerialized]
		public string _analyticsString;

		public abstract bool IsEnabled { get; }

		public abstract string AnalyticsString { get; }

		public SmarterBubblesConfig SmarterBubblesConfig { get; set; }

		public virtual void Reset()
		{
		}

		public abstract void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null);

		public virtual void Initialize()
		{
		}

		public virtual void Update()
		{
		}

		public BubbleDropProbabilityModifierBase()
		{
		}
	}
}
