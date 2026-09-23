using Code.GameLogic.GameEvents;

namespace GameLogic.Player.Items.Collectable
{
	public interface ICollectEventCurrencyAction : ICollectAction
	{
		EventCurrencyId EventCurrencyId { get; }

		int Amount { get; }
	}
}
