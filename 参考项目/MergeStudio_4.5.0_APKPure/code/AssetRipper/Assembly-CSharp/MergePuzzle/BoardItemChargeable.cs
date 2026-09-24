using NaughtyAttributes;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemChargeable", menuName = "Scriptable/BoardItem/Chargeable", order = 1)]
	public class BoardItemChargeable : BoardItemData
	{
		public int ChargeSetID;

		public int ChargeCountToCovertPerishable;

		public bool HasProgressText;

		[ShowIf("HasProgressText")]
		public ProgressTextData ProgressTextDataValue;

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
