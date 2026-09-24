//Type is in global namespace

public class Producer
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public Producer <>4__this; //Field offset: 0x10
		public BaseItem item; //Field offset: 0x18

		public <>c__DisplayClass5_0() { }

		internal void <Produce>b__0() { }

		internal void <Produce>b__1() { }

	}

	internal enum ProduceFailTypes : int
	{
		BoardFull = 0,
		DropCapacity = 1,
		InvalidGameSceneMode = 2,
	}

	[Inject]
	protected UIManager uiManager; //Field offset: 0x10
	[Inject]
	protected IItemPooler itemPooler; //Field offset: 0x18
	[Inject]
	protected IBoardController boardController; //Field offset: 0x20
	[Inject]
	private SignalBus signalBus; //Field offset: 0x28

	public Producer() { }

	protected override void OnProduceFailed(ProduceFailTypes produceFailTypes) { }

	protected override void OnProduceSucceed(BaseItem producedItem) { }

	protected BaseItem Produce(int itemId, int itemLevel, BoardSlot fromProduceBoardSlot, BoardSlot toBoardSlot, bool lockItem) { }

	public override void ResumeProductionCoroutines() { }

	public override void StopProductionCoroutines() { }

}

