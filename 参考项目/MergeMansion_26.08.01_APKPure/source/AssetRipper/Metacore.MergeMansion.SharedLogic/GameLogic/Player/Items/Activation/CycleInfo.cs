namespace GameLogic.Player.Items.Activation
{
	public readonly struct CycleInfo
	{
		public static CycleInfo DefaultCycle => default(CycleInfo);

		public int CycleNumber { get; }

		public int DailyCycleIndex { get; }

		public bool ReEngagementCycleActive { get; }

		public CycleInfo(int cycleNumber, int dailyCycleIndex, bool reEngagementCycleActive)
		{
			CycleNumber = 0;
			DailyCycleIndex = 0;
			ReEngagementCycleActive = false;
		}
	}
}
