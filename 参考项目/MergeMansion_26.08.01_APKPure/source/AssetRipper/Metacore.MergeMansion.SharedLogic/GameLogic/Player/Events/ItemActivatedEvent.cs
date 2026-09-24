using Metaplay.Core;

namespace GameLogic.Player.Events
{
	public sealed class ItemActivatedEvent : CopyableEvent<ItemActivatedEvent, int>
	{
		public new void Invoke(int itemId)
		{
		}
	}
}
