using System;
using Framework.Core.Command;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Items;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.Game.Signal;
using Merger.Game.Views;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace Merger.Game.Command
{
	public class SellSelectedItemCommand : CommandBase<SellSelectedItemSignal>
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _configurationModel;

		[Inject]
		[NonSerialized]
		public IRewardAnimationTargetsModel _rewardAnimationTargetsModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public ISystemManager _systemManager;

		[Inject]
		[NonSerialized]
		public IEntityManager _entityManager;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IBoardSelectionModel _boardSelectionModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[NonSerialized]
		public BoardSystem _boardSystem;

		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		public BoardSystem BoardSystem => null;

		public OperationTrackingSystem OperationTrackingSystem => null;

		public IBoardView BoardView => null;

		public ResourcesSystem ResourcesSystem => null;

		public override void Execute(SellSelectedItemSignal signal)
		{
		}

		public Reward GetRewardForSelling(SellCapability sellCapability)
		{
			return null;
		}

		public int GetSmileyRewardForSale(PlayerResourceEnum resource, int amount)
		{
			return 0;
		}

		public void OnUndoSell(UndoSellData data)
		{
		}

		public bool ConsumeItemsPrice(IMergeItem item)
		{
			return false;
		}

		public BoardItemPosition GetAvailablePositionForItem(Entity entity)
		{
			return default(BoardItemPosition);
		}
	}
}
