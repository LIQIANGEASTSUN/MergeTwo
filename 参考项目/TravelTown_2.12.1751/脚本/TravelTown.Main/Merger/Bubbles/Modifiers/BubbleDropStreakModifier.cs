using System;
using MergeEngine.Configuration;
using Zenject;

namespace Merger.Bubbles.Modifiers
{
	public class BubbleDropStreakModifier : BubbleDropProbabilityModifierBase
	{
		[Inject]
		[NonSerialized]
		public ISmarterBubblesStreakModel _smarterBubblesStreakModel;

		public override bool IsEnabled => false;

		public override string AnalyticsString => null;

		public override void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null)
		{
		}
	}
}
