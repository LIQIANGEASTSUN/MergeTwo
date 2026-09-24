namespace GameLogic.Player.Items.Production;

[MetaSerializable]
public interface IOrderProducer
{

	public int OrderCount
	{
		 get { } //Length: 0
	}

	public void AdvanceSequenceIndex(IGenerationContext context) { }

	public int get_OrderCount() { }

	public OrderRequirements Produce(int orderIndex, IGenerationContext context) { }

}

