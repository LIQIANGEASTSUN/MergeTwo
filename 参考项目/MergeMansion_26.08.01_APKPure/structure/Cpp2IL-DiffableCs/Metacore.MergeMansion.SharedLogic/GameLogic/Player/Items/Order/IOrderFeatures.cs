namespace GameLogic.Player.Items.Order;

public interface IOrderFeatures
{

	public IItemProducer DecayProducer
	{
		 get { } //Length: 0
	}

	public bool HideRequirementsPhaseProgressBar
	{
		 get { } //Length: 0
	}

	public bool IsOrder
	{
		 get { } //Length: 0
	}

	public ItemVisibility RewardsItemVisibility
	{
		 get { } //Length: 0
	}

	public IPlacement RewardsPlacement
	{
		 get { } //Length: 0
	}

	public OrderParentState CreateState(IGenerationContext context) { }

	public IItemProducer get_DecayProducer() { }

	public bool get_HideRequirementsPhaseProgressBar() { }

	public bool get_IsOrder() { }

	public ItemVisibility get_RewardsItemVisibility() { }

	public IPlacement get_RewardsPlacement() { }

	public IOrderState GetNextOrder(OrderParentState currentState, IGenerationContext context) { }

}

