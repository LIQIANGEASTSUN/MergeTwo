using FAT.Merge;

namespace FAT
{
	public interface IBoardExtremeAdapter
	{
		Board GetBoard();

		bool CanCheckExtreme();
	}
}
