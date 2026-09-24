using System;
using System.Collections.Generic;
using FAT.Merge;

namespace FAT
{
	public class MBItemUsageTapCost : MBItemUsageBase
	{
		[NonSerialized]
		public MBTapCostItems _tapCostItems;

		[NonSerialized]
		public List<int> _tapItemList;

		public MBTapCostItems TapCostItems => null;

		public List<int> TapItemList => null;

		public override void Refresh()
		{
		}

		public void _003C_003EiFixBaseProxy_Refresh()
		{
		}
	}
}
