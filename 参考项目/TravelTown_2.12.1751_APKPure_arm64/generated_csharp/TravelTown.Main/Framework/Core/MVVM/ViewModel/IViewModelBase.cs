using System;
using Framework.Core.Assets;
using Framework.Core.DataBinding;
using Framework.Core.Services.Analytics;
using Framework.UIFSM.Model;
using Merger.Models;
using UnityEngine;
using Zenject;
using strange.extensions.promise.api;

namespace Framework.Core.MVVM.ViewModel
{
	public interface IViewModelBase
	{
		BindableProperty<Rect> SafeArea { get; }

		string CurrentStateName { get; }

		string PreviousStateName { get; }

		AnalitycsState CurrentAnalyticsState { get; }

		BindableProperty<bool> UiEnabled { get; }

		bool BackButtonHasBlockingFlags { get; }

		event Action<string> StateChanged;

		IPromise<GameObject> InstantiatePrefab(IAsset assetDefinition, Transform parent = null, DiContainer container = null);

		IPromise<T> LoadAssetAsync<T>(IAsset assetDefinition) where T : UnityEngine.Object;

		void UnloadAllAssets();

		void UnloadAsset(UnityEngine.Object asset);

		GameObject InstantiateInjected(GameObject original, Transform parent, bool worldPositionStays = false);

		void RequestAssetOverrideTransition(Asset localAsset, IAsset remoteAsset, string transition, object payload = null);

		void SubscribeToSignal<TSignal>(Action<TSignal> listener);

		void SubscribeToSignal<TSignal>(Action listener);

		void UnsubscribeFromSignal<TSignal>(Action<TSignal> listener);

		void UnsubscribeFromSignal<TSignal>(Action listener);

		void FireSignal<TSignal>();

		void FireSignal<TSignal>(TSignal signal);

		void TryFireSignal<TSignal>(TSignal signal);

		void Dispose();

		bool CanGoBack();

		bool CanTransitionTo(string transition);

		void EnableUI(BlockUIFlag flagToClear);

		void DisableUI(BlockUIFlag flagToRaise);

		void RequestTransition(string transition, object payload = null);

		void Back();

		void SetNavigationBackAction(Action action);

		void BlockBackButton();

		void BlockBackButton(BackButtonDisableFlag flagToRise);

		void UnblockBackButton();

		void UnblockBackButton(BackButtonDisableFlag flagToRemove);
	}
}
