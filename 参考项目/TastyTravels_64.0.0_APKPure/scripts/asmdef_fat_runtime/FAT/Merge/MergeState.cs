namespace FAT.Merge
{
	public enum MergeState
	{
		CanMerge = 0,
		HasBubble = 1,
		TeslaInUse = 1,
		GridNotAllowed = 3,
		Unknown = 4
	}
}
