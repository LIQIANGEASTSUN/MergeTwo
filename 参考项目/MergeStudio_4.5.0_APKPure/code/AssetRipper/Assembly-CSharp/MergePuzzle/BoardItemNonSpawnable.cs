namespace MergePuzzle
{
	public abstract class BoardItemNonSpawnable : BoardItemData
	{
		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public override bool IsSpawnableFromRewardArea()
		{
			return false;
		}

		public BoardItemNonSpawnable()
		{
		}
	}
}
