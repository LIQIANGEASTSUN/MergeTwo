namespace FAT
{
	public interface IBoardEntry
	{
		bool BoardEntryVisible => false;

		string BoardEntryAsset();
	}
}
