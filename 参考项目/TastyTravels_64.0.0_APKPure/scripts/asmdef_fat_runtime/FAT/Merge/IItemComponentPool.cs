namespace FAT.Merge
{
	public interface IItemComponentPool
	{
		void Free(ItemComponentBase com);

		ItemComponentBase AllocByType();
	}
}
