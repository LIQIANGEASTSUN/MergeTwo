using System;
using System.Collections.Generic;
using Framework.Core.Assets;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using UnityEngine;
using Zenject;
using strange.extensions.promise.api;

namespace Framework.Core.MVVM.ViewModel
{
	public class ViewModelBase : NavigationViewModel, IViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IAssetManager _assetManager;

		[Inject]
		[NonSerialized]
		public IAssetOverrideMappingModel _assetOverrideMappingModel;

		[Inject]
		[NonSerialized]
		public DiContainer _container;

		[Inject]
		[NonSerialized]
		public ISafeAreaModel _safeAreaModel;

		[NonSerialized]
		public readonly HashSet<UnityEngine.Object> _loadedAssets;

		public BindableProperty<Rect> SafeArea => null;

		public DiContainer Container => null;

		public IPromise<GameObject> InstantiatePrefab(IAsset assetDefinition, Transform parent = null, DiContainer container = null)
		{
			return null;
		}

		public IPromise<T> GetFailedPromise<T>() where T : UnityEngine.Object
		{
			return null;
		}

		public bool IsAssetInvalid(IAsset assetDefinition)
		{
			return false;
		}

		public IPromise<T> LoadAssetAsync<T>(IAsset assetDefinition) where T : UnityEngine.Object
		{
			return null;
		}

		public void OnAssetLoaded(UnityEngine.Object obj)
		{
		}

		public void UnloadAllAssets()
		{
		}

		public void UnloadAsset(UnityEngine.Object asset)
		{
		}

		public GameObject InstantiateInjected(GameObject original, Transform parent, bool worldPositionStays = false)
		{
			return null;
		}

		public void RequestAssetOverrideTransition(Asset localAsset, IAsset remoteAsset, string transition, object payload = null)
		{
		}
	}
}
