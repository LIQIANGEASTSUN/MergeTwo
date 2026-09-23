using System;
using System.Collections.Generic;
using System.Numerics;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class UnboxingSystem : SystemBase
	{
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[NonSerialized]
		public MergeSystem _mergingSystem;

		[NonSerialized]
		public BoardComponent _boardComponent;

		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _configurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public PlayerEventLevelSystem _playerEventLevelSystem;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override void InitializeSystem()
		{
		}

		public void ItemMerged(IMergeItem newMergeItem, BoardItemPosition position, IMergeItem firstMergeItem, IMergeItem secondMergeItem)
		{
		}

		public void ItemInteracted(IMergeItem mergeItem, BoardItemPosition position, InteractionType interactionType, List<ItemMultiple> consumedItems)
		{
		}

		public void ProcessItemConsumeUnboxing(IMergeItem mergeItem, BoardItemPosition position, List<ItemMultiple> consumedItems)
		{
		}

		public void ProcessResourceConsumeUnboxing(IMergeItem mergeItem, BoardItemPosition position)
		{
		}

		public void NotifyAndTrackInteractionProgress(LockedComponent adjacentItemLocked)
		{
		}

		public void FireLiveOpsZoneUnboxedIfNeeded(LockedComponent adjacentItemLocked, string mergeItemType, string reason, string interactionItems, Vector2 interactionLocation)
		{
		}

		public static int GetInteractionAmountLeft(LockedComponent locked)
		{
			return 0;
		}

		public static Vector2 ToVector2(BoardItemPosition position)
		{
			return default(Vector2);
		}

		public void UnboxItem(LockedComponent lockedComponent)
		{
		}
	}
}
