using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemEventCurrency", menuName = "Scriptable/BoardItem/BoardItemEventCurrency", order = 0)]
	public class BoardItemEventCurrency : BoardItemData
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
