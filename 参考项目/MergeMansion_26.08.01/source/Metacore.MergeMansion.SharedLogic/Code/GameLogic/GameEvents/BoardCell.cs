using GameLogic.Merge;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class BoardCell
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int ItemId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public ItemVisibility ItemVisibility { get; set; }

		public BoardCell()
		{
		}

		public BoardCell(int itemId, ItemVisibility itemVisibility)
		{
		}

		public static BoardCell FromTuple((int, ItemVisibility) tuple)
		{
			return null;
		}

		public (int, ItemVisibility) ToTuple()
		{
			return default((int, ItemVisibility));
		}
	}
}
