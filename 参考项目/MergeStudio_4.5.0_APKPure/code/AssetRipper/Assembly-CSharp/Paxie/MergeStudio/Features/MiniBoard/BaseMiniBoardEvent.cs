using System.Runtime.InteropServices;
using MergePuzzle;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class BaseMiniBoardEvent
	{
		public struct InitializeBoard : IEvent
		{
			public BoardEntity BoardEntity;

			public MiniBoardData MiniBoardData;
		}

		public struct ChangeGameplayStatus : IEvent
		{
			public bool EnableGameplay;
		}

		public struct Move : IEvent
		{
			public MiniBoardItemController Item;

			public MiniBoardCellController Cell;
		}

		public struct Swap : IEvent
		{
			public MiniBoardItemController Item1;

			public MiniBoardItemController Item2;
		}

		public struct MergeStart : IEvent
		{
			public MiniBoardItemController Item1;

			public MiniBoardItemController Item2;

			public BoardItemData SpawnedItem;
		}

		public struct Merge : IEvent
		{
			public MiniBoardItemController Item1;

			public MiniBoardItemController Item2;

			public BoardItemData SpawnedItem;
		}

		public struct MergeCompleted : IEvent
		{
			public MiniBoardItemController NewItem;
		}

		public struct RevertMove : IEvent
		{
			public MiniBoardItemController Item;

			public bool ApplyScaleDownAnim;
		}

		public struct DestroyFromBoard : IEvent
		{
			public int SetID;

			public int Level;
		}

		public struct ClearSelectedPosition : IEvent
		{
			public bool ItemDestroy;
		}

		public struct CollectCollectable : IEvent
		{
			public MiniBoardItemController Collectable;

			public BoardItemCollectable CollectableData;
		}

		public struct CollectRewardItemHolder : IEvent
		{
			public MiniBoardItemController RewardHolderItem;

			public GameMainReward MainReward;
		}

		public struct SpawnerSpawn : IEvent
		{
			public MiniBoardItemController Spawner;

			public BoardItemDefaultSpawner DefaultSpawnerData;

			public BoardItemAutoSpawner AutoSpawnerData;

			public Coordinate TargetPosition;
		}

		public struct PerishableSpawnerSpawn : IEvent
		{
			public MiniBoardItemController Spawner;

			public BoardItemPerishableSpawner PerishableSpawnerData;

			public Coordinate TargetPosition;
		}

		public struct OnStateChange : IEvent
		{
			public bool AnimateClockDisappear;
		}

		public struct RemoveRewardFromRewardArea : IEvent
		{
			public Transform SpawnTransform;

			public MiniBoardItemEntity ItemEntity;

			public BoardItemData ItemData;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ClearBoard : IEvent
		{
		}

		public struct PreMergeParticleActive : IEvent
		{
			public MiniBoardItemController ItemController;
		}

		public struct BoardItemPositionUpdateStart : IEvent
		{
			public MiniBoardItemController Item;

			public MiniBoardItemController.PositionUpdateType Type;
		}

		public struct BoardItemPositionUpdate : IEvent
		{
			public MiniBoardItemController Item;

			public MiniBoardItemController.PositionUpdateType Type;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct BoardItemRemoveFinished : IEvent
		{
		}

		public struct ItemDragStarted : IEvent
		{
			public MiniBoardItemController ItemController;
		}

		public struct ItemDragging : IEvent
		{
			public MiniBoardItemController ItemController;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct ItemDragStopped : IEvent
		{
		}
	}
}
