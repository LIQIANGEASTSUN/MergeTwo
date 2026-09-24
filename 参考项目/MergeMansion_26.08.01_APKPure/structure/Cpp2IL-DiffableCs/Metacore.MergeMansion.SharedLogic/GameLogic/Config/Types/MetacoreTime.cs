namespace GameLogic.Config.Types;

[MetaSerializable]
public struct MetacoreTime : IEquatable<MetacoreTime>, IComparable<MetacoreTime>
{
	public static readonly MetacoreTime Epoch; //Field offset: 0x0
	public static readonly DateTime DateTimeEpoch; //Field offset: 0x8
	[CompilerGenerated]
	private long <MillisecondsSinceEpoch>k__BackingField; //Field offset: 0x0

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private long MillisecondsSinceEpoch
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public static MetacoreTime Now
	{
		 get { } //Length: 132
	}

	private static MetacoreTime() { }

	public MetacoreTime(long millisecondsSinceEpoch) { }

	public override int CompareTo(MetacoreTime other) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(MetacoreTime other) { }

	public static MetacoreTime From(MetaTime metaTime) { }

	public static MetacoreTime From(long msSinceEpoch) { }

	public static MetacoreTime FromDateTime(DateTime dt) { }

	[CompilerGenerated]
	[IsReadOnly]
	public long get_MillisecondsSinceEpoch() { }

	public static MetacoreTime get_Now() { }

	public virtual int GetHashCode() { }

	public static MetacoreTime op_Addition(MetacoreTime time, MetacoreDuration duration) { }

	public static bool op_Equality(MetacoreTime first, MetacoreTime second) { }

	public static bool op_GreaterThan(MetacoreTime first, MetacoreTime second) { }

	public static bool op_GreaterThanOrEqual(MetacoreTime first, MetacoreTime second) { }

	public static MetacoreTime op_Implicit(MetaTime time) { }

	public static bool op_Inequality(MetacoreTime first, MetacoreTime second) { }

	public static bool op_LessThan(MetacoreTime first, MetacoreTime second) { }

	public static bool op_LessThanOrEqual(MetacoreTime first, MetacoreTime second) { }

	public static MetacoreTime op_Subtraction(MetacoreTime time, MetacoreDuration duration) { }

	public static MetacoreDuration op_Subtraction(MetacoreTime first, MetacoreTime second) { }

	[CompilerGenerated]
	private void set_MillisecondsSinceEpoch(long value) { }

	[IsReadOnly]
	public DateTime ToDateTime() { }

	[IsReadOnly]
	public string ToISO8601() { }

	[IsReadOnly]
	public virtual string ToString() { }

	public string ToUIDateString() { }

}

