namespace GameLogic.Player.Items.Boosting;

public interface IBoosterFeatures
{

	public List<Int32> AffectedItemsSet
	{
		 get { } //Length: 0
	}

	public BoostAreaStyle BoostAreaStyle
	{
		 get { } //Length: 0
	}

	public F32 BoostFactor
	{
		 get { } //Length: 0
	}

	public bool DoesBoost
	{
		 get { } //Length: 0
	}

	public F32 SpawnBoostFactor
	{
		 get { } //Length: 0
	}

	public List<Int32> get_AffectedItemsSet() { }

	public BoostAreaStyle get_BoostAreaStyle() { }

	public F32 get_BoostFactor() { }

	public bool get_DoesBoost() { }

	public F32 get_SpawnBoostFactor() { }

}

