//Type is in global namespace

[Extension]
public static class MathUtils
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public Transform transform; //Field offset: 0x10

		public <>c__DisplayClass1_0() { }

		internal float <HorizontalGetter>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_0
	{
		public Transform transform; //Field offset: 0x10

		public <>c__DisplayClass2_0() { }

		internal void <HorizontalSetter>b__0(float x) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass3_0
	{
		public Transform transform; //Field offset: 0x10

		public <>c__DisplayClass3_0() { }

		internal float <VerticalGetter>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass4_0
	{
		public Transform transform; //Field offset: 0x10

		public <>c__DisplayClass4_0() { }

		internal void <VerticalSetter>b__0(float y) { }

	}

	[CompilerGenerated]
	private struct <AxisSeparatedMovementEndOffset>d__7 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public int startDelay; //Field offset: 0x18
		public Vector3 toPos; //Field offset: 0x1C
		public float offset; //Field offset: 0x28
		public Vector3 fromPos; //Field offset: 0x2C
		public float speedA; //Field offset: 0x38
		public float speedB; //Field offset: 0x3C
		public Action<Single> preCallback; //Field offset: 0x40
		public Transform tr; //Field offset: 0x48
		public Action onPeakCallback; //Field offset: 0x50
		public Action onComplete; //Field offset: 0x58
		private Awaiter <>u__1; //Field offset: 0x60

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}

	[CompilerGenerated]
	private struct <AxisSeparatedMovementStartOffset>d__8 : IAsyncStateMachine
	{
		public int <>1__state; //Field offset: 0x0
		public AsyncUniTaskMethodBuilder <>t__builder; //Field offset: 0x8
		public float offset; //Field offset: 0x18
		public float speedA; //Field offset: 0x1C
		public Vector3 fromPos; //Field offset: 0x20
		public Vector3 toPos; //Field offset: 0x2C
		public float speedB; //Field offset: 0x38
		public Action<Single> preCallback; //Field offset: 0x40
		public Transform tr; //Field offset: 0x48
		public Action onPeakCallback; //Field offset: 0x50
		private Awaiter <>u__1; //Field offset: 0x58

		private override void MoveNext() { }

		[DebuggerHidden]
		private override void SetStateMachine(IAsyncStateMachine stateMachine) { }

	}


	[AsyncStateMachine(typeof(<AxisSeparatedMovementEndOffset>d__7))]
	public static UniTask AxisSeparatedMovementEndOffset(Transform tr, Vector3 fromPos, Vector3 toPos, float speedA, float speedB, float offset, Action<Single> preCallback = null, Action onPeakCallback = null, int startDelay = 0, Action onComplete = null) { }

	[AsyncStateMachine(typeof(<AxisSeparatedMovementStartOffset>d__8))]
	public static UniTask AxisSeparatedMovementStartOffset(Transform tr, Vector3 fromPos, Vector3 toPos, float speedA, float speedB, float offset, Action<Single> preCallback = null, Action onPeakCallback = null) { }

	[Extension]
	public static float Clamp(ref float number, float min, float max) { }

	[Extension]
	public static int Clamp(ref int number, int min, int max) { }

	private static DOGetter<Single> HorizontalGetter(Transform transform) { }

	private static DOSetter<Single> HorizontalSetter(Transform transform) { }

	public static bool LineLineIntersection(out Vector3 intersection, Vector3 linePoint1, Vector3 lineVec1, Vector3 linePoint2, Vector3 lineVec2) { }

	[Extension]
	public static float Normalize(ref float number) { }

	public static bool RngPicker(List<Int32> probabilities, Action<Int32, Object[]> onPicked, Object[] parameters) { }

	public static T RngPicker(List<Single> probabilities, List<T> items) { }

	private static DOGetter<Single> VerticalGetter(Transform transform) { }

	private static DOSetter<Single> VerticalSetter(Transform transform) { }

}

