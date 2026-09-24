namespace GameLogic.Player.Board.Placement;

[MetaSerializableDerived(3)]
public class SpiralPlacement : IPlacement
{
	[CompilerGenerated]
	private sealed class <ProducePlacements>d__1 : IEnumerable<Coordinate>, IEnumerable, IEnumerator<Coordinate>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private Coordinate <>2__current; //Field offset: 0x14
		private int <>l__initialThreadId; //Field offset: 0x1C
		private IBoardQuery boardQuery; //Field offset: 0x20
		public IBoardQuery <>3__boardQuery; //Field offset: 0x28
		private Coordinate originalCoordinate; //Field offset: 0x30
		public Coordinate <>3__originalCoordinate; //Field offset: 0x38
		private int <theoreticalLimit>5__2; //Field offset: 0x40
		private int <i>5__3; //Field offset: 0x44
		private int <endIndex>5__4; //Field offset: 0x48
		private int <index>5__5; //Field offset: 0x4C

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
		public <ProducePlacements>d__1(int <>1__state) { }

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


	public SpiralPlacement() { }

	public static ValueTuple<Int32, Int32> FindSpiralCoordinate(int zeroBasedIndex) { }

	public override bool HasSpace(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

	[IteratorStateMachine(typeof(<ProducePlacements>d__1))]
	public override IEnumerable<Coordinate> ProducePlacements(Coordinate originalCoordinate, IBoardQuery boardQuery) { }

}

