using Metaplay.Core;

namespace GameLogic.Player.Events
{
	public sealed class ItemMergedEvent : CopyableEvent<ItemMergedEvent, int>
	{
		public new void Invoke(int itemId)
		{
		}
	}
}
