using System;

namespace MergePuzzle
{
	[Serializable]
	public struct ItemInfo
	{
		public int SetID;

		public int Level;

		public static ItemInfo Empty => default(ItemInfo);

		public ItemInfo(int setID, int level)
		{
			SetID = 0;
			Level = 0;
		}

		public ItemInfo GetActiveItemInfo()
		{
			return default(ItemInfo);
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public bool Equals(ItemInfo other)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public static bool operator ==(ItemInfo x, ItemInfo y)
		{
			return false;
		}

		public static bool operator !=(ItemInfo x, ItemInfo y)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
