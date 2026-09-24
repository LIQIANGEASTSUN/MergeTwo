using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Data.Payload;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket.RemoteSpawning;
using Zenject;

namespace MergeEngine.Model.RemoteSpawning
{
	public class RemoteSpawningModel : ModelBase, IRemoteSpawningModel
	{
		[Serializable]
		public class RemoteSpawningQueue
		{
			public string latestQueueNotificationId;

			public Queue<ExpiryItem> Items;
		}

		[Serializable]
		public class ExpiryItem
		{
			public string itemId;

			public long expiresAtTimestamp;
		}

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPushedItemsModel _pushedItemsModel;

		public const string ModelCacheKey = "RemoteSpawningModel";

		[NonSerialized]
		public Dictionary<string, Dictionary<int, RemoteSpawningQueue>> spawningQueuesMap;

		[NonSerialized]
		public List<string> _processedStackUuIds;

		public long CurrentServerTimestamp => 0L;

		public override void InitializeModel()
		{
		}

		public void ServerTimeUpdated()
		{
		}

		public override void DisposeModel()
		{
		}

		public ItemSpawnable GetNextItem(IMergeItem spawnerItem, int bet, ExtraData extraData)
		{
			return null;
		}

		public RemoteSpawningNotificationData GetStacksDataFor(string producerId, int boostOption)
		{
			return null;
		}

		public string TryPeekNextItem(IMergeItem spawnerItem, int bet)
		{
			return null;
		}

		public string GetNextItemInQueueForId(string producerId, int boostOption, RemoteSpawningNotificationData stacksData)
		{
			return null;
		}

		public ExpiryItem FindNotExpiredNextItem(RemoteSpawningQueue itemsQueue, int boostOption, string producerId)
		{
			return null;
		}

		public void OnProducerQueueUpdated(ProducerQueuesPayload producerQueuesPayload)
		{
		}

		public void AddNewQueueToProducer(string producerId, Dictionary<int, RemoteSpawningQueue> producerQueue, ProducerQueuesPayload queuePayload)
		{
		}

		public void AppendToQueue(string producerId, int bet, string latestQueueNotificationId, Queue<ExpiryItem> queueToAppend, string[] stackItems, long expirationTimestamp)
		{
		}

		public void ResetQueueFor(string spawnerId, int bet)
		{
		}

		public void ResetQueueFor(string spawnerId)
		{
		}

		public void ResetQueueForAllSecondaryProducerOfPrimary(IMergeGraphItem graph)
		{
		}

		public void ResetAllQueues()
		{
		}

		public void LeaveRemainingItems(string spawnerId, int numberOfRemaining)
		{
		}

		public bool IsTimestampPast(long expirationTimestamp)
		{
			return false;
		}

		public void ClearAllExpiredItems()
		{
		}

		public void SaveCache()
		{
		}

		public void LoadCache()
		{
		}

		public void LoadFromJson(string json)
		{
		}

		public string SaveToJson()
		{
			return null;
		}

		public void SendProducerChainRenewedAnalytic(string producerId, string itemId)
		{
		}
	}
}
