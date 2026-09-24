//Type is in global namespace

public class BoardHintItemGroup
{
	public readonly List<BaseItem> LockedItems; //Field offset: 0x10
	public readonly List<BaseItem> UnlockedItems; //Field offset: 0x18

	public BoardHintItemGroup() { }

	public void Clear() { }

	public bool HaveAnyCombination() { }

	public bool HaveAnyLockedCombination() { }

	public bool HaveAnyUnlockedCombination() { }

}

