using Analytics;
using Audio;
using Code.GameLogic.GameEvents;

namespace UI
{
	public class AutoMergeEventInfoPopupMenuState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public CoreSupportEventModel EventModel { get; }

		public string MenuTag => null;

		public AutoMergeEventInfoPopupMenuState(IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, CoreSupportEventModel eventModel)
		{
		}
	}
}
