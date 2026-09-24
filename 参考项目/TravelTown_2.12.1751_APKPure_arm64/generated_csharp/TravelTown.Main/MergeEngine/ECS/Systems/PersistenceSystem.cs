using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Framework.Core.Services;
using Framework.Core.Services.Storage;
using MergeEngine.ECS.Components;
using Merger.Boosters.Declarations.Models;
using Merger.Models;
using Zenject;

namespace MergeEngine.ECS.Systems
{
	public class PersistenceSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IPersistentStorageService _persistentStorageService;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IActionsModel _actionsModel;

		[NonSerialized]
		public Dictionary<string, Dictionary<PersistentComponent, Dictionary<string, string>>> _serializationCache;

		[NonSerialized]
		public bool _createdEntities;

		[NonSerialized]
		public Dictionary<string, Action<Dictionary<string, string>>> _storeKeyToDeserializeMethod;

		[NonSerialized]
		public HashSet<string> _dirtyKeys;

		[NonSerialized]
		public HashSet<string> _keysToSaveWithPrefix;

		[NonSerialized]
		public string _storageKeyPrefix;

		public bool HasData => false;

		public event Action Reloaded
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public override void InitializeSystem()
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public void TryLoad()
		{
		}

		public void LoadKeys(List<string> keys)
		{
		}

		public string GetPersistentKey(string serializationKey)
		{
			return null;
		}

		public void DeserializeEntity(Entity entity, Dictionary<string, string> serializedEntity)
		{
		}

		public void DeserializeEntity(string persistentStoreKey, Dictionary<string, string> serializedEntity)
		{
		}

		public override void EntityRemoved(Entity entity)
		{
		}

		public void SerializeComponent(PersistentComponent component)
		{
		}

		public void Save()
		{
		}

		public void CreateSerializationCache()
		{
		}

		public void SerializeAndSave()
		{
		}

		public void SetStorageKeyPrefix(string storageKeyPrefix)
		{
		}

		public void ClearStorageKeyPrefix()
		{
		}

		public void DeleteDataWithStorageKeyPrefix(string storageKeyPrefix)
		{
		}

		public void ReloadKeysUsingSerializationPrefix()
		{
		}
	}
}
