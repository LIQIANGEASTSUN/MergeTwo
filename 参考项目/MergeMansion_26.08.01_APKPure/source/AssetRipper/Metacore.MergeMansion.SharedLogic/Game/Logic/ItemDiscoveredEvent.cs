using Metaplay.Core;

namespace Game.Logic
{
	public sealed class ItemDiscoveredEvent : CopyableEvent<ItemDiscoveredEvent, int>
	{
		public new void Invoke(int itemId)
		{
		}
	}
}
