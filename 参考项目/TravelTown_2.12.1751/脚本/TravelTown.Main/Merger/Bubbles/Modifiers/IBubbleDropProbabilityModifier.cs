using MergeEngine.Configuration;
using Merger.Services.User.Data.Profile.BubblesConfig;

namespace Merger.Bubbles.Modifiers
{
	public interface IBubbleDropProbabilityModifier
	{
		bool IsEnabled { get; }

		string AnalyticsString { get; }

		SmarterBubblesConfig SmarterBubblesConfig { get; set; }

		void Initialize();

		void Update();

		void Reset();

		void TryModifyProbability(ref float probability, IMergeItem mergeItem, SmarterBubblesCheatData cheatData = null);
	}
}
