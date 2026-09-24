using System;
using UnityEngine;

namespace MergePuzzle
{
	[Serializable]
	public struct Coordinate : IEquatable<Coordinate>, IFormattable
	{
		[NonSerialized]
		public int m_X;

		[NonSerialized]
		public int m_Y;

		public static readonly Coordinate s_Zero;

		public static readonly Coordinate s_One;

		public static readonly Coordinate s_Up;

		public static readonly Coordinate s_Down;

		public static readonly Coordinate s_Left;

		public static readonly Coordinate s_Right;

		public static readonly Coordinate s_Empty;

		public int x
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int y
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public int this[int index]
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public static Coordinate empty => default(Coordinate);

		public static Coordinate zero => default(Coordinate);

		public static Coordinate one => default(Coordinate);

		public static Coordinate up => default(Coordinate);

		public static Coordinate down => default(Coordinate);

		public static Coordinate left => default(Coordinate);

		public static Coordinate right => default(Coordinate);

		public Coordinate(int x, int y)
		{
			m_X = 0;
			m_Y = 0;
		}

		public void Set(int x, int y)
		{
		}

		public int ToInt()
		{
			return 0;
		}

		public static Coordinate GetDummy()
		{
			return default(Coordinate);
		}

		public float GetMagnitude()
		{
			return 0f;
		}

		public float GetSqrtMagnitude()
		{
			return 0f;
		}

		public static float Distance(Coordinate a, Coordinate b)
		{
			return 0f;
		}

		public static Coordinate Min(Coordinate lhs, Coordinate rhs)
		{
			return default(Coordinate);
		}

		public static Coordinate Max(Coordinate lhs, Coordinate rhs)
		{
			return default(Coordinate);
		}

		public static Coordinate Scale(Coordinate a, Coordinate b)
		{
			return default(Coordinate);
		}

		public void Scale(Coordinate scale)
		{
		}

		public void Clamp(Coordinate min, Coordinate max)
		{
		}

		public static implicit operator Vector2(Coordinate v)
		{
			return default(Vector2);
		}

		public static explicit operator Vector3Int(Coordinate v)
		{
			return default(Vector3Int);
		}

		public static Coordinate FloorToInt(Vector2 v)
		{
			return default(Coordinate);
		}

		public static Coordinate CeilToInt(Vector2 v)
		{
			return default(Coordinate);
		}

		public static Coordinate RoundToInt(Vector2 v)
		{
			return default(Coordinate);
		}

		public static Coordinate operator -(Coordinate v)
		{
			return default(Coordinate);
		}

		public static Coordinate operator +(Coordinate a, Coordinate b)
		{
			return default(Coordinate);
		}

		public static Coordinate operator -(Coordinate a, Coordinate b)
		{
			return default(Coordinate);
		}

		public static Coordinate operator *(Coordinate a, Coordinate b)
		{
			return default(Coordinate);
		}

		public static Coordinate operator *(int a, Coordinate b)
		{
			return default(Coordinate);
		}

		public static Coordinate operator *(Coordinate a, int b)
		{
			return default(Coordinate);
		}

		public static Coordinate operator /(Coordinate a, int b)
		{
			return default(Coordinate);
		}

		public static bool operator ==(Coordinate lhs, Coordinate rhs)
		{
			return false;
		}

		public static bool operator !=(Coordinate lhs, Coordinate rhs)
		{
			return false;
		}

		public override bool Equals(object other)
		{
			return false;
		}

		public bool Equals(Coordinate other)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public override string ToString()
		{
			return null;
		}

		public string ToString(string format)
		{
			return null;
		}

		public string ToString(string format, IFormatProvider formatProvider)
		{
			return null;
		}
	}
}
