using System.Collections.Generic;
using Analytics;
using Audio;
using GameLogic.Player;
using Merge;
using Navigation;

namespace UI.States
{
	public class EventCalendarPopupMenuState : IMenuState
	{
		public readonly List<MergeBoardId> MergeBoardIds;

		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public INavigationController Navigation { get; }

		public IAudioPlayer Audio { get; }

		public PlayerModel Player { get; }

		public EventCalendarPopupMenuFlags Flags { get; }

		public EventCalendarPopupMenuState(List<MergeBoardId> boards, IMenuController menuController, IAnalyticsCollector analytics, INavigationController navigation, IAudioPlayer audio, PlayerModel player, EventCalendarPopupMenuFlags flags)
		{
		}
	}
}
