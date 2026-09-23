using GameLogic.Player.Items;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.Player
{
	[MetaSerializable]
	public interface IInventoryEntry
	{
		MergeItem Item { get; set; }

		MetaTime Timestamp { get; set; }
	}
}
