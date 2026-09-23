namespace Code.GameLogic.Player.Statistics
{
	public sealed class ChestOpenedDeltaDataTransferObject : AModelChangedDataTransferObject
	{
		public int ItemId { get; set; }

		public ChestOpenedDeltaDataTransferObject(int itemId)
		{
		}
	}
}
