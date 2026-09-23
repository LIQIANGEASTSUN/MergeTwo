using Analytics;
using Audio;
using GameLogic.Player;
using Merge;
using Navigation;
using UI;

namespace Code.GameLogic.AutoMerge
{
	public class AutoMergeFeatureFTUEPopupMenuState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IPlayer Player { get; }

		public IBoardController BoardController { get; }

		public INavigationController NavigationController { get; }

		public AutoMergeFeatureFTUEPopupMenuState(IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, IPlayer player, IBoardController boardController, INavigationController navigationController)
		{
		}
	}
}
