using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Framework.Core.DataBinding;
using MergeEngine.ECS;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Orders;
using MergeEngine.Model.Configuration;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.Game.Signal;
using Merger.Game.Views;
using Merger.Game.Views.BoardItem;
using Merger.PowerBoost;
using UnityEngine;
using Zenject;

namespace Merger.Game.ViewModel
{
	public class BoardViewModel : GameBaseViewModel
	{
		[Inject]
		public IPlayerModel PlayerModel;

		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IViewRegistryModel _viewRegistryModel;

		[Inject]
		[NonSerialized]
		public new IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IBoardItemViewBehaviourFactory _boardItemViewBehaviourFactory;

		[Inject]
		[NonSerialized]
		public IBoardItemBehavioursConfigurationModel _boardItemBehavioursConfigurationModel;

		[Inject]
		[NonSerialized]
		public ICoreBoardTogglesModel _coreBoardTogglesModel;

		[Inject]
		[NonSerialized]
		public IMergingHudLayoutModel _mergingHudLayoutModel;

		public MutableBindableProperty<bool> Enabled;

		[NonSerialized]
		public OrdersSystem _ordersSystem;

		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		public bool IsLiveMergingHudLayoutRefreshEnabled => false;

		public GameObject BoardItemView2Prefab => null;

		public GameObject InitializablePool => null;

		public PowerBoostMultiModesConfig CurrentPowerBoostConfig => null;

		public bool IsNewCoreBoardBackgroundAndBlockersEnabled => false;

		public bool IsMainBoard => false;

		public event Action SelectedItemSold
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

		public void RegisterView(IBoardView boardView)
		{
		}

		public void SubscribeToCurrentBoardTypeChanged(Action<CurrentBoardType> listener)
		{
		}

		public void UnsubscribeFromCurrentBoardTypeChanged(Action<CurrentBoardType> listener)
		{
		}

		public override void SubscribeToSignals()
		{
		}

		public void SellSelectedItemSignalFired()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public void OnToggleBoard(ToggleDisableBoardSignal signal)
		{
		}

		public void TryStartTutorial()
		{
		}

		public void ChangeGameStateToMerging(string enterStateReason)
		{
		}

		public void ChangeGameStateToOther()
		{
		}

		public void UnregisterView(IBoardView boardView)
		{
		}

		public void PlayFlyTimers(Vector2 position, Action boosterPulse, Action boosterUnlock, Action onFinish)
		{
		}

		public void SendCoreBoardEnteredAnalytic(string enterStateReason)
		{
		}

		public void AttachBehaviours(Entity entity, BoardItemView2 boardItemView2)
		{
		}

		public IReadOnlyDictionary<BehaviourPrefabData, InstantiationType> GetBehaviourInstantiationTypeByData()
		{
			return null;
		}

		public IReadOnlyDictionary<string, BehaviourPrefabData> GetBehaviourDataByType()
		{
			return null;
		}
	}
}
