using System;
using DG.Tweening;
using MergePuzzle;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class MiniBoardItemRuntimeData : IItemRuntimeData
	{
		public string Name;

		public long NextSpawnerUpdateMs;

		public int UpdateStepMs;

		public bool SpawnerHintLock;

		public int SkipPrice;

		public BoardItemData BoardItemData;

		public Vector3 PreviousPosition;

		public Coordinate PreviousIndexForSellable;

		public MiniBoardItemEntity ItemEntity;

		public int TimeRequiredToExitNoCapacity;

		public Sequence SpawnerHintSequence;

		public Sequence ClickSequence;

		public Sequence PanelSpawnSequence;

		public Sequence MergeHintSequence;

		public bool SpawnAnimating;

		public bool IsFlyingToTask;

		public GameObject RemoveParticle;

		public bool ClickDownLock;

		public bool SpawnLock;

		public bool MergeTargetLock;

		public bool DragLock;

		public bool MergeHintLock { get; set; }

		public IItemEntity GetItemEntity => null;

		public int GetUpdateStepMs => 0;

		public void SetUpdateStepMs(int updateStepMs)
		{
		}

		public void SetTimeRequiredToExitNoCapacity(int time)
		{
		}

		public void SetNextSpawnerUpdateMs(long spawnerUpdateMs)
		{
		}

		public void ChangeNextSpawnerUpdateMs(long changedUpdateMs)
		{
		}

		public void SetSkipPrice(int skipPrice)
		{
		}
	}
}
