using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.Storage;
using MergeEngine.Data;
using Merger.Game.Model;

namespace Merger.Services.Backend.Sync
{
	public class BackendSyncEntitiesWrapper
	{
		[NonSerialized]
		public readonly IPersistentStorageService _persistentStorageService;

		[NonSerialized]
		public readonly IJsonService _jsonService;

		[NonSerialized]
		public readonly IPlayerModel _playerModel;

		[NonSerialized]
		public PersistentEntitiesWrapper _playerEntity;

		public List<string> MissingFiles;

		public List<string> EmptyFiles;

		public bool LoadedSuccessfully { get; }

		public PersistentEntitiesWrapper MainBoardItems { get; set; }

		public Dictionary<string, string> PlayerData => null;

		public BackendSyncEntitiesWrapper(IPersistentStorageService persistentStorageService, IJsonService jsonService, IPlayerModel playerModel)
		{
		}

		public bool TryLoadDataFromStorage()
		{
			return false;
		}

		public bool AllRequiredFilesAvailable()
		{
			return false;
		}

		public PersistentEntitiesWrapper TryGetEntity(string entityKey)
		{
			return null;
		}
	}
}
