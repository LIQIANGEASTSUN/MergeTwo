namespace GameLogic.Config.Types;

public struct MetacoreDuration : IEquatable<MetacoreDuration>, IComparable<MetacoreDuration>, IComparable
{
	private static readonly long _hoursInMilliseconds; //Field offset: 0x0
	public static readonly MetacoreDuration ZERO; //Field offset: 0x8
	[CompilerGenerated]
	private readonly long <Milliseconds>k__BackingField; //Field offset: 0x0

	public long Milliseconds
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
	}

	private static MetacoreDuration() { }

	public MetacoreDuration(long milliseconds) { }

	public override int CompareTo(object obj) { }

	public override int CompareTo(MetacoreDuration other) { }

	public override bool Equals(MetacoreDuration other) { }

	public virtual bool Equals(object obj) { }

	public static MetacoreDuration FromHours(int hours) { }

	public static MetacoreDuration FromMilliseconds(long milliseconds) { }

	public static MetacoreDuration FromMinutes(int minutes) { }

	[CompilerGenerated]
	[IsReadOnly]
	public long get_Milliseconds() { }

	public virtual int GetHashCode() { }

	public static MetacoreDuration Max(MetacoreDuration a, MetacoreDuration b) { }

	public static MetacoreDuration Min(MetacoreDuration a, MetacoreDuration b) { }

	public static MetacoreDuration op_Addition(MetacoreDuration a, MetacoreDuration b) { }

	public static float op_Division(MetacoreDuration a, MetacoreDuration b) { }

	public static bool op_Equality(MetacoreDuration first, MetacoreDuration second) { }

	public static bool op_GreaterThan(MetacoreDuration first, MetacoreDuration second) { }

	public static bool op_GreaterThanOrEqual(MetacoreDuration first, MetacoreDuration second) { }

	public static MetacoreDuration op_Implicit(MetaDuration metaDuration) { }

	public static bool op_Inequality(MetacoreDuration first, MetacoreDuration second) { }

	public static bool op_LessThan(MetacoreDuration first, MetacoreDuration second) { }

	public static bool op_LessThanOrEqual(MetacoreDuration first, MetacoreDuration second) { }

	public static MetacoreDuration op_Subtraction(MetacoreDuration a, MetacoreDuration b) { }

	public static MetacoreDuration op_UnaryNegation(MetacoreDuration a) { }

	public MetaDuration ToMetaDuration() { }

	[IsReadOnly]
	public double ToSecondsDouble() { }

	public F64 ToSecondsF64() { }

	public TimeSpan ToTimeSpan() { }

}

