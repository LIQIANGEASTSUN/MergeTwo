//Type is in global namespace

public class ItemProducerTimer : MonoBehaviour
{
	[CompilerGenerated]
	private struct <AnimateSkipTime>d__8 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public ItemProducerTimer <>4__this; //Field offset: 0x18
		public Vector3 toPos; //Field offset: 0x20
		private Vector3 <localScale>5__2; //Field offset: 0x2C
		private Vector3 <position>5__3; //Field offset: 0x38
		private Awaiter <>u__1; //Field offset: 0x48
		private TweenAwaiter <>u__2; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[Inject]
	private EffectsManager _effectsManager; //Field offset: 0x20
	public Canvas Canvas; //Field offset: 0x28
	public Image Foreground; //Field offset: 0x30
	private bool isAnimating; //Field offset: 0x38
	private bool _isVisible; //Field offset: 0x39
	public ItemProducerTimer DependingItemProducerTimer; //Field offset: 0x40

	public ItemProducerTimer() { }

	[AsyncStateMachine(typeof(<AnimateSkipTime>d__8))]
	public UniTask AnimateSkipTime(Vector3 toPos) { }

	public void Hide(bool animate = false) { }

	public void Reset() { }

	public void Show(bool animate = false) { }

	public void UpdateTimerVisual(float progress) { }

}

