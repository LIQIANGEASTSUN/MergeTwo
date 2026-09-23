namespace GameLogic.Player.Items.Sink
{
	public struct SinkProgressEntry
	{
		public bool IsAllowed;

		public int ItemId;

		public int Progress;

		public int Target;

		public SinkProgressEntry(int itemId, int progress, int target, bool isAllowed = true)
		{
			IsAllowed = false;
			ItemId = 0;
			Progress = 0;
			Target = 0;
		}
	}
}
