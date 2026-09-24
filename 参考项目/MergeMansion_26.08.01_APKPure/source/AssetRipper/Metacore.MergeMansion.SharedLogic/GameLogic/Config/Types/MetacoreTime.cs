using System;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Config.Types
{
	[MetaSerializable]
	public struct MetacoreTime : IEquatable<MetacoreTime>, IComparable<MetacoreTime>
	{
		public static readonly MetacoreTime Epoch;

		public static readonly DateTime DateTimeEpoch;

		public static MetacoreTime Now => default(MetacoreTime);

		[MetaMember(1, MetaMemberFlags.None)]
		public long MillisecondsSinceEpoch { get; set; }

		public MetacoreTime(long millisecondsSinceEpoch)
		{
			MillisecondsSinceEpoch = 0L;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public bool Equals(MetacoreTime other)
		{
			return false;
		}

		public int CompareTo(MetacoreTime other)
		{
			return 0;
		}

		public readonly DateTime ToDateTime()
		{
			return default(DateTime);
		}

		public string ToUIDateString()
		{
			return null;
		}

		public static MetacoreTime FromDateTime(DateTime dt)
		{
			return default(MetacoreTime);
		}

		public static MetacoreTime From(long msSinceEpoch)
		{
			return default(MetacoreTime);
		}

		public static bool operator <(MetacoreTime first, MetacoreTime second)
		{
			return false;
		}

		public static bool operator >(MetacoreTime first, MetacoreTime second)
		{
			return false;
		}

		public static bool operator ==(MetacoreTime first, MetacoreTime second)
		{
			return false;
		}

		public static bool operator !=(MetacoreTime first, MetacoreTime second)
		{
			return false;
		}

		public static bool operator <=(MetacoreTime first, MetacoreTime second)
		{
			return false;
		}

		public static bool operator >=(MetacoreTime first, MetacoreTime second)
		{
			return false;
		}

		public static implicit operator MetacoreTime(MetaTime time)
		{
			return default(MetacoreTime);
		}

		public static MetacoreTime operator +(MetacoreTime time, MetacoreDuration duration)
		{
			return default(MetacoreTime);
		}

		public static MetacoreTime operator -(MetacoreTime time, MetacoreDuration duration)
		{
			return default(MetacoreTime);
		}

		public static MetacoreDuration operator -(MetacoreTime first, MetacoreTime second)
		{
			return default(MetacoreDuration);
		}

		public static MetacoreTime From(MetaTime metaTime)
		{
			return default(MetacoreTime);
		}

		public override readonly string ToString()
		{
			return null;
		}

		public readonly string ToISO8601()
		{
			return null;
		}
	}
}
