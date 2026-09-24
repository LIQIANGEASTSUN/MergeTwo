using System;
using System.Collections.Generic;
using GameLogic.Player.Items;

namespace GameLogic.Player.Requirements
{
	public sealed class TotalChargesAtLeastChecker : IMergeItemExtraChecker
	{
		[NonSerialized]
		public readonly int _minCharges;

		public TotalChargesAtLeastChecker(int minCharges)
		{
		}

		public bool MeetsItemExtraCheck(IEnumerable<MergeItem.MergeItemExtra> extras)
		{
			return false;
		}
	}
}
