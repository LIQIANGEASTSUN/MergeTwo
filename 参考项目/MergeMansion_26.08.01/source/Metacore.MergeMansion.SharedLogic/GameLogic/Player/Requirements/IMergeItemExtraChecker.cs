using System.Collections.Generic;
using GameLogic.Player.Items;

namespace GameLogic.Player.Requirements
{
	public interface IMergeItemExtraChecker
	{
		bool MeetsItemExtraCheck(IEnumerable<MergeItem.MergeItemExtra> extras);
	}
}
