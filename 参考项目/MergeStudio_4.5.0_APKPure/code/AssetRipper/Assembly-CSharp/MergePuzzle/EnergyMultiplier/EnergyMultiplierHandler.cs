using System;
using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle.EnergyMultiplier
{
	public class EnergyMultiplierHandler
	{
		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public EnergyMultiplierEntity _entity;

		[NonSerialized]
		public KiteEnergyMultiplierConfig _config;

		[NonSerialized]
		public bool _isActivated;

		[NonSerialized]
		public EnergyMultiplierAssetContainer _assets;

		public const string LocalizationTableName = "EnergyMultiplierStrings";

		[NonSerialized]
		public List<int> _availableMultipliers;

		[NonSerialized]
		public int _tutorialStep103Counter;

		public BoardEntity BoardEntity => null;

		public EnergyMultiplierEntity Entity => null;

		public KiteEnergyMultiplierConfig Config => null;

		public void Initialize(BoardEntity boardEntity)
		{
		}

		public void SetData(EnergyMultiplierAssetContainer assets)
		{
		}

		public void SetActive(bool isActivated)
		{
		}

		public bool GetSpawnerEnergySprite(ItemController itemController, out Sprite sprite)
		{
			sprite = null;
			return false;
		}

		public bool GetSpawnerEnergySprite(ItemController itemController, int multiplier, out Sprite sprite)
		{
			sprite = null;
			return false;
		}

		public List<int> GetAvailableMultipliers(bool checkEnergyCondition)
		{
			return null;
		}

		public void CalculateAvailableMultipliers(bool checkEnergyCondition)
		{
		}

		public int GetEnergyConsumeAmount(int itemSetID, bool isBoardEvent)
		{
			return 0;
		}

		public float GetCapacityReduceAmount(int itemSetID, bool isBoardEvent)
		{
			return 0f;
		}

		public bool ShouldShowTooltip(ItemController spawner, ref int maxAvailableMultiplier)
		{
			return false;
		}

		public float GetCurrencyClosestLevelProbability()
		{
			return 0f;
		}

		public BoardItemData GetIncreasedItemData(BoardItemData itemData, int energyConsumeAmount, BoardData boardData, bool isBoardEvent)
		{
			return null;
		}

		public static string GetLocalizedString(string key)
		{
			return null;
		}

		public static void Log(string message)
		{
		}
	}
}
