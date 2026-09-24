using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Merger.MergeBoard.PowerBoost.Data;
using Merger.MergeBoard.PowerBoost.Models;
using MoonActive.Data.Storage;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Services
{
	public class PowerBoostPersistanceService : IPowerBoostPersistanceService, IDisposable
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[NonSerialized]
		public string _id;

		public const string PowerBoostStorageKeyPrefix = "powerBoost";

		[NonSerialized]
		public readonly IKeyValueStorage _keyValueStorage;

		[NonSerialized]
		public LocalPlayerPersistentPowerBoostData _localPlayerPersistentPowerBoostData;

		[NonSerialized]
		public Dictionary<int, bool> _boostTooltipShown;

		public void Setup(string id)
		{
		}

		public void SubscribeToStateChanges()
		{
		}

		void IDisposable.Dispose()
		{
		}

		public void OnPowerBoostModeChanged(int newValue)
		{
		}

		public void LoadData()
		{
		}

		public void SaveData()
		{
		}

		public bool IsBoostLocallyUnlocked(int boostMode)
		{
			return false;
		}

		public void MarkBoostAsUnlocked(int boostMode)
		{
		}

		public bool WasTooltipShownForBoost(int boostMode)
		{
			return false;
		}

		public void MarkTooltipAsShownForBoost(int boostMode)
		{
		}
	}
}
