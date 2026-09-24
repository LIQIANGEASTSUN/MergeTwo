//Type is in global namespace

public class OrdererItemProducer : TapItemProducer
{
	public int OrderIndex; //Field offset: 0xD4

	public OrdererItemProducer() { }

	protected virtual ItemToProduce GetItemToProduce() { }

	public virtual void Init(BaseItem producerBaseItem, ItemProducerData itemProducerData, ItemProducerTimer itemProducerTimer, GameObject energyIcon, bool startOnInit, ActiveItemProducerData activeItemProducerInitData, ParticleSystemController producerParticles = null) { }

}

