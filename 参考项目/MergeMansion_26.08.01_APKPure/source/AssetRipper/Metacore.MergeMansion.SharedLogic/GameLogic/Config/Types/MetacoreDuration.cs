using System;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Config.Types
{
	public struct MetacoreDuration : IEquatable<MetacoreDuration>, IComparable<MetacoreDuration>, IComparable
	{
		public static readonly long _hoursInMilliseconds;

		public static readonly MetacoreDuration ZERO;

		public long Milliseconds { get; }

		public MetacoreDuration(long milliseconds)
		{
			Milliseconds = 0L;
		}

		public TimeSpan ToTimeSpan()
		{
			return default(TimeSpan);
		}

		public static MetacoreDuration FromMilliseconds(long milliseconds)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreDuration FromMinutes(int minutes)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreDuration FromHours(int hours)
		{
			return default(MetacoreDuration);
		}

		public static bool operator ==(MetacoreDuration first, MetacoreDuration second)
		{
			return false;
		}

		public static bool operator !=(MetacoreDuration first, MetacoreDuration second)
		{
			return false;
		}

		public static bool operator <(MetacoreDuration first, MetacoreDuration second)
		{
			return false;
		}

		public static bool operator >(MetacoreDuration first, MetacoreDuration second)
		{
			return false;
		}

		public static bool operator >=(MetacoreDuration first, MetacoreDuration second)
		{
			return false;
		}

		public static bool operator <=(MetacoreDuration first, MetacoreDuration second)
		{
			return false;
		}

		public static float operator /(MetacoreDuration a, MetacoreDuration b)
		{
			return 0f;
		}

		public static MetacoreDuration operator +(MetacoreDuration a, MetacoreDuration b)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreDuration operator -(MetacoreDuration a, MetacoreDuration b)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreDuration operator -(MetacoreDuration a)
		{
			return default(MetacoreDuration);
		}

		public static implicit operator MetacoreDuration(MetaDuration metaDuration)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreDuration Max(MetacoreDuration a, MetacoreDuration b)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreDuration Min(MetacoreDuration a, MetacoreDuration b)
		{
			return default(MetacoreDuration);
		}

		public F64 ToSecondsF64()
		{
			return default(F64);
		}

		public readonly double ToSecondsDouble()
		{
			return 0.0;
		}

		public int CompareTo(MetacoreDuration other)
		{
			return 0;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public bool Equals(MetacoreDuration other)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public int CompareTo(object obj)
		{
			return 0;
		}

		public MetaDuration ToMetaDuration()
		{
			return default(MetaDuration);
		}
	}
}
