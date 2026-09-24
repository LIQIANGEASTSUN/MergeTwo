using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemCollectable", menuName = "Scriptable/BoardItem/Collectable", order = 5)]
	public class BoardItemCollectable : BoardItemData
	{
		public enum CollectableType
		{
			Gem = 0,
			Coin = 1,
			Energy = 2,
			SeasonPoint = 3,
			RecurringEvent = 4,
			BoardEventPoint = 5,
			XP = 6
		}

		public CollectableType collectableType;

		[SerializeField]
		public int rewardAmount;

		public int animatedAmount;

		public int AnimatedAmount => 0;

		public int RewardAmount()
		{
			return 0;
		}

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}
	}
}
