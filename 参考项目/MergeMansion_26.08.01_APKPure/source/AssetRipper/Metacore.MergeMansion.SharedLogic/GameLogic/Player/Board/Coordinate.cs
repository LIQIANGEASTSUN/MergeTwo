using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Metaplay.Core.Model;

namespace GameLogic.Player.Board
{
	[MetaSerializable]
	public struct Coordinate : IEquatable<Coordinate>, IComparable<Coordinate>
	{
		public static readonly Coordinate Invalid;

		public static readonly Coordinate Zero;

		[MetaMember(1, MetaMemberFlags.None)]
		public int X { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Y { get; set; }

		public bool IsInvalid => false;

		[IgnoreDataMember]
		public IEnumerable<Coordinate> CrossNeighbours => null;

		[IgnoreDataMember]
		public IEnumerable<Coordinate> Clockwise3x3 => null;

		[IgnoreDataMember]
		public IEnumerable<Coordinate> ClockwiseLarger3x3 => null;

		public Coordinate(int x, int y)
		{
			X = 0;
			Y = 0;
		}

		public Coordinate(Coordinate existingCoordinate)
		{
			X = 0;
			Y = 0;
		}

		public static implicit operator Coordinate((int x, int y) coords)
		{
			return default(Coordinate);
		}

		public static Coordinate operator +(Coordinate coordinate, Offset offset)
		{
			return default(Coordinate);
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public bool Equals(Coordinate other)
		{
			return false;
		}

		public static bool operator ==(Coordinate obj1, Coordinate obj2)
		{
			return false;
		}

		public static bool operator !=(Coordinate obj1, Coordinate obj2)
		{
			return false;
		}

		public static IEnumerable<Coordinate> MakeCoordinates(Coordinate baseCoordinate, IEnumerable<Offset> offsets)
		{
			return null;
		}

		public static bool HasSpace(Coordinate baseCoordinate, IBoardQuery boardQuery, Offset[] offsets)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}

		public int CompareTo(Coordinate other)
		{
			return 0;
		}
	}
}
