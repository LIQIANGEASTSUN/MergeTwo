using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public interface IBoardArchive
	{
		FeatureEntry Feature { get; }

		void SetBoardData(fat.gamekitdata.Merge data);

		void FillBoardData(fat.gamekitdata.Merge data);
	}
}
