using System.Collections.Generic;
using Merger.Services.User.Data.Profile.BubblesConfig;

namespace MergeEngine.Configuration
{
	public class NewBubbledItemsConfig
	{
		public int NumberOfFreeBubbleBursts;

		public int MaxBubblesOnBoard;

		public int MinGameLevelToDropBubbles;

		public List<SmarterBubblesConfig> SmarterBubblesSettings;

		public List<SmarterBubblesRareChainConfig> SmarterBubblesRareChains;
	}
}
