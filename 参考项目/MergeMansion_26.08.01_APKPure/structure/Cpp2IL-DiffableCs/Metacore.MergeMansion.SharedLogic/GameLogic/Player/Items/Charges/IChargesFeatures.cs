namespace GameLogic.Player.Items.Charges;

public interface IChargesFeatures
{

	public int DefaultInitialCharges
	{
		 get { } //Length: 0
	}

	public ChargeMergeBehavior MergeBehavior
	{
		 get { } //Length: 0
	}

	public bool SupportsCharges
	{
		 get { } //Length: 0
	}

	public int get_DefaultInitialCharges() { }

	public ChargeMergeBehavior get_MergeBehavior() { }

	public bool get_SupportsCharges() { }

}

