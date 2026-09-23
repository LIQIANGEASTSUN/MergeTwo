using Analytics;
using Animations;
using Audio;
using GameLogic.Player;
using Metaplay.Core;
using UI;

namespace Metacore.MergeMansion.UI.Popups.AutoMergeBooster
{
	public class AutoMergeBoosterPopupMenuState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public MetaDuration DurationSeconds { get; }

		public IRewardsAnimations RewardsAnimations { get; }

		public IPlayer Player { get; }

		public AutoMergeBoosterPopupMenuState(IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, IRewardsAnimations rewardAnimations, IPlayer player, MetaDuration durationSeconds)
		{
		}
	}
}
