namespace GameLogic.Player.Items.Bubble;

[IsReadOnly]
public struct BubbleStateData
{
	public readonly Currencies OpenCurrency; //Field offset: 0x0
	public readonly int OpenCostAmount; //Field offset: 0x4

	public BubbleStateData(Currencies openCurrency, int openCostAmount) { }

}

