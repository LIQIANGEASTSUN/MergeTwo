//Type is in global namespace

public interface IBoardController
{

	public void CheckForMergeHint() { }

	public void DestroyActivityItems() { }

	public List<BaseItem> GetAllItemsAtBoard(bool checkLockStatus = true) { }

	public BoardPivots GetBoardPivots() { }

	public BoardSettings GetBoardSettings() { }

	public BoardSlotIndicator GetBoardSlotIndicator() { }

	public BoardSlot[][] GetBoardSlots() { }

	public BoardSlot GetFirstEmptyBoardSlot() { }

	public List<BaseItem> GetItemsAtBoard(int itemId, int itemLevel = -1, bool checkLockStatus = true) { }

	public List<BaseItem> GetItemsAtBoardWithMinLevel(int itemId, int minLevel = 1, bool checkLockStatus = true) { }

	public Vector2 GetMaxPosition() { }

	public Vector2 GetMinPosition() { }

	public BoardSlot GetSelectedBoardSlot() { }

	public UniTask Initialize() { }

	public void OnChestPlacedOnBoard(BaseChest chest) { }

	public void OnChestRechargeStatusChanged(BaseChest chest, bool isRecharging) { }

	public void OnChestRemovedFromBoard(BaseChest chest) { }

	public void OnItemRemovedFromBoard(BaseItem item) { }

	public void ResetCurrentlySelectedBoardSlot() { }

	public void SelectBoardSlot(BoardSlot selectedBoardSlot) { }

	public void SwapBoardSlotsData(BoardSlot firstSlot, BoardSlot secondSlot) { }

	public BoardSlot TryGetClosestEmptyBoardSlot(BoardSlot boardSlot, string parameters, int degree) { }

	public void UnlockNeighbourBoardSlots(BoardSlot boardSlot) { }

}

