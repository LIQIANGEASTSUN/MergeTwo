using System;
using System.ComponentModel;
using Metaplay.Attributes.Unity;
using Metaplay.Core.Internal;

namespace Metaplay.Core
{
	[TypeConverter(typeof(StringIdTypeConverter))]
	public abstract class StringId<TStringId> : StringIdBase, IEquatable<TStringId>, IComparable<TStringId> where TStringId : StringId<TStringId>, new()
	{
		public static readonly StringIdCache s_interned;

		static StringId()
		{
		}

		public StringId()
		{
		}

		[Preserve]
		public static void EnsureTypeInitialized()
		{
		}

		public static TStringId FromString(string value)
		{
			return null;
		}

		public static TStringId CreateFromString(string str)
		{
			return null;
		}

		public static TStringId FromUtf8Bytes(ReadOnlySpan<byte> bytes)
		{
			return null;
		}

		public static TStringId CreateFromUtf8Bytes(ReadOnlySpan<byte> bytes)
		{
			return null;
		}

		public static bool operator ==(StringId<TStringId> a, StringId<TStringId> b)
		{
			return false;
		}

		public static bool operator !=(StringId<TStringId> a, StringId<TStringId> b)
		{
			return false;
		}

		public bool Equals(TStringId other)
		{
			return false;
		}

		public int CompareTo(TStringId other)
		{
			return 0;
		}
	}
}
