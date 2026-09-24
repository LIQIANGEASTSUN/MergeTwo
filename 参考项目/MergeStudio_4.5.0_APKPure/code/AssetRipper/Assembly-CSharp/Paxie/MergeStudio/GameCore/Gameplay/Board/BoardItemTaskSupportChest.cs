using MergePuzzle;
using Paxie.MergeStudio.Features.TaskSupport;
using UnityEngine;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board
{
	[CreateAssetMenu(fileName = "BoardItemTaskSupportChest", menuName = "Scriptable/BoardItem/BoardItemTaskSupportChest")]
	public class BoardItemTaskSupportChest : BoardItemData, IConfigAdaptor<TaskSupportChestAdaptor>, IConfigAdaptorBase
	{
		public TaskSupportChestHandler TaskSupportChestHandler => null;

		public TaskSupportChestAdaptor ConfigAdaptor => null;

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public bool ProcessSpawn(ItemController itemController, BoardController board, int energyConsumeAmount)
		{
			return false;
		}

		public SpawnedItem GetRandomItem(BoardController board)
		{
			return null;
		}

		public TaskSupportChestAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}
	}
}
