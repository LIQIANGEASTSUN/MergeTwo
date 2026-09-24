//Type is in global namespace

public class ExperiencePointProducer : Producer, IInitializable
{
	private const int MinimumLevel = 2; //Field offset: 0x0
	[Inject]
	private SignalBus _signalBus; //Field offset: 0x30

	public ExperiencePointProducer() { }

	private bool CanProduce(int itemId, int itemLevelBeforeMerge, int itemDifficulty) { }

	public override void Initialize() { }

	private void OnPostMerge(PostMergeSignal postMergeSignal) { }

	protected virtual void OnProduceSucceed(BaseItem producedItem) { }

	public void Produce(int mergedItemId, int itemLevelBeforeMerge, int itemDifficulty, BoardSlot fromBoardSlot) { }

}

