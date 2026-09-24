using System;
using System.Collections.Generic;
using MergePuzzle;
using UnityEngine;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	public class MiniBoardItemControllerFactory
	{
		[NonSerialized]
		public readonly CommonFactoryService _factoryService;

		[NonSerialized]
		public readonly ObjectPoolerBase _objectPool;

		[NonSerialized]
		public readonly Dictionary<Type, MiniBoardItemControllerModuleBase> _prefabsByType;

		public MiniBoardItemControllerFactory(CommonFactoryService factoryService, ObjectPoolerBase objectPool)
		{
		}

		public T GetItemModule<T>(MiniBoardItemController itemController, Transform parent = null) where T : MiniBoardItemControllerModuleBase
		{
			return null;
		}

		public MiniBoardItemControllerModuleBase GetPrefabForType<T>() where T : MiniBoardItemControllerModuleBase
		{
			return null;
		}

		public void DestroyItemModule<T>(T module) where T : MiniBoardItemControllerModuleBase
		{
		}
	}
}
