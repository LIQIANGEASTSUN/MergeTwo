using Analytics;
using Audio;
using GameLogic.MergeChains;

namespace UI.Popups
{
	public class LevelUpMergeChainMenuState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IMergeChainDefinition MergeChain { get; }

		public int Level { get; }

		public string MenuTag => null;

		public LevelUpMergeChainMenuState(IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, IMergeChainDefinition mergeChain, int level)
		{
		}
	}
}
