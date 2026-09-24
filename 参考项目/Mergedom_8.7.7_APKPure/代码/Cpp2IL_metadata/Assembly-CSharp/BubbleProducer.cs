//Type is in global namespace

public class BubbleProducer : Producer, IInitializable
{
	[Inject]
	private SignalBus _signalBus; //Field offset: 0x30
	[Inject]
	private BubbleProduceSettings _bubbleProduceSettings; //Field offset: 0x38
	[Inject]
	private IItemPooler _itemPooler; //Field offset: 0x40
	private BoardSlot _closestBoard; //Field offset: 0x48

	public BubbleProducer() { }

	private bool CanProduce() { }

	public BubbleComponent DebugSpawnBubble(int itemId, int itemLevel) { }

	private BoardSlot FindDebugAnimationSourceSlot(BoardSlot destSlot) { }

	public override void Initialize() { }

	private void OnProducedItemPicked(int index, Object[] parameters) { }

	private void ProduceBubble(PostMergeSignal postMergeSignal) { }

	private void TestProduce(int sampleSize, int id, int level) { }

}

