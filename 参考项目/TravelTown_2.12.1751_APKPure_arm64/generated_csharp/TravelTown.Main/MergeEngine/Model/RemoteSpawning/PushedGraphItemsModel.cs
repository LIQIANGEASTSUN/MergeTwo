using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket.RemoteSpawning;
using Zenject;

namespace MergeEngine.Model.RemoteSpawning
{
	public class PushedGraphItemsModel : ModelBase, IPushedItemsModel
	{
		public class PushedGraphItem
		{
			public string PushNotificationId;

			public string ItemId;

			public int MinLevelInGraph;

			public string PushType;
		}

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public const string ModelCacheKey = "PushedItemsModel";

		[NonSerialized]
		public Dictionary<string, List<PushedGraphItem>> graphContextPushedItems;

		[NonSerialized]
		public List<string> _processedPushIds;

		public override void InitializeModel()
		{
		}

		public override void DisposeModel()
		{
		}

		public void AddPushItem(PushedItem pushedItem)
		{
		}

		public PushedGraphItem ConvertToPushedGraphItem(string pushId, string itemId, GraphPushedItemData extraData)
		{
			return null;
		}

		public void AddPushedGraphItem(PushedGraphItem itemData, string graphId)
		{
		}

		public PushedItemNotificationData FindItemToPushForSpawner(string spawnerId)
		{
			return null;
		}

		public string PeekItemForSpawner(string spawnerId)
		{
			return null;
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

		public PushedItemNotificationData FindGraphItemToPush(string spawnerId)
		{
			return null;
		}
	}
}
