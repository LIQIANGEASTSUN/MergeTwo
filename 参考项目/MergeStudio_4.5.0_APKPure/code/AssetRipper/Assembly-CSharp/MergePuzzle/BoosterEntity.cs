using System;

namespace MergePuzzle
{
	[Serializable]
	public class BoosterEntity
	{
		public int ID;

		public int BoosterCount;

		public bool IsUnlocked;

		public int RequiredLevel;

		public int TotalUseCount;

		public int TotalPurchaseCount;

		public BoosterEntity()
		{
		}

		public void DecreaseBoosterCount(bool saveBoard = true)
		{
		}

		public BoosterEntity(int id, bool isUnlocked, int requiredLevel)
		{
		}
	}
}
