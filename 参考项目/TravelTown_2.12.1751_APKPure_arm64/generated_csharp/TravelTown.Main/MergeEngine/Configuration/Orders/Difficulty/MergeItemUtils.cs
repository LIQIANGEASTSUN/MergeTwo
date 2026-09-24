namespace MergeEngine.Configuration.Orders.Difficulty
{
	public static class MergeItemUtils
	{
		public static bool IsPrimaryProducer(IMergeGraphItem graph)
		{
			return false;
		}

		public static bool IsJokerItem(this IMergeItem mergeItem)
		{
			return false;
		}

		public static bool IsSplitterItem(this IMergeItem mergeItem)
		{
			return false;
		}

		public static bool IsSecondaryProducerItem(this IMergeItem mergeItem)
		{
			return false;
		}
	}
}
