namespace Code.GameLogic.GameEvents;

public interface IBubbleBonusEvent
{

	public Nullable<F32> BubbleBonusDivisor
	{
		 get { } //Length: 0
	}

	public List<BubbleBonusInfo> SecondaryBoardBubbleBonus
	{
		 get { } //Length: 0
	}

	public Nullable<F32> get_BubbleBonusDivisor() { }

	public List<BubbleBonusInfo> get_SecondaryBoardBubbleBonus() { }

}

