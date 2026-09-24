using System;
using System.Collections.Generic;
using MergePuzzle;
using NaughtyAttributes;
using Paxie.MergeStudio.GameCore.Gameplay.Board.BoardCore;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public abstract class MiniBoardData : ScriptableObject, IBoardData
	{
		[BoxGroup("Cell")]
		public MiniBoardCellData CellData;

		[ShowAssetPreview(40, 40)]
		[BoxGroup("Modules")]
		public Sprite LockItemBackground;

		[BoxGroup("Modules")]
		[ShowAssetPreview(40, 40)]
		public Sprite BoxSprite;

		[ShowAssetPreview(40, 40)]
		[BoxGroup("Modules")]
		public Sprite RewardHolderInsideSprite;

		[BoxGroup("Items")]
		public SerializableDictionary<int, BoardItemSetData> BoardItemDictionary;

		[BoxGroup("Item Scaling")]
		public float ItemDefaultScale;

		[BoxGroup("Item Scaling")]
		public float ItemJellyScale;

		[BoxGroup("Reward Area")]
		public float RewardAreaMiniBoardItemScale;

		[BoxGroup("Reward Area")]
		public float RewardAreaItemRewardScale;

		[BoxGroup("Particles")]
		public GameObject UnboxParticle;

		[BoxGroup("Particles")]
		public GameObject JellyDestroyParticle;

		public BoardItemData GetBoardItemDataFallback(int setID, int level, bool skipWarning = false, bool fromEventBoard = false)
		{
			return null;
		}

		public Vector2 GetFirstCellPosition(int rowCount, int columnCount)
		{
			return default(Vector2);
		}

		public List<BoardItemData> GetBoardItemSetItems(int setID)
		{
			return null;
		}

		public List<BoardItemData> GetAllBoardDataItems()
		{
			return null;
		}

		public List<T> GetAllBoardDataItems<T>() where T : BoardItemData
		{
			return null;
		}

		public List<BoardItemData> GetBoardItemSetItems(params Type[] types)
		{
			return null;
		}

		public BoardItemSetData GetBoardItemSet(int setID, bool checkBothGroups = false)
		{
			return null;
		}

		public BoardItemData GetBoardItemData(ItemInfo itemInfo, bool skipWarning = false)
		{
			return null;
		}

		public BoardItemData GetBoardItemData<T>()
		{
			return null;
		}

		public BoardItemData GetMergedItemData(int setID, int level)
		{
			return null;
		}

		public bool IsItemMaxLevel(int setID, int level)
		{
			return false;
		}

		public bool IsItemMaxLevel(ItemInfo itemInfo)
		{
			return false;
		}

		public float GetRewardAreaItemScale(GameMainReward mainReward)
		{
			return 0f;
		}

		public MiniBoardData()
		{
		}
	}
}
