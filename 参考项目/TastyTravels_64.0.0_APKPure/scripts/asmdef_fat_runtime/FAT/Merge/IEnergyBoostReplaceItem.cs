namespace FAT.Merge
{
	public interface IEnergyBoostReplaceItem
	{
		int ActivityBoardId { get; }

		bool IsItemNeeded(int itemId);
	}
}
