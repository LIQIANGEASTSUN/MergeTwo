using System;

namespace Metacore.MergeMansion.Merge
{
	[Flags]
	public enum BoardTransitionFlags
	{
		None = 0,
		SkipScreenTransition = 1,
		Default = 0
	}
}
