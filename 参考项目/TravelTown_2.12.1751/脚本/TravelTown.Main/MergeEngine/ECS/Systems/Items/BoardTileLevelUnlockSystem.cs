using System;
using System.Runtime.CompilerServices;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.LiveOps.Events.Model.Data;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class BoardTileLevelUnlockSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergeConfigurationModel;

		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[InjectSystem]
		[NonSerialized]
		public PlayerEventLevelSystem _playerEventLevelSystem;

		[NonSerialized]
		public PlayerLevelSystem _playerLevelSystem;

		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[NonSerialized]
		public HintComponent _hintComponent;

		public event Action UnlockCompleted
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

		public void BoardViewOnLayoutInitialized()
		{
		}

		public override void OnGameStarted()
		{
		}

		public void SpawnAndSlideXpIcons(PositionComponent positionComponent)
		{
		}

		public void SendBoardOperation(LockedComponent lockedComponent, int levelLock)
		{
		}

		public void TryUnlockItems(int userLevel, int upToLevel, LiveOpsEventProgress liveOpsEventProgress = null, bool animate = true)
		{
		}

		public void UnlockItem(LockedComponent lockedComponent)
		{
		}
	}
}
