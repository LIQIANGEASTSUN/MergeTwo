namespace GameLogic.Player.Items.Merging;

public interface IMergeFeatures
{

	public IItemProducer AdditionalSpawnProducer
	{
		 get { } //Length: 0
	}

	public IMergeMechanic Mechanic
	{
		 get { } //Length: 0
	}

	public bool Mergeable
	{
		 get { } //Length: 0
	}

	public bool RequiresXpState
	{
		 get { } //Length: 0
	}

	public IItemProducer get_AdditionalSpawnProducer() { }

	public IMergeMechanic get_Mechanic() { }

	public bool get_Mergeable() { }

	public bool get_RequiresXpState() { }

}

