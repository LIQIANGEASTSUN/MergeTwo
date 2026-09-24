using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemDefault", menuName = "Scriptable/BoardItem/Default", order = 1)]
	public class BoardItemDefault : BoardItemData
	{
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
