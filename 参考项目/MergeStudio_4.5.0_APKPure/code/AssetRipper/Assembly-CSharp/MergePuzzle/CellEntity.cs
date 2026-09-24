using System;

namespace MergePuzzle
{
	[Serializable]
	public class CellEntity
	{
		public bool IsLocked;

		public int UnlockLevel;

		public Coordinate BoardIndex;

		public int LockedItemLevel;

		public int LockedItemSetID;

		public bool IsItemLocked;

		public bool IsItemBoxed;

		public CellEntity()
		{
		}

		public CellEntity(Coordinate boardIndex)
		{
		}

		public CellEntity(int unlockLevel, Coordinate boardIndex, int lockedItemLevel, int lockedItemSetID, bool isItemLocked, bool isItemBoxed)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
