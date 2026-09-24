//Type is in global namespace

public class MergeItemProducer : ItemProducer
{
	[Inject]
	private SignalBus _signalBus; //Field offset: 0xC8

	protected virtual int dropPlaceDegree
	{
		 get { } //Length: 8
	}

	public MergeItemProducer() { }

	protected virtual int get_dropPlaceDegree() { }

	public bool OnProducerItemMerged(BaseItem item) { }

}

