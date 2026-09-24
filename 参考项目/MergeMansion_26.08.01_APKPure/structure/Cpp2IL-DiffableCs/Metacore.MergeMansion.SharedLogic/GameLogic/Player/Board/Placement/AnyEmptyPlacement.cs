namespace GameLogic.Player.Board.Placement;

[MetaSerializableDerived(4)]
public class AnyEmptyPlacement : IPlacement
{
	[CompilerGenerated]
	private sealed class <GenerateAllPossibleCoordinates>d__0 : IEnumerable<Coordinate>, IEnumerable, IEnumerator<Coordinate>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private Coordinate <>2__current; //Field offset: 0x14
		private int <>l__initialThreadId; //Field offset: 0x1C
		private int height; //Field offset: 0x20
		public int <>3__height; //Field offset: 0x24
		private int width; //Field offset: 0x28
		public int <>3__width; //Field offset: 0x2C
		private int <x>5__2; //Field offset: 0x30
		private int <y>5__3; //Field offset: 0x34

		private override Coordinate System.Collections.Generic.IEnumerator<GameLogic.Player.Board.Coordinate>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 92
		}

		[DebuggerHidden]
		public <GenerateAllPossibleCoordinates>d__0(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<Coordinate> System.Collections.Generic.IEnumerable<GameLogic.Player.Board.Coordinate>.GetEnumerator() { }

		[DebuggerHidden]
		private override Coordinate System.Collections.Generic.IEnumerator<GameLogic.Player.Board.Coordinate>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}


	public AnyEmptyPlacement() { }

	[IteratorStateMachine(typeof(<GenerateAllPossibleCoordinates>d__0))]
	private IEnumerable<Coordinate> GenerateAllPossibleCoordinates(int width, int height) { }

	public override bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

	public override IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

}

