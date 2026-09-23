using System.Collections.Generic;
using GameLogic.Player.MergeTasks;
using GameLogic.Player.Rewards;
using Merge;
using UnityEngine;

namespace UI
{
	public interface ITaskActionListener
	{
		bool CanCompleteBoardEventTask();

		void ProcessShowBoardEventTaskTap(MergeBoardId targetBoardId);

		void ProcessShowButtonTap(UnlockAreaTask task);

		void ProcessShowButtonTap(HotspotMergeTask task);

		void ProcessShowButtonTap(RepeatableTask task);

		void ProcessCompleteCollectibleBoardEventTaskTap(ToDoProgressCollectibleBoardEventItem item, CollectibleBoardEventMergeTask task, List<(Vector3, IPlayerReward)> visualRewards);

		void ProcessShowCollectibleBoardEventTaskTap(CollectibleBoardEventMergeTask task);

		void DebugRefresh();
	}
}
