using Merge;
using Metaplay.Core;

namespace GameLogic.Player
{
	public sealed class PocketChangedEvent : CopyableEvent<PocketChangedEvent, int, string, MergeBoardId, int, PlayerPocketChangeEventType?>
	{
		public void Invoke(int itemId, string itemType, MergeBoardId boardId, int count, PlayerPocketChangeEventType changeType)
		{
		}
	}
}
