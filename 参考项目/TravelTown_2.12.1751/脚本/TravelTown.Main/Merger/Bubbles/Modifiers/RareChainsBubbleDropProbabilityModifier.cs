using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Model.Configuration;
using Merger.Services.User.Data.Profile.BubblesConfig;
using Zenject;

namespace Merger.Bubbles.Modifiers
{
	public class RareChainsBubbleDropProbabilityModifier : BubbleDropProbabilityModifierBase
	{
		[Inject]
		[NonSerialized]
		public IBubbledItemsConfigurationModel _bubbledItemsConfigurationModel;

		public override bool IsEnabled => false;

		public override string AnalyticsString => null;

		public List<SmarterBubblesRareChainConfig> RareChainConfigs => null;

		public override void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null)
		{
		}
	}
}
