using System;

namespace MiniGame.CupMerge;

[Serializable]
public class MGCupMergeLevelItem
{
	public int id;

	public int sequence;

	public int unlockPLayerLevel;

	public int goalValue;

	public string initialBoardBeverage;

	public int type;

	public int maxBeverageLevel;

	public int cdTime;

	public string fixedBeverage;

	public int isFixedBeverage;

	public string beverageWeight;

	public int fixedOrder;
}
