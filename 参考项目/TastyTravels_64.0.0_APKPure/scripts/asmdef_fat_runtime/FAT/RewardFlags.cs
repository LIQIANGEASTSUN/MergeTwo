using System;

namespace FAT
{
	[Flags]
	public enum RewardFlags
	{
		None = 0,
		IsUseIAP = 1,
		IsEventPriority = 2,
		_IsPriority = 3
	}
}
