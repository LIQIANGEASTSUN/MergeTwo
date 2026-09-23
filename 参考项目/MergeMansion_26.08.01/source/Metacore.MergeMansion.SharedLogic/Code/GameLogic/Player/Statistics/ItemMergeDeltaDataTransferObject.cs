using System;
using Merge;
using Metacore.MergeMansion.Common.Options;

namespace Code.GameLogic.Player.Statistics
{
	public sealed class ItemMergeDeltaDataTransferObject : AModelChangedDataTransferObject
	{
		[NonSerialized]
		public int itemId;

		public MergeBoardId MergeBoardId { get; set; }

		public Option<int> ItemId => default(Option<int>);

		public ItemMergeDeltaDataTransferObject(MergeBoardId mergeBoardId, Option<int> itemId)
		{
		}
	}
}
