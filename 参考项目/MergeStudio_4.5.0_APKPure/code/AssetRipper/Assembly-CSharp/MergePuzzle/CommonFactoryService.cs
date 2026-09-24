using System.Collections.Generic;
using NaughtyAttributes;
using Paxie;
using Paxie.MergePuzzle;
using Paxie.MergeStudio.Features.MiniBoard;
using UnityEngine;

namespace MergePuzzle
{
	public class CommonFactoryService : MonoBehaviour
	{
		[SerializeField]
		[BoxGroup("Pool")]
		public ObjectPoolerBase ObjectPool;

		[Foldout("Warning Text")]
		[SerializeField]
		public WarningText WarningTextPrefab;

		[Foldout("Item Controller")]
		public SpawnerClockController ItemSpawnerClockPrefab;

		[Foldout("Item Controller")]
		public ItemControllerDialogue ItemDialoguePrefab;

		[Foldout("Item Controller")]
		public ItemControllerTick ItemTickPrefab;

		[Foldout("Item Controller")]
		public ItemControllerProgressBar ItemProgressBarPrefab;

		[Foldout("Item Controller")]
		public ItemControllerMaxBadge ItemMaxBadgePrefab;

		[Foldout("Item Controller")]
		public ItemControllerDebug ItemDebugPrefab;

		[Foldout("Item Controller")]
		public ItemControllerBox ItemBoxPrefab;

		[Foldout("Item Controller")]
		public ItemControllerLock ItemLockPrefab;

		[Foldout("Item Controller")]
		public ItemControllerTreasureBoxUnlock ItemTreasureBoxUnlockPrefab;

		[Foldout("Item Controller")]
		public ItemControllerSpawnerEnergy ItemSpawnerEnergyPrefab;

		[Foldout("Item Controller")]
		public ItemControllerProgressText ItemProgressTextPrefab;

		[Foldout("Item Controller")]
		public ItemControllerTreasureBoxOpenSprite ItemTreasureBoxOpenSpritePrefab;

		[Foldout("Item Controller")]
		public ItemControllerTreasureBoxOpened ItemTreasureBoxOpenedPrefab;

		[Foldout("Item Controller")]
		public ItemControllerBubble ItemBubblePrefab;

		[Foldout("Mini Board Item Controller")]
		public MiniBoardItemControllerBox MiniBoardItemBoxPrefab;

		[Foldout("Mini Board Item Controller")]
		public MiniBoardItemControllerDebug MiniBoardItemDebugPrefab;

		[Foldout("Mini Board Item Controller")]
		public MiniBoardItemControllerLock MiniBoardItemLockPrefab;

		[Foldout("Mini Board Item Controller")]
		public MiniBoardItemControllerMaxBadge MiniBoardItemMaxBadgePrefab;

		[Foldout("Mini Board Item Controller")]
		public MiniBoardItemControllerRewardIcon MiniBoardItemRewardIconPrefab;

		[Foldout("Mini Board Item Controller")]
		public MiniBoardItemControllerRewardHolderIcon MiniBoardItemRewardHolderIconPrefab;

		public WarningTextFactory WarningTextFactory { get; set; }

		public ItemControllerFactory ItemControllerFactory { get; set; }

		public MiniBoardItemControllerFactory MiniBoardItemControllerFactory { get; set; }

		public void Initialize()
		{
		}

		public void InitObjectPool()
		{
		}

		public void CheckNull()
		{
		}

		public void AddItemPoolModules(List<PoolableType> poolableTypes)
		{
		}

		public void AddMiniBoardItemPoolModules(List<PoolableType> poolableTypes)
		{
		}
	}
}
