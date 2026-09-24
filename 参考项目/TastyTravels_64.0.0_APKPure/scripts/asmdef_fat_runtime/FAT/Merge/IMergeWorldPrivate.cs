namespace FAT.Merge
{
	public interface IMergeWorldPrivate
	{
		MergeWorld world { get; }

		bool GrabUnusedItem(int itemId, out Item item);
	}
}
