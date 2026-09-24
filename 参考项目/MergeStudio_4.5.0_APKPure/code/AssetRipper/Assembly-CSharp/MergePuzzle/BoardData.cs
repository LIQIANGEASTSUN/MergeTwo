using System;
using System.Collections.Generic;
using NaughtyAttributes;
using Paxie;
using Paxie.MergeStudio.GameCore.Gameplay.Board.BoardCore;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardData", menuName = "Scriptable/Board/BoardData", order = 2)]
	public class BoardData : ScriptableObject, IBoardData
	{
		public BoardConfigurableUIData BoardConfigurableUIData;

		public EventData EventData;

		public float TaskCoinIncrementDelay;

		public float TaskGemIncrementDelay;

		public float LevelUpCollectableMoveExtraDelay;

		public int RowCount;

		public int ColumnCount;

		public int InitInventorySize;

		public int InitGemCount;

		public int InitCoinCount;

		public int InitUserEnergy;

		public int MaxUserEnergy;

		public int TotalEnergyFillTime;

		public int MaxChargingChestCount;

		public int MaxActiveTaskCount;

		public int TaskRewardCount;

		[ShowAssetPreview(40, 40)]
		public Sprite LockItemBackground;

		[ShowAssetPreview(40, 40)]
		public Sprite TreasureBoxLockNotif;

		[ShowAssetPreview(40, 40)]
		public Sprite TreasureBoxExclamation;

		[ShowAssetPreview(40, 40)]
		public Sprite SpawnerEnergySprite;

		public BoardItemCollectable CoinCollectable;

		public BoardItemCollectable GemCollectable;

		public BoardItemCollectable XPCollectable;

		public List<BoosterItemData> BoosterItemList;

		public List<int> DiscoveryBoxIdList;

		public SerializableDictionary<int, BoardItemSetData> BoardItemDictionary;

		public SerializableDictionary<int, BoardItemSetData> BoardItemDictionaryVariant;

		public SerializableDictionary<int, long> UnlimitedEnergyDurationByLevel;

		public List<BoardPositionData> InitialPositionData;

		public Vector3 ItemDefaultScale;

		public Vector3 ItemJellyScale;

		public int MinimumBubbleGameplayLevel;

		public int MinimumExtraItemGameplayLevel;

		public int InventoryCellCount;

		public bool ShowBoosters;

		public bool ShowInventory;

		public bool ShowRewardsController;

		public float AnimationTierInterval;

		public float AnimationSortingInterval;

		public float CustomAnimationSortingIntervalTier2;

		public GameObject UnboxParticle;

		public GameObject JellyDestroyParticle;

		[ShowAssetPreview(40, 40)]
		public Sprite BoxSprite;

		[ShowAssetPreview(40, 40)]
		public Sprite LeveledBoxSprite;

		[ShowAssetPreview(40, 40)]
		public Sprite GameplayCharBackground;

		public int RandomStartLevel;

		public int EnergySetID;

		public int GemSetID;

		public int CoinSetID;

		public int XPSetID;

		[SerializeField]
		public MetaData _metaData;

		public SpecialTaskDataConfig SpecialTaskDataConfig;

		[ShowAssetPreview(40, 40)]
		public Sprite EnergyTopUI;

		public SpineAnimationData SpineAnimationData;

		[ShowAssetPreview(40, 40)]
		public Sprite EnergyCollectableSprite;

		[ShowAssetPreview(40, 40)]
		public Sprite GemCollectableSprite;

		[ShowAssetPreview(40, 40)]
		public Sprite CoinCollectableSprite;

		[BoxGroup("TimeLimitedTask")]
		[Expandable]
		public TimeLimitedTaskData TimeLimitedTaskData;

		[NonSerialized]
		[NonSerialized]
		public BoardItemDictionaryHandler _boardItemDictionaryHandler;

		[NonSerialized]
		public string _levelLabel;

		[NonSerialized]
		public string _taskLabel;

		[NonSerialized]
		public string _label;

		public MetaData MetaData
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public BoardItemDictionaryHandler BoardItemDictionaryHandler => null;

		public string Label => null;

		public string TaskLabel => null;

		public BoardItemData GetBoardItemDataFallback(int setID, int level, bool skipWarning = false, bool fromEventBoard = false)
		{
			return null;
		}

		public BoardItemDictionaryHandler GetBoardItemDictionaryHandler()
		{
			return null;
		}

		public BoardPositionData GetInitialPositionData(int index)
		{
			return null;
		}

		public bool IsEvent()
		{
			return false;
		}

		public LevelData GetLevelData()
		{
			return null;
		}

		public Vector2 GetFirstCellPosition()
		{
			return default(Vector2);
		}

		public int GetListPosition(Coordinate coordinate)
		{
			return 0;
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

		public BoardItemSetData GetBoardItemSetFallback(int setID, bool checkBothGroups = false)
		{
			return null;
		}

		public BoosterItemData GetBoosterItemData(int ID)
		{
			return null;
		}

		public BoosterItemData GetBoosterItemData(BoosterType boosterType)
		{
			return null;
		}

		public Sprite GetBoosterSprite(BoosterType boosterType)
		{
			return null;
		}

		public int GetItemPrice(ItemEntity item)
		{
			return 0;
		}

		public Tuple<int, int> GetItemBubbleData(ItemInfo itemInfo, out BalanceBubbleConfigModel.BalanceBubbleItemModel bubbleData)
		{
			bubbleData = null;
			return null;
		}

		public Tuple<int, int> GetItemBubbleData(ItemEntity item, out BalanceBubbleConfigModel.BalanceBubbleItemModel bubbleData)
		{
			bubbleData = null;
			return null;
		}

		public int GetItemJellyPrice(ItemEntity item)
		{
			return 0;
		}

		public BoardItemData GetBoardItemData(ItemInfo itemInfo, bool skipWarning = false)
		{
			return null;
		}

		public BoardItemData GetBoardItemData(int setID, int level, bool skipWarning = false)
		{
			return null;
		}

		public BoardItemData GetBoardItemDataFallback(ItemInfo itemInfo, bool skipWarning = false)
		{
			return null;
		}

		public BoardItemData GetMergedItemData(int setID, int level)
		{
			return null;
		}

		public bool IsMergeable(int setID, int level)
		{
			return false;
		}

		public bool IsItemMaxLevel(int setID, int level)
		{
			return false;
		}

		public bool IsItemMaxLevel(ItemInfo itemInfo)
		{
			return false;
		}

		public bool IsCollectable(int setID)
		{
			return false;
		}

		public List<BoardItemSetData> GetAllSets()
		{
			return null;
		}

		public long GetEnergyUpdateNextMs()
		{
			return 0L;
		}

		public int GetMaxUserEnergy()
		{
			return 0;
		}

		public bool IsSpecialTaskItem(int setID)
		{
			return false;
		}

		public Sprite GetCollectableUISprite(CollectableType collectableType)
		{
			return null;
		}
	}
}
