using System.Collections.Generic;
using Metaplay.Core.Math;

namespace Code.GameLogic.GameEvents
{
	public interface IBubbleBonusEvent
	{
		F32? BubbleBonusDivisor { get; }

		List<BubbleBonusInfo> SecondaryBoardBubbleBonus { get; }
	}
}
