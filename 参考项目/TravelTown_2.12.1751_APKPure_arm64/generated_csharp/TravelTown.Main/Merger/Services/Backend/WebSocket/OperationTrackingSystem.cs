using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.ECS.Systems;
using Merger.Boosters.Declarations.Models;
using Zenject;

namespace Merger.Services.Backend.WebSocket
{
	public class OperationTrackingSystem : SystemBase
	{
		[Inject]
		[NonSerialized]
		public IOperationTrackingService _operationTrackingService;

		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		public void TrackMergeOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData, string actionId) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackInsertOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackExtractOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackSplitOperation(List<ItemNotificationData> itemsNotificationData)
		{
		}

		public void TrackUndoSplitOperation(List<ItemNotificationData> itemsNotificationData)
		{
		}

		public void TrackItemAddedToInventoryOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackItemRestoredFromInventoryOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackExpendOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackItemAddedToProducerInventoryOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackItemMovedBetweenInventoryTabsOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackItemRestoredFromProducerInventoryOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackExpireBubbleOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackMoveOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackInteractionOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackCollectOperation(ItemNotificationData itemData)
		{
		}

		public void TrackChangeStateOperation(ItemNotificationData itemData, ExtraData extraData = null)
		{
		}

		public void TrackBubbleBlastOperation(ItemNotificationData itemData, ExtraData extraData = null)
		{
		}

		public void TrackRemoveOperation(ItemNotificationData itemData, ExtraData extraData = null)
		{
		}

		public void TrackSellItemOperation(ItemNotificationData itemData)
		{
		}

		public void TrackUndoSellOperation(ItemNotificationData itemData)
		{
		}

		public void TrackEnqueueUndoSellOperation(ItemNotificationData itemData, string uuidInBoardQueue, long enqueueTimestamp)
		{
		}

		public void TrackEnqueueItemOperation(ItemNotificationData itemData, string uuidInBoardQueue, long enqueueTimestamp)
		{
		}

		public void TrackDequeueItemOperation<TItemNotificationData>(TItemNotificationData dequeuedItemData, string uuidInBoardQueue, TItemNotificationData createdItemData = null, string boosterUuid = null, IMergeItem dequeuedItem = null) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackItemDestroyOperation(ItemNotificationData itemData)
		{
		}

		public void TrackCreateItemOnBoardOperation(ItemNotificationData itemData)
		{
		}

		public void TrackSwapItemOperation(List<ItemNotificationData> itemData)
		{
		}

		public void TrackCollectToolboxOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackCollectToolFragment<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData) where TItemNotificationData : BaseNotificationData
		{
		}

		public void TrackExpireMeteorOperation(ItemNotificationData itemData)
		{
		}

		public void TrackStackingOperation<TItemNotificationData>(List<TItemNotificationData> itemsNotificationData, string actionId) where TItemNotificationData : BaseNotificationData
		{
		}
	}
}
