using System.Collections.Generic;
using IFix.Core;
using fat.gamekitdata;

namespace FAT
{
	public static class RecordStateHelper
	{
		public static bool Find(int id, IList<AnyState> list, out AnyState v)
		{
			v = null;
			return false;
		}

		public static void AddOrUpdate(int id, int val, IList<AnyState> list, bool allowDuplicate = false)
		{
		}

		public static void UpdateRecord(int id, int val, IList<AnyState> list)
		{
		}

		public static bool RemoveRecord(int id, IList<AnyState> list)
		{
			return false;
		}

		[IDTag(1)]
		public static AnyState ToRecord(int id, bool v_)
		{
			return null;
		}

		public static bool ReadBool(int id, IList<AnyState> list)
		{
			return false;
		}

		[IDTag(0)]
		public static AnyState ToRecord(int id, int v_)
		{
			return null;
		}

		[IDTag(0)]
		public static int ReadInt(int id, IList<AnyState> list)
		{
			return 0;
		}

		[IDTag(1)]
		public static int ReadInt(int id, IList<AnyState> list, int defaultValue)
		{
			return 0;
		}

		[IDTag(2)]
		public static AnyState ToRecord(int id, long ts, long offset)
		{
			return null;
		}

		public static long ReadTS(int id, long offset, IList<AnyState> list)
		{
			return 0L;
		}
	}
}
