namespace GameLogic.Player.Board;

[MetaSerializable]
public struct Coordinate : IEquatable<Coordinate>, IComparable<Coordinate>
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass27_0
	{
		public Coordinate baseCoordinate; //Field offset: 0x10

		public <>c__DisplayClass27_0() { }

		internal Coordinate <MakeCoordinates>b__0(Offset offset) { }

	}

	public static readonly Coordinate Invalid; //Field offset: 0x0
	public static readonly Coordinate Zero; //Field offset: 0x8
	[CompilerGenerated]
	private int <X>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private int <Y>k__BackingField; //Field offset: 0x4

	[IgnoreDataMember]
	public IEnumerable<Coordinate> Clockwise3x3
	{
		 get { } //Length: 144
	}

	[IgnoreDataMember]
	public IEnumerable<Coordinate> ClockwiseLarger3x3
	{
		 get { } //Length: 144
	}

	[IgnoreDataMember]
	public IEnumerable<Coordinate> CrossNeighbours
	{
		 get { } //Length: 144
	}

	public bool IsInvalid
	{
		 get { } //Length: 100
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int X
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Y
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static Coordinate() { }

	public Coordinate(Coordinate existingCoordinate) { }

	public Coordinate(int x, int y) { }

	public override int CompareTo(Coordinate other) { }

	public override bool Equals(Coordinate other) { }

	public virtual bool Equals(object obj) { }

	public IEnumerable<Coordinate> get_Clockwise3x3() { }

	public IEnumerable<Coordinate> get_ClockwiseLarger3x3() { }

	public IEnumerable<Coordinate> get_CrossNeighbours() { }

	public bool get_IsInvalid() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_X() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_Y() { }

	public virtual int GetHashCode() { }

	public static bool HasSpace(Coordinate baseCoordinate, IBoardQuery boardQuery, Offset[] offsets) { }

	private static IEnumerable<Coordinate> MakeCoordinates(Coordinate baseCoordinate, IEnumerable<Offset> offsets) { }

	public static Coordinate op_Addition(Coordinate coordinate, Offset offset) { }

	public static bool op_Equality(Coordinate obj1, Coordinate obj2) { }

	public static Coordinate op_Implicit(ValueTuple<Int32, Int32> coords) { }

	public static bool op_Inequality(Coordinate obj1, Coordinate obj2) { }

	[CompilerGenerated]
	private void set_X(int value) { }

	[CompilerGenerated]
	private void set_Y(int value) { }

	public virtual string ToString() { }

}

