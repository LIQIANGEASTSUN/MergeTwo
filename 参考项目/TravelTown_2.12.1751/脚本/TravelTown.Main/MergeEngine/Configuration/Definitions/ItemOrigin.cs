using System;

namespace MergeEngine.Configuration.Definitions
{
	[Flags]
	public enum ItemOrigin
	{
		StartBoard = 1,
		Merge = 2,
		Spawn = 4,
		Produce = 8,
		Transform = 0x10,
		BoardItemQueue = 0x20,
		Bubble = 0x40,
		Migration = 0x80,
		Split = 0x100
	}
}
