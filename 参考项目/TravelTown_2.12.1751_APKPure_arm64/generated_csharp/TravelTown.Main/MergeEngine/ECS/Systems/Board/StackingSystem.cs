using System;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.LiveOps.Events.Model;
using Merger.Services;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class StackingSystem : SystemBase, IItemsCombiner
	{
		public const int MaxStackSize = 999;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[Inject]
		[NonSerialized]
		public IBoardConfigService _boardConfigService;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

		public bool IsStackingEnabled => false;

		public static bool CanCombineStackSizes(int firstStackSize, int secondStackSize)
		{
			return false;
		}

		public bool GetStackingState()
		{
			return false;
		}

		public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public void ResetCombine()
		{
		}

		public void StackItems(PositionComponent firstItem, PositionComponent secondItem, BoardItemPosition targetPosition)
		{
		}

		public bool IsLocked(PositionComponent item)
		{
			return false;
		}

		public bool IsStacking(PositionComponent item)
		{
			return false;
		}
	}
}
