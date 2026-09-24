namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BoardInventorySlots : BackendState
	{
		public int MaxSlotsAmount;

		public int OpenSlotsAmount;

		public InventorySlotCost NextSlotCost;
	}
}
