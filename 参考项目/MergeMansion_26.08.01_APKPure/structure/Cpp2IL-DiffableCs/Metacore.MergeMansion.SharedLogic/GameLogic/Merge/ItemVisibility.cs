namespace GameLogic.Merge;

[MetaSerializable]
public enum ItemVisibility : int
{
	HiddenWithPartiallyVisibleInside = 0,
	PartiallyVisible = 1,
	Visible = 2,
	HiddenWithVisibleInside = 3,
	HiddenWithBlocking = 4,
}

