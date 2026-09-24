using System;
using Paxie;

namespace MergePuzzle
{
	[Serializable]
	public class BoardPositionData
	{
		public bool IsCellLocked;

		[ConditionalField("IsCellLocked", false, new object[] { true })]
		public int UnlockLevel;

		public bool IsItemLocked;

		[ConditionalField("IsItemLocked", false, new object[] { true })]
		public int JellyItemGemCount;

		public bool IsItemBoxed;

		public bool IsItemPresent;

		[ConditionalField("IsItemPresent", false, new object[] { true })]
		public int SetID;

		[ConditionalField("IsItemPresent", false, new object[] { true })]
		public int LevelID;

		public int CellUnlockLevel;

		public bool ContainsItem()
		{
			return false;
		}

		public BoardPositionData Copy()
		{
			return null;
		}
	}
}
