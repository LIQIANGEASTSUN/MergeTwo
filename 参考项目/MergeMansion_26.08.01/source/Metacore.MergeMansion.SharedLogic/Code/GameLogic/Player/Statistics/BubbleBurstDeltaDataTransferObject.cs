namespace Code.GameLogic.Player.Statistics
{
	public sealed class BubbleBurstDeltaDataTransferObject : AModelChangedDataTransferObject
	{
		public long Increment { get; set; }

		public BubbleBurstDeltaDataTransferObject(long increment)
		{
		}
	}
}
