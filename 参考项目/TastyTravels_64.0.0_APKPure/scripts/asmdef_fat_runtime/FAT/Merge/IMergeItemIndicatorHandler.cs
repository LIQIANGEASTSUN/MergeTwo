using System;

namespace FAT.Merge
{
	public interface IMergeItemIndicatorHandler
	{
		event Action Invalidate;

		ItemIndType CheckIndicator(int itemId, out string asset);
	}
}
