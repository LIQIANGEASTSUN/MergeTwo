using Metaplay.Core;

namespace Game.Logic
{
	public sealed class ItemUnlockedEvent : CopyableEvent<ItemUnlockedEvent, int>
	{
		public new void Invoke(int itemId)
		{
		}
	}
}
