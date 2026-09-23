namespace Code.GameLogic.Player.Statistics
{
	public sealed class ProducerUsedDeltaDataTransferObject : AModelChangedDataTransferObject
	{
		public int ItemId { get; set; }

		public ProducerUsedDeltaDataTransferObject(int itemId)
		{
		}
	}
}
