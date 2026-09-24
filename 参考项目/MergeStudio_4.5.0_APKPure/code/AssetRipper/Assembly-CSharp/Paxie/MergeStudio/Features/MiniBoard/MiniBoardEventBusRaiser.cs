using System.Collections.Generic;
using MergePuzzle;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public static class MiniBoardEventBusRaiser
	{
		public static void InitializeBoard(BoardEntity boardEntity, MiniBoardData boardData)
		{
		}

		public static void ChangeGameplayStatus(bool enableGameplay)
		{
		}

		public static void BoardMove(MiniBoardItemController itemController, MiniBoardCellController cellController)
		{
		}

		public static void BoardSwap(MiniBoardItemController itemController, MiniBoardItemController itemController2)
		{
		}

		public static void BoardMergeStart(MiniBoardItemController itemController, MiniBoardItemController itemController2, BoardItemData spawnedItem)
		{
		}

		public static void BoardMerge(MiniBoardItemController itemController, MiniBoardItemController itemController2, BoardItemData spawnedItem)
		{
		}

		public static void BoardMergeCompleted(MiniBoardItemController newItem)
		{
		}

		public static void BoardRevertMove(MiniBoardItemController itemController, bool applyScaleDownAnim = false)
		{
		}

		public static void DestroyFromBoard(int setID, int level)
		{
		}

		public static void ClearSelectedPosition(bool itemDestroy)
		{
		}

		public static void CollectCollectable(MiniBoardItemController collectable, BoardItemCollectable collectableData)
		{
		}

		public static void CollectRewardItemHolder(MiniBoardItemController rewardHolderItem, GameMainReward mainReward)
		{
		}

		public static void SpawnerSpawn(MiniBoardItemController spawner, BoardItemDefaultSpawner defaultSpawnerData, BoardItemAutoSpawner autoSpawnerData, Coordinate targetPosition)
		{
		}

		public static void PerishableSpawnerSpawn(MiniBoardItemController spawner, BoardItemPerishableSpawner perishableSpawnerData, Coordinate targetPosition)
		{
		}

		public static void OnStateChange(bool animateClockDisappear)
		{
		}

		public static void RemoveFromRewardUI(Transform spawnTransform, MiniBoardItemEntity itemEntity, BoardItemData itemData)
		{
		}

		public static void ClearBoard()
		{
		}

		public static void PreMergeParticleActive(MiniBoardItemController itemController)
		{
		}

		public static void BoardItemPositionUpdateStart(MiniBoardItemController itemController, MiniBoardItemController.PositionUpdateType positionUpdateType)
		{
		}

		public static void BoardItemPositionUpdate(MiniBoardItemController itemController, MiniBoardItemController.PositionUpdateType positionUpdateType)
		{
		}

		public static void BoardItemRemoveFinished()
		{
		}

		public static void ItemDragStarted(MiniBoardItemController itemController)
		{
		}

		public static void ItemDragging(MiniBoardItemController itemController)
		{
		}

		public static void ItemDragStopped()
		{
		}

		public static void SpawnerHintAdd(MiniBoardItemController itemController)
		{
		}

		public static void ItemGainFromSpawnerReward(MiniBoardItemGainFromSpawnerReward itemGainFromSpawnerReward)
		{
		}

		public static void BoardItemStatusChange(bool updateBoardTask)
		{
		}

		public static void BoardNonMovableItemClick(MiniBoardMovable moving, MiniBoardMovable.InteractionStatus interactionStatus)
		{
		}

		public static void BoardItemClick(MiniBoardMovable moving, MiniBoardMovable.InteractionStatus interactionStatus)
		{
		}

		public static void BoardDragCollisionButtonStays(MiniBoardMovable moving)
		{
		}

		public static void BoardRewardAreaUIUpdate()
		{
		}

		public static void BoardRewardAreaItemAdded(int addedItemCount, bool updateBoardIcon)
		{
		}

		public static void BoardUpdateRewardAreaCount(int totalItemCount)
		{
		}

		public static void ProgressionBoardLoadNewBoard()
		{
		}

		public static void ProgressionBoardMaxProgressLevelItemChanged(int maxLevel)
		{
		}

		public static void ProgressionBoardAnimatedProgressItemAnimationCompleted()
		{
		}

		public static void ProgressionBoardProgressItemFoundRaiseKey(Vector3 keyPosition, float keyWorldScale, Sprite keySprite)
		{
		}

		public static void ProgressionBoardNoticePopupClosed()
		{
		}

		public static void ProgressionBoardCongratsPopupClosed()
		{
		}

		public static void SRClearRewardArea()
		{
		}

		public static void SRBoardAddItemToRewardArea(int setID, int level, int boosterID, GameMainReward gameMainReward)
		{
		}

		public static void SRBoardSpawnItemRequest(int setID, int level)
		{
		}

		public static void SRBoardSpawnItem(MiniBoardItemEntity itemEntity, List<MiniBoardItemEntity> itemEntityList)
		{
		}

		public static void SRBoardSpawnRewardHolderItemRequest(int rewardSetID, int rewardLevel, int boosterID)
		{
		}

		public static void SRBoardSpawnRewardHolderItem(MiniBoardItemEntity itemEntity)
		{
		}
	}
}
