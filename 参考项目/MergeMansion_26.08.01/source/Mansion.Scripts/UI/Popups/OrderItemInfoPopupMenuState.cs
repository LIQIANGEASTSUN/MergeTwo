using Analytics;
using Audio;
using GameLogic.Player;
using GameLogic.Player.Items;

namespace UI.Popups
{
	public class OrderItemInfoPopupMenuState : IMenuState
	{
		public IPlayer Player { get; }

		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IMergeItem OrderItem { get; }

		public OrderItemInfoPopupMenuState(IPlayer player, IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, IMergeItem orderItem)
		{
		}
	}
}
