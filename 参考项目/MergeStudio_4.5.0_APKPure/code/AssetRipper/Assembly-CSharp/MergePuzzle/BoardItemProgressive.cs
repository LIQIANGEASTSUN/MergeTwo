using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemProgressive", menuName = "Scriptable/BoardItem/Progressive", order = 1)]
	public class BoardItemProgressive : BoardItemData, IConfigAdaptor<ProgressiveAdaptor>, IConfigAdaptorBase
	{
		public string JsonLabel;

		public int TaskLoopStartIndex;

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public ProgressiveAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}
	}
}
