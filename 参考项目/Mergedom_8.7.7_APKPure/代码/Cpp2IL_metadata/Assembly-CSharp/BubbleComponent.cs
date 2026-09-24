//Type is in global namespace

[DisallowMultipleComponent]
public class BubbleComponent : MonoBehaviour
{
	[CompilerGenerated]
	private struct <ConvertBubbleToItem>d__27 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncVoidMethodBuilder <>t__builder; //Field offset: 0x8
		public BubbleComponent <>4__this; //Field offset: 0x28
		public int itemId; //Field offset: 0x30
		public int itemLevel; //Field offset: 0x34
		private BaseItem <baseItem>5__2; //Field offset: 0x38
		private BaseItem <item>5__3; //Field offset: 0x40
		private Awaiter <>u__1; //Field offset: 0x48

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <WhilePicked>d__30 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public BubbleComponent <>4__this; //Field offset: 0x18
		private Awaiter <>u__1; //Field offset: 0x20

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	public static int BubbleCount; //Field offset: 0x0
	[Inject]
	private SignalBus _signalBus; //Field offset: 0x20
	[Inject]
	private IItemPooler _itemPooler; //Field offset: 0x28
	[Inject]
	private EffectsManager _effectsManager; //Field offset: 0x30
	[Inject]
	private ItemMover _itemMover; //Field offset: 0x38
	[Inject]
	private BubbleCoinOnlyController _coinOnlyController; //Field offset: 0x40
	public int UnlockCost; //Field offset: 0x48
	public DateTime SpawnTime; //Field offset: 0x50
	public int ProducedItemId; //Field offset: 0x58
	public int ProducedItemLevel; //Field offset: 0x5C
	public bool IsCoinOnly; //Field offset: 0x60
	public int LifeTimeInSeconds; //Field offset: 0x64
	public SpriteRenderer SpriteRenderer; //Field offset: 0x68
	public ShakeObjectComponent ShakeObjectComponent; //Field offset: 0x70
	private Timer _timer; //Field offset: 0x78
	private Sprite _asset; //Field offset: 0x80
	[CompilerGenerated]
	private bool <IsPicked>k__BackingField; //Field offset: 0x88
	private int _bubbleGoldConversionLevel; //Field offset: 0x8C

	public bool IsPicked
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BubbleComponent() { }

	[CompilerGenerated]
	private bool <StartBubbleEndTimer>b__31_0() { }

	public bool CheckEndTimerCanceled() { }

	public void ConvertBubbleToGold(int bubbleGoldConversionLevel) { }

	public void ConvertBubbleToItem() { }

	[AsyncStateMachine(typeof(<ConvertBubbleToItem>d__27))]
	private void ConvertBubbleToItem(int itemId, int itemLevel) { }

	[CompilerGenerated]
	public bool get_IsPicked() { }

	private BaseItem GetItemFromPool(BoardSlot boardSlot, int itemId, int itemLevel) { }

	public int GetRemainingTime() { }

	public void Init(BaseItem producedItem) { }

	private void OnBubbleTimerEnded() { }

	private void PlayBubbleExplosionFX() { }

	[CompilerGenerated]
	public void set_IsPicked(bool value) { }

	public void Spawn(DateTime spawnTime) { }

	public void StartBubbleEndTimer() { }

	public void StopBubbleEndTimer() { }

	[AsyncStateMachine(typeof(<WhilePicked>d__30))]
	private UniTask WhilePicked() { }

}

