using FAT.Merge;

namespace FAT
{
	public interface IBoardActivityHandbook
	{
		ActivityBoardHandbookAgent HandbookAgent => null;

		bool CheckIsBoardItem(int itemId);

		void OnNewItemUnlock();

		void OnNewItemShow(MBItemView itemView);

		bool CheckClaimBoardCategoryReward(int categoryId);

		bool CheckClaimBoardHandBookAllReward();

		bool ProcessAllUnlockReward();
	}
}
