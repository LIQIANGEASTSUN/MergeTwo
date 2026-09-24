//Type is in global namespace

public abstract class BaseGameDataPiece : IGameDataPiece
{
	[CompilerGenerated]
	private sealed class <<SetDirty>g__Serialize|13_0>d : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public BaseGameDataPiece <>4__this; //Field offset: 0x20

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <<SetDirty>g__Serialize|13_0>d(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	protected GameData gameData; //Field offset: 0x10
	private Coroutine serializationCoroutine; //Field offset: 0x18
	[CompilerGenerated]
	private bool <locked>k__BackingField; //Field offset: 0x20

	private string dirtyKey
	{
		private get { } //Length: 92
	}

	protected private bool locked
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	protected BaseGameDataPiece() { }

	[CompilerGenerated]
	[IteratorStateMachine(typeof(<<SetDirty>g__Serialize|13_0>d))]
	private IEnumerator <SetDirty>g__Serialize|13_0() { }

	public abstract void DeleteLocalData() { }

	private string get_dirtyKey() { }

	[CompilerGenerated]
	protected bool get_locked() { }

	public abstract string GetKey() { }

	public override void Initialize(GameData data) { }

	public override bool IsDirty() { }

	public override void LockChanges() { }

	public abstract void SerializeToLocal() { }

	[CompilerGenerated]
	private void set_locked(bool value) { }

	public override void SetDirty(bool deviceSpecific = true) { }

	public override void TriggerUpdate() { }

	public abstract bool TryDeserializeFromLocal(bool createInitialValuesIfNotExist = false) { }

	public override void UnlockChanges() { }

}

