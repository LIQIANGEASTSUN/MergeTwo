namespace GameLogic.Player.Items.Order;

public interface IOrderState : ISinkState, IItemProducer
{

	public int ClaimableRewardsCount
	{
		 get { } //Length: 0
	}

	public IEnumerable<OrderStateReward> CompletionItems
	{
		 get { } //Length: 0
	}

	public int ItemsPerActivation
	{
		 get { } //Length: 0
	}

	public int get_ClaimableRewardsCount() { }

	public IEnumerable<OrderStateReward> get_CompletionItems() { }

	public int get_ItemsPerActivation() { }

	public void IncrementClaimedRewardsCount() { }

	public bool IsActivable() { }

	public bool IsSpawnable() { }

	public bool OrderCompleted() { }

}

