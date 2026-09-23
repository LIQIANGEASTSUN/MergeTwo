using System;
using System.Collections.Generic;
using GameLogic.Player.Items;
using Metaplay.Core;

namespace GameLogic.Player.Requirements
{
	public sealed class TotalRemainingTimeAtLeastChecker : IMergeItemExtraChecker
	{
		[NonSerialized]
		public readonly MetaDuration _minRemaining;

		public TotalRemainingTimeAtLeastChecker(MetaDuration minRemaining)
		{
		}

		public bool MeetsItemExtraCheck(IEnumerable<MergeItem.MergeItemExtra> extras)
		{
			return false;
		}
	}
}
