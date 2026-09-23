namespace Code.GameLogic.Player.Statistics
{
	public sealed class ItemCollectedDeltaDataTransferObject : AModelChangedDataTransferObject
	{
		public int ItemId { get; set; }

		public ItemCollectedDeltaDataTransferObject(int itemId)
		{
		}
	}
}
