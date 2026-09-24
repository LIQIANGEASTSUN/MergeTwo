//Type is in global namespace

public class TapItemProducer : ItemProducer
{
	[Inject]
	private SlidingTextController _slidingTextController; //Field offset: 0xC8
	public bool CanProduce; //Field offset: 0xD0

	protected virtual int dropPlaceDegree
	{
		 get { } //Length: 8
	}

	public TapItemProducer() { }

	protected virtual int get_dropPlaceDegree() { }

	protected virtual void OnProduceFailed(ProduceFailTypes produceFailType) { }

	public virtual void OnProducerItemTapped() { }

	protected virtual void OnProduceSucceed(BaseItem producedItem) { }

}

