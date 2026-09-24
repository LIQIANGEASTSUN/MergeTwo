namespace GameLogic.Player.Items.Consumption;

public interface IConsumableFeatures
{

	public bool AllowNearMatching
	{
		 get { } //Length: 0
	}

	public bool CanSpawnBubbles
	{
		 get { } //Length: 0
	}

	public bool DragSafeAreaEnabled
	{
		 get { } //Length: 0
	}

	public bool IsConsumable
	{
		 get { } //Length: 0
	}

	public int ItemStackCap
	{
		 get { } //Length: 0
	}

	public IConsumptionLogic Logic
	{
		 get { } //Length: 0
	}

	public bool get_AllowNearMatching() { }

	public bool get_CanSpawnBubbles() { }

	public bool get_DragSafeAreaEnabled() { }

	public bool get_IsConsumable() { }

	public int get_ItemStackCap() { }

	public IConsumptionLogic get_Logic() { }

}

