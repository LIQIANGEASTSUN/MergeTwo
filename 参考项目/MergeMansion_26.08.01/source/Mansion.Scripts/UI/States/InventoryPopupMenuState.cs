using Analytics;
using Animations.Flying;
using Audio;
using GameLogic.Player;
using Metacore.MergeMansion.Utility;
using Navigation;

namespace UI.States
{
	public class InventoryPopupMenuState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public INavigationController NavigationController { get; }

		public IFlightControl FlightControl { get; }

		public PlayerClientCache PlayerClientCache { get; }

		public PlayerModel Player => null;

		public PlayerClientContext PlayerContext => null;

		public InventoryPopupMenuState(IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, INavigationController navigationController, IFlightControl flightControl, PlayerClientCache playerClientCache)
		{
		}
	}
}
