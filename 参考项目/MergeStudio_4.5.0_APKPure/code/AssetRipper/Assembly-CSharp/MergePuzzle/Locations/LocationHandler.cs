using System;
using System.Collections.Generic;

namespace MergePuzzle.Locations
{
	public class LocationHandler
	{
		[NonSerialized]
		public readonly List<LocationBase> _locationList;

		public static LocationHandler Get()
		{
			return null;
		}

		public bool IsFromMeta()
		{
			return false;
		}

		public bool IsFrom<T>() where T : LocationBase
		{
			return false;
		}

		public bool IsFrom<T, T2>() where T : LocationBase where T2 : LocationBase
		{
			return false;
		}

		public bool IsFrom<T1, T2, T3>() where T1 : LocationBase where T2 : LocationBase where T3 : LocationBase
		{
			return false;
		}

		public bool IsFrom<T1, T2, T3, T4>() where T1 : LocationBase where T2 : LocationBase where T3 : LocationBase where T4 : LocationBase
		{
			return false;
		}

		public bool IsFrom<T1, T2, T3, T4, T5>() where T1 : LocationBase where T2 : LocationBase where T3 : LocationBase where T4 : LocationBase where T5 : LocationBase
		{
			return false;
		}

		public bool IsFrom<T1, T2, T3, T4, T5, T6>(out int typeIndex) where T1 : LocationBase where T2 : LocationBase where T3 : LocationBase where T4 : LocationBase where T5 : LocationBase where T6 : LocationBase
		{
			typeIndex = default(int);
			return false;
		}

		public bool IsFrom<T1, T2, T3, T4, T5, T6, T7>(out int typeIndex) where T1 : LocationBase where T2 : LocationBase where T3 : LocationBase where T4 : LocationBase where T5 : LocationBase where T6 : LocationBase where T7 : LocationBase
		{
			typeIndex = default(int);
			return false;
		}

		public bool TryGetLocation<T>(out T loc) where T : LocationBase
		{
			loc = null;
			return false;
		}

		public LocationHandler AddLocation<T>() where T : LocationBase, new()
		{
			return null;
		}

		public T AddLocationSelf<T>() where T : LocationBase, new()
		{
			return null;
		}

		public T GetLocation<T>() where T : LocationBase
		{
			return null;
		}

		public LocationHandler MakeFromRecurringEventUniqueRewards(int recurringEventId)
		{
			return null;
		}

		public LocationHandler MakeFromMichaelsArtStudioRenovationUniqueRewards()
		{
			return null;
		}

		public LocationHandler MakeFromPoolRaceRewardsShowArea()
		{
			return null;
		}

		public LocationHandler MakeFromAirRaceRewardsShowArea()
		{
			return null;
		}

		public LocationHandler AddMacroLocation()
		{
			return null;
		}
	}
}
