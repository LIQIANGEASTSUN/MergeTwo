//Type is in global namespace

[Extension]
public static class ItemIdExtensions
{

	[Extension]
	public static bool IsSame(ItemData lhs, ItemData rhs) { }

	[Extension]
	public static bool IsSame(BaseItem lhs, BaseItem rhs) { }

	[Extension]
	public static bool IsTutorialItem(BaseItem item) { }

}

