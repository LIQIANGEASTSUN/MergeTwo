using System;
using System.Collections.Generic;
using Paxie.MergeStudio.GameCore.Gameplay.Board.BoardCore;

namespace MergePuzzle
{
	public class PerishableSpawnerConfigAdaptor : AdaptorBase
	{
		[NonSerialized]
		public PerishableSpawnerConfig _activeConfig;

		[NonSerialized]
		public BoardItemData _perishedSpawn;

		[NonSerialized]
		public int _chargeSetID;

		[NonSerialized]
		public int _chargedCapacity;

		[NonSerialized]
		public bool _showItemPercentages;

		[NonSerialized]
		public bool _hasProgressText;

		public PerishableSpawnerConfigAdaptor(string setIDLevel, BalancePerishableConfigModelItem balancePerishableConfig, IBoardData boardData)
			: base(null)
		{
		}

		public PerishableSpawnerConfigAdaptor(BoardItemPerishableSpawner perishableSpawner)
			: base(null)
		{
		}

		public bool GetUsesEnergy()
		{
			return false;
		}

		public int GetCapacity()
		{
			return 0;
		}

		public bool GetNonProbabilistic()
		{
			return false;
		}

		public bool GetUseIndexedSpawn()
		{
			return false;
		}

		public List<SpawnedItem> GetSpawnedItems(bool useOriginalSetID = false)
		{
			return null;
		}

		public List<SpawnIndexedItemGroup> GetIndexedItemGroups()
		{
			return null;
		}

		public void UpdatePerishedSpawn(IBoardData boardData, int setID, int level)
		{
		}

		public BoardItemData GetPerishedSpawn()
		{
			return null;
		}

		public int GetChargedCapacity()
		{
			return 0;
		}

		public bool GetShowItemPercentages()
		{
			return false;
		}

		public bool GetHasProgressText()
		{
			return false;
		}
	}
}
