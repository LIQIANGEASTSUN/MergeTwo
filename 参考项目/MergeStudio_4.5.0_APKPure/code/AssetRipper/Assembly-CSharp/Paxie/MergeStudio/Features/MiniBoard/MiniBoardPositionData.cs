using System;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class MiniBoardPositionData
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

		public MiniBoardPositionData Copy()
		{
			return null;
		}
	}
}
