namespace GameLogic.Player.Items.Bubble
{
	public readonly struct BubbleStateData
	{
		public readonly Currencies OpenCurrency;

		public readonly int OpenCostAmount;

		public BubbleStateData(Currencies openCurrency, int openCostAmount)
		{
			OpenCurrency = default(Currencies);
			OpenCostAmount = 0;
		}
	}
}
