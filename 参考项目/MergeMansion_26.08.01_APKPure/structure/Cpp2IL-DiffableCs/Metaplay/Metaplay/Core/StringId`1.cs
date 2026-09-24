namespace Metaplay.Core;

[TypeConverter(typeof(StringIdTypeConverter))]
public abstract class StringId : StringIdBase, IEquatable<TStringId>, IComparable<TStringId>
{
	private static readonly StringIdCache s_interned; //Field offset: 0x0

	private static StringId`1() { }

	protected StringId`1() { }

	public override int CompareTo(TStringId other) { }

	private static TStringId CreateFromString(string str) { }

	private static TStringId CreateFromUtf8Bytes(ReadOnlySpan<Byte> bytes) { }

	[Preserve]
	protected static void EnsureTypeInitialized() { }

	public override bool Equals(TStringId other) { }

	public static TStringId FromString(string value) { }

	public static TStringId FromUtf8Bytes(ReadOnlySpan<Byte> bytes) { }

	public static bool op_Equality(StringId<TStringId> a, StringId<TStringId> b) { }

	public static bool op_Inequality(StringId<TStringId> a, StringId<TStringId> b) { }

}

