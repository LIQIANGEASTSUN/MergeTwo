using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemCharge", menuName = "Scriptable/BoardItem/Charge", order = 2)]
	public class BoardItemCharge : BoardItemData, IConfigAdaptor<ChargeAdaptor>, IConfigAdaptorBase
	{
		public int ChargedCapacity;

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public ChargeAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}
	}
}
