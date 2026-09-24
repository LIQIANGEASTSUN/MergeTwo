using System;
using System.Collections.Generic;
using MergePuzzle;
using UnityEngine;

namespace Paxie.MergePuzzle
{
	public class ItemControllerFactory
	{
		[NonSerialized]
		public readonly CommonFactoryService _factoryService;

		[NonSerialized]
		public readonly ObjectPoolerBase _objectPool;

		[NonSerialized]
		public readonly Dictionary<Type, ItemControllerModuleBase> _prefabsByType;

		public ItemControllerFactory(CommonFactoryService factoryService, ObjectPoolerBase objectPool)
		{
		}

		public T GetItemModule<T>(ItemController itemController, Transform parent = null) where T : ItemControllerModuleBase
		{
			return null;
		}

		public ItemControllerModuleBase GetPrefabForType<T>() where T : ItemControllerModuleBase
		{
			return null;
		}

		public void DestroyItemModule<T>(T module) where T : ItemControllerModuleBase
		{
		}
	}
}
