using System;

namespace UI.States
{
	[Flags]
	public enum ItemInfoPopupFlags
	{
		None = 0,
		DoNotHighlightItem = 1,
		ShowItemInfo = 2,
		Everything = 3,
		Default = 0
	}
}
