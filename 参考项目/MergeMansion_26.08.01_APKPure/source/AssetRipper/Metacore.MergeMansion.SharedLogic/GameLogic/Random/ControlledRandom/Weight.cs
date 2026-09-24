using System;
using System.Collections.Generic;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Random.ControlledRandom
{
	[MetaSerializable]
	public struct Weight
	{
		public class CompareByNextTime : Comparer<Weight>
		{
			[NonSerialized]
			public readonly F32 referencePoint;

			public CompareByNextTime(F32 referencePoint)
			{
			}

			public bool CompareBool(Weight l, Weight r)
			{
				return false;
			}

			public override int Compare(Weight l, Weight r)
			{
				return 0;
			}
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public F32 NextEventTime { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 AverageTimeBetweenEvents { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int OriginalIndex { get; set; }

		public Weight(F32 frequency, int originalIndex)
		{
			NextEventTime = default(F32);
			AverageTimeBetweenEvents = default(F32);
			OriginalIndex = 0;
		}

		public Weight(F32 nextEventTime, F32 averageTimeBetweenEvents, int originalIndex)
		{
			NextEventTime = default(F32);
			AverageTimeBetweenEvents = default(F32);
			OriginalIndex = 0;
		}

		public Weight SetNextEventTime(F32 value)
		{
			return default(Weight);
		}
	}
}
