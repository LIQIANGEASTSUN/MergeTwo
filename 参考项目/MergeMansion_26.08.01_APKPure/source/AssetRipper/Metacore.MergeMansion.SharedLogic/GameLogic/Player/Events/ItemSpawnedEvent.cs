using Metaplay.Core;

namespace GameLogic.Player.Events
{
	public sealed class ItemSpawnedEvent : CopyableEvent<ItemSpawnedEvent, int>
	{
		public new void Invoke(int itemId)
		{
		}
	}
}
